#ifndef HOSPITAL_SYSTEM_HPP
#define HOSPITAL_SYSTEM_HPP

#include "Patient.hpp"
#include "Doctor.hpp"
#include "AppointmentManager.hpp"
#include <vector>

class HospitalSystem {
    private:
        std::vector<Patient> patients;
        std::vector<Doctor> doctors;
        std::vector<Appointment> appointments;
        AppointmentManager appointmentManager;


    public:
        void loadDoctorsFromCSV();
        void loadAvailabilityFromCSV();
        void loadData();
        void saveData();
        bool addPatient(const Patient& p);
        bool bookAppointment(const Appointment& a);
        void filterSchedule();
        std::vector<TimeSlot> getAvailableSlots();
};

#endif