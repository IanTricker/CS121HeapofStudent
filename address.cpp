#include <iostream>
#include "address.h"

Address::Address(){
  street="";
  city="";
  state="";
  zip="";
} // end constructor

void Address::init(std::string street, std::string city, std::string state, std::string zip){
  Address::street = street;
  Address::city = city;
  Address::state = state;
  Address::zip = zip;
} // end init

void Address::printAddress(){
  std::cout << Address::street << std::endl << Address::city << " " << Address::state << ", " << Address::zip << std::endl;
} // end printAddress
