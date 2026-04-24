#include "../../include/models/Patient.hpp"

Patient::Patient(const std::string& name, 
                 const std::string& birthdate, 
                 const std::string& gender, 
                 const std::string& mobileNumber,
                 const std::string& NationalID) : name(name), birthdate(birthdate), gender(gender), mobileNumber(mobileNumber), NationalID(NationalID) {}

std::string Patient::getName() const { return name; }

std::string Patient::getBirthdate() const { return birthdate; }

std::string Patient::getGender() const { return gender; }

std::string Patient::getMobileNumber() const { return mobileNumber; }

std::string Patient::getNationalID() const { return NationalID; }

void Patient::updateMobileNumber(std::string newNumber) {
    mobileNumber = newNumber;
}