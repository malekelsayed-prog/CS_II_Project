#include "../include/ScheduleManager.hpp"

std::vector<Doctor> filterByDoctor(const std::vector<Doctor>& doctors, const std::string& name) {
    std::vector<Doctor> result;

    for(const auto& d : doctors) {
        if(d.getName() == name) {
            result.push_back(d);
        }
    }

    return result;
}

std::vector<Doctor> filterByDepartment(const std::vector<Doctor>& doctors, const std::string& department) {
    std::vector<Doctor> result;

    for(const auto& d : doctors) {
        if(d.getDepartment() == department) {
            result.push_back(d);
        }
    }

    return result;
}

std::vector<TimeSlot> getDoctorSlots(const Doctor& doctor) {
    std::vector<TimeSlot> allSlots;

    for (const auto& availability : doctor.getAvailableSlots()) {
        std::vector<TimeSlot> slots = availability.generateTimeSlots();

        allSlots.insert(allSlots.end(), slots.begin(), slots.end());
    }

    return allSlots;
}
