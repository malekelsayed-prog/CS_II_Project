#include "../include/Doctor.hpp"

Doctor::Doctor(std::string id, std::string name, std::string department) : doctorID(id), name(name), department(department) {} 

std::string Doctor::getDoctorDep() {
    return department;
}

std::string Doctor::getDoctorName() {
    return name;
}

std::string Doctor::getDoctorID() {
    return doctorID;
}