#include "Delivery.h"
#include "Order.h"


Delivery::Delivery(std::string deliveryID, std::string deliveryMethod, float deliveryCost, std::string pickupLocation) :
  deliveryID_(deliveryID), deliveryMethod_(deliveryMethod), deliveryCost_(deliveryCost), pickupLocation_(pickupLocation) {}


// std::string Delivery::getDeliveryID() {
//   return deliveryID_;
// }

// std::string Delivery::getDeliveryMethod() {
//   return deliveryMethod_;
// }

// std::string Delivery::getDeliveryAddress() {
//   return deliveryAddress_;
// }

// PickupPoint Delivery::getPickupPoint() {
//   return pickupPoint_;
// }
