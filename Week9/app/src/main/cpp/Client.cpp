#include "Client.h"

Client::Client(std::string name, std::string clientID, std::string email): 
               name_(name), clientID_(clientID), email_(email) {}

void Client::registerAccount() {
    std::cout << "Register the account" << std::endl;
}

void Client::placeOrder(Order &order) {
    std::cout << "Place the order" << std::endl;
}

void Client::makePayment(Order &order) {
    std::cout << "Make the payment" << std::endl;
}
