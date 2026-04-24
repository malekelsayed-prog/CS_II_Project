#ifndef HOSPITAL_SYSTEM_HPP
#define HOSPITAL_SYSTEM_HPP

#include <vector>

#include "../models/Patient.hpp"
#include "../models/Doctor.hpp"

#include "../core/AppointmentManager.hpp"
#include "../managers/DataManager.hpp"
#include "../managers/CSVLoader.hpp"
#include "../managers/ScheduleManager.hpp"


class HospitalSystem {
    private:
        std::vector<Patient> patients;
        std::vector<Doctor> doctors;
        std::vector<Appointment> appointments;
        
        AppointmentManager appointmentManager;
        DataManager dataManager;
        CSVLoader csvLoader;
        ScheduleManager scheduleManager;

    public:
        void initializeSystem(const std::string& doctorsFile,
                              const std::string& availabilitFile,
                              const std::string& patientsFile,
                              const std::string& appointmentsFile);

        bool addPatient(const Patient& p);
        std::vector<Patient> getPatients() const;
        
        bool bookAppointment(const Appointment& a);
        std::vector<Appointment> getAppointments() const;

        std::vector<TimeSlot> getAvailableSlots();
        std::vector<TimeSlot> getFilteredSlotsByDoctor(const std::string& name);
        std::vector<TimeSlot> getFilteredSlotsByDepartment(const std::string& dept);

        void saveData(const std::string& patientsFile,
                      const std::string& doctorsFile);

};

#endif