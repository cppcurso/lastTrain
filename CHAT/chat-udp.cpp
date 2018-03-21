#include "NetworkManager.cpp"
#include <thread>

void newMessage(NetworkManager& nm, Message* message)
{
  message = nm.revieve();
  std::cout << inet_ntoa(message->user.address.sin_addr)
  << " dice " << message->text << '\n';


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

    // envío

    nm.send(message);

    // Finalización
  reception.join();
    nm.end();


}
