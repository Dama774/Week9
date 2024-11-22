#include "Item.h"

Item::Item(std::string name, double price, int quantity) 
  : name_(name), price_(price), quantity_(quantity) {}

std::string Item::getName() {
  return name_;
}

double Item::getPrice() {
  return price_;
}

int Item::getQuantity() {
  return quantity_;
}

