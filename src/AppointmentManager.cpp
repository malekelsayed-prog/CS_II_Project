#include "../include/AppointmentManager.hpp"

bool AppointmentManager::checkConflict(const Appointment& a, const std::vector<Appointment>& existing) {
    for (const auto& app : existing) {
        if (app.getDate() == a.getDate() && app.getStartTime() == a.getStartTime()) {
            if (app.getDoctorID() == a.getDoctorID() || app.getPatientID() == a.getPatientID()) {
                return false;
            }
        }
    }

    return true;
}

bool AppointmentManager::checkPatientLimit(const std::string& patientID, const std::string& date, const std::vector<Appointment>& existing) {
    int count = 0;

    for (const auto& app : existing) {
        if (app.getPatientID() == patientID && app.getDate() == date) count++;
    }

    return count < 2;
}

bool AppointmentManager::validateAppointment(const Appointment& a, const std::vector<Appointment>& existing) {
    return (checkConflict(a, existing) && checkPatientLimit(a.getPatientID(), a.getDate(), existing));
}