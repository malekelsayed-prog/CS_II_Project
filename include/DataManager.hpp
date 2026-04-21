#ifndef DATAMANAGER_HPP
#define DATAMANAGER_HPP

#include "Appointment.hpp"
#include "Patient.hpp"
#include <vector>


class DataManager {
    public:
        void savePatients(std::vector<Patient> patients);
        std::vector<Patient> loadPatients();
        void saveAppointments(std::vector<Appointment> apps);
        std::vector<Appointment> loadAppointments();
};

#endif