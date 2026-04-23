#include "../include/HospitalSystem.hpp"


bool HospitalSystem::addPatient(const Patient& p) {
    for(const auto& patient : patients) {
        if (patient.getNationalID() == p.getNationalID()) return false;
    }

    patients.push_back(p);
    return true;    
}

bool HospitalSystem::bookAppointment(const Appointment& a) {
    if(!appointmentManager.validateAppointment(a, appointments)) 
        return false;

    appointments.push_back(a);
    return true;
}