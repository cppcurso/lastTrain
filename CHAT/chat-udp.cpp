#include "NetworkManager.cpp"
#include <thread>

void newMessage(NetworkManager& nm, Message* message)
{
  do{
  message = nm.revieve();
  std::cout << inet_ntoa(message->user.address.sin_addr)
  << " dice " << message->text << '\n';
 }while(true);
}
void sendMessage( NetworkManager nm, Message*  message)
{

  nm.send(message);
}

int main ()
{
    // Inicialización
    NetworkManager nm;
    if (!nm.init()) {
        std::cout << "Error de conexión" << '\n';
        return -1;
}
    Message* message;
    std::thread reception(newMessage, std::ref(nm), std::ref(message));

    std::thread send(sendMessage, std::ref(nm),std::ref(message));
    reception.join();
    send.join();


    nm.end();
}
