#include "HospitalSystem.hpp"


void HospitalSystem::initializeSystem(const std::string& doctorsFile,
                                      const std::string& availabilityFile,
                                      const std::string& patientsFile,
                                      const std::string& appointmentsFile)
{
    doctors = DataManager::loadDoctors(doctorsFile);
    availabilities = CSVLoader::loadAvailability(availabilityFile);
    appointments = CSVLoader::loadAppointments(appointmentsFile);

  
    for (auto& doctor : doctors) {
        for (const auto& avail : availabilities) {
            if (avail.getDoctorID() == doctor.getDoctorID()) {
                doctor.addAvailability(avail);
            }
        }
    }
}


std::vector<Doctor> HospitalSystem::getDoctors() const {
    return doctors;
}


std::vector<TimeSlot> HospitalSystem::getAvailableSlots()
{
    std::vector<TimeSlot> allSlots;

    for (const auto& doctor : doctors) {
        auto doctorSlots = doctor.generateTimeSlots(); 

        for (auto& slot : doctorSlots) {
            for (const auto& appt : appointments) {
                if (slot.matchesAppointment(
                        appt.getDoctorID(),
                        appt.getDate(),
                        appt.getStartTime())) {
                    
                    slot.setBooked(true);
                }
            }
        }

        allSlots.insert(allSlots.end(), doctorSlots.begin(), doctorSlots.end());
    }

    return allSlots;
}


std::vector<TimeSlot> HospitalSystem::getFilteredSlotsByDoctor(const std::string& name)
{
    auto slots = getAvailableSlots();
    std::vector<TimeSlot> filtered;

    for (const auto& s : slots) {
        if (s.getDoctorName() == name) {
            filtered.push_back(s);
        }
    }

    return filtered;
}


std::vector<TimeSlot> HospitalSystem::getFilteredSlotsByDepartment(const std::string& dept)
{
    auto slots = getAvailableSlots();
    std::vector<TimeSlot> filtered;

    for (const auto& s : slots) {
        if (s.getDepartment() == dept) {
            filtered.push_back(s);
        }
    }

    return filtered;
}