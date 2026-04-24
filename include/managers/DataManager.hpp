#ifndef DATAMANAGER_HPP
#define DATAMANAGER_HPP

#include "../models/Appointment.hpp"
#include "../models/Patient.hpp"
#include <vector>
#include <string>


class DataManager {
    public:
        void savePatients(const std::vector<Patient>& patients, const std::string& filePath);
        std::vector<Patient> loadPatients(const std::string& filePath);
        void saveAppointments(const std::vector<Appointment>& appointments, const std::string& filePath);
        std::vector<Appointment> loadAppointments(const std::string& filePath);
};

#endif