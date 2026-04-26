#include "../../include/managers/ScheduleManager.hpp"

std::vector<Doctor> ScheduleManager::filterByDoctor(const std::vector<Doctor>& doctors, const std::string& name) {
    std::vector<Doctor> result;

    for(const auto& d : doctors) {
        if(d.getName() == name) {
            result.push_back(d);
        }
    }

    return result;
}

std::vector<Doctor> ScheduleManager::filterByDepartment(const std::vector<Doctor>& doctors, const std::string& department) {
    std::vector<Doctor> result;

    for(const auto& d : doctors) {
        if(d.getDepartment() == department) {
            result.push_back(d);
        }
    }

    return result;
}

std::vector<TimeSlot> ScheduleManager::getDoctorSlots(const Doctor& doctor) {
    std::vector<TimeSlot> allSlots;
    const std::string name = doctor.getName();
    const std::string Id = doctor.getDoctorID();
    const std::string department = doctor.getDepartment();

    for (const auto& availability : doctor.getAvailableSlots()) {
        std::vector<TimeSlot> slots = availability.generateTimeSlots(name, Id, department);

        allSlots.insert(allSlots.end(), slots.begin(), slots.end());
    }

    return allSlots;
}
