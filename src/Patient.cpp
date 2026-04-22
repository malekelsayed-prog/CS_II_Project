#include "../include/Patient.hpp"

std::string Patient::getNationalID() {
    return NationalID;
}

void Patient::updateMobileNumber(std::string newNumber) {
    mobileNumber = newNumber;
}