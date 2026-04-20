#ifndef HOSPITAL_SYSTEM_HPP
#define HOSPITAL_SYSTEM_HPP

#include "Patient.hpp"
#include "Doctor.hpp"
#include "Appointment.hpp"
#include <vector>

class HospitalSystem {
    private:
        std::vector<Patient> patients;
        std::vector<Doctor> doctors;
        std::vector<Appointment> appointments;

    public:
        void loadDoctorsFromCSV();
        void loadAvailabilityFromCSV();
        void loadData();
        void saveData();
        bool addPatient(Patient p);
        bool bookAppointment(Appointment a);
        void filterSchedule();
        std::vector<TimeSlot> getAvailableSlots();
};

#endif