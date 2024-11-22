#include "Employee.h"

Employee::Employee(std::string name, std::string employeeID) :
  name_(name), employeeID_(employeeID) {}

void Employee::placeOrder(Order &order) {
    std::cout << "Place the order" << std::endl;
}

void Employee::processPayment(Order &order) {
    std::cout << "Process the payment" << std::endl;
}

void Employee::shipOrder(Order &order) {
    std::cout << "Ship the order" << std::endl;
}

