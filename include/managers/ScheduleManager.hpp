#ifndef SCHED_MANAGER_HPP
#define SCHED_MANAGER_HPP

#include <string>
#include <vector>
#include "../models/Doctor.hpp"
#include "../models/TimeSlot.hpp"

class ScheduleManager {
    public:
        std::vector<Doctor> filterByDoctor(const std::vector<Doctor>& doctors, const std::string& name);
        std::vector<Doctor> filterByDepartment(const std::vector<Doctor>& doctors, const std::string& department);
        
        void getDoctorSlots(const Doctor& doctor);
};

#endif