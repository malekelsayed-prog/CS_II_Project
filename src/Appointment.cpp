#include "../include/Appointment.hpp"

Appointment::Appointment(const std::string& id,
                         const std::string& patient,
                         const std::string& doctor,
                         const std::string& date,
                         const std::string& start,
                         const std::string& end) : appointmentID(id), patientID(patient), doctorID(doctor), date(date), startTime(start), endTime(end) {}

bool Appointment::overlaps(const Appointment& other) {
    return (date == other.date && startTime == other.startTime);
}

std::string Appointment::getAppointmentID() const { return appointmentID; }

std::string Appointment::getDoctorID() const { return doctorID; }

std::string Appointment::getPatientID() const { return patientID; }

std::string Appointment::getDate() const { return date; }

std::string Appointment::getStartTime() const { return startTime; }

std::string Appointment::getEndTime() const { return endTime; }
