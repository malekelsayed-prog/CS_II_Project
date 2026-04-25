#include "../../include/core/HospitalSystem.hpp"

void HospitalSystem::initializeSystem(const std::string& doctorsFile,
                                      const std::string& patientsFile,
                                      const std::string& appointmentsFile,
                                      const std::string& availabilityFile) {
    
    doctors = csvLoader.loadDoctors(doctorsFile);
    auto availabilityList = csvLoader.loadAvailability(availabilityFile);

    for(auto& doctor : doctors) {
        for(const auto& avail : availabilityList) {
            if(avail.getDoctorID() == doctor.getDoctorID())
                doctor.addAvailability(avail);
        }
    }

    patients = dataManager.loadPatients(patientsFile);
    appointments = dataManager.loadAppointments(appointmentsFile);
}

bool HospitalSystem::addPatient(const Patient& p) {
    for(const auto& patient : patients) {
        if (patient.getNationalID() == p.getNationalID()) return false;
    }

    patients.push_back(p);
    return true;    
}

std::vector<Patient> HospitalSystem::getPatients() const {
    return patients;
}

bool HospitalSystem::bookAppointment(const Appointment& a) {
    if(!appointmentManager.validateAppointment(a, appointments)) 
        return false;

    appointments.push_back(a);
    return true;
}

std::vector<Appointment> HospitalSystem::getAppointments() const {
    return appointments;
}

std::vector<TimeSlot> HospitalSystem::getAvailableSlots() {
    std::vector<TimeSlot> allSlots;

    for (const auto& doctor : doctors) {
        auto slots = scheduleManager.getDoctorSlots(doctor);
        allSlots.insert(allSlots.end(), slots.begin(), slots.end());

    }
}