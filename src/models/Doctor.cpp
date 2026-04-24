#include "../../include/models/Doctor.hpp"

Doctor::Doctor(std::string id, std::string name, std::string department) : doctorID(id), name(name), department(department) {} 

std::string Doctor::getDoctorID() const { return doctorID; }

std::string Doctor::getName() const { return name; }

std::string Doctor::getDepartment() const { return department; }

std::vector<Availability> Doctor::getAvailableSlots() const { return availability; }

void Doctor::addAvailability(const Availability& a) {
    availability.push_back(a);
}