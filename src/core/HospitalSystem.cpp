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

std::vector<TimeSlot> HospitalSystem::getAvailableSlots() const {
    std::vector<TimeSlot> allSlots;

    for (const auto& doctor : doctors) {
        auto slots = scheduleManager.getDoctorSlots(doctor);
        allSlots.insert(allSlots.end(), slots.begin(), slots.end());
    }

    return allSlots;
}

std::vector<TimeSlot> HospitalSystem::getFilteredSlotsByDoctor(const std::string& name) const
{
    std::vector<TimeSlot> filtered;

    for (const auto& slot : getAvailableSlots())
    {
        if (slot.getDoctorName() == name)
        {
            filtered.push_back(slot);
        }
    }

    return filtered;
}

std::vector<TimeSlot> HospitalSystem::getFilteredSlotsByDepartment(const std::string& dept) const
{
    std::vector<TimeSlot> filtered;

    for (const auto& slot : getAvailableSlots())
    {
        if (slot.getDepartment() == dept)
        {
            filtered.push_back(slot);
        }
    }

    return filtered;
}

void HospitalSystem::saveData(const std::string& patientsFile, const std::string& appointmentsFile) {
    dataManager.savePatients(patients, patientsFile);
    dataManager.saveAppointments(appointments, appointmentsFile);
}

std::vector<Doctor> HospitalSystem::getDoctors() const {
    return doctors;
}