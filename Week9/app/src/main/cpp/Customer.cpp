#include "Customer.h"

Customer::Customer(std::string name, std::string customerID) :
  name_(name), customerID_(customerID) {}

void Customer::placeOrder(Order &order) {
    std::cout << "Place the order" << std::endl;
}

void Customer::makePayment(Order &order) {
    std::cout << "Make the payment" << std::endl;
}
