#include "../../include/managers/DataManager.hpp"
#include <fstream>
#include <sstream>
#include <iostream>

void DataManager::savePatients(const std::vector<Patient>& patients, const std::string& filePath) {
    std::ofstream file(filePath);

    if(!file.is_open()) {
        std::cerr << "Error opening patients file for writing.\n";
        return;
    }

    file << "Name,Birthdate,Gender,Mobile,NationalID\n";

    for (const auto& p : patients) {
        file << p.getName() << ","
             << p.getBirthdate() << ","
             << p.getGender() << ","
             << p.getMobileNumber() << ","
             << p.getNationalID() << "\n";
    }

    file.close();
}

void DataManager::saveAppointments(const std::vector<Appointment>& appointments, const std::string& filePath) {
    std::ofstream file(filePath);

    if(!file.is_open()) {
        std::cerr << "Error opening appointments file for writing.\n";
        return;
    }

    file << "AppointmentID,PatientID,DoctorID,Date,StartTime,EndTime\n";

    for (const auto& a : appointments) {
        file << a.getAppointmentID() << ","
             << a.getPatientID() << ","
             << a.getDoctorID() << ","
             << a.getDate() << ","
             << a.getStartTime() << ","
             << a.getEndTime() << "\n";
    }

    file.close();
}

std::vector<Patient> DataManager::loadPatients(const std::string& filePath) {
    std::vector<Patient> patients;
    std::ifstream file(filePath);

    if(!file.is_open()) return patients;

    std::string line;
    getline(file, line);
    
    while(getline(file, line)) {
        std::stringstream ss(line);
        std::string name, birth, gender, mobile, id;

        getline(ss, name, ',');
        getline(ss, birth, ',');
        getline(ss, gender, ',');
        getline(ss, mobile, ',');
        getline(ss, id, ',');

        patients.emplace_back(name, birth, gender, mobile, id);
    }

    return patients;
}

std::vector<Appointment> DataManager::loadAppointments(const std::string& filePath) {
    std::vector<Appointment> appointments;
    std::ifstream file(filePath);

    if(!file.is_open()) return appointments;

    std::string line;
    getline(file, line);

    while(getline(file, line)) {
        std::stringstream ss(line);
        std::string id, patient, doctor, date, start, end;

        getline(ss, id, ',');
        getline(ss, patient, ',');
        getline(ss, doctor, ',');
        getline(ss, date, ',');
        getline(ss, start, ',');
        getline(ss, end, ',');

        appointments.emplace_back(id, patient, doctor, date, start, end);
    }

    return appointments;
}