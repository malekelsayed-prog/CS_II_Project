#include "../include/CSVLoader.hpp"
#include <sstream>
#include <fstream>
#include <iostream>

static std::vector<std::string> split(const std::string& line) {
    std::vector<std::string> tokens;
    std::string token;
    std::stringstream ss(line);

    while(getline(ss, token, ',')) {
        tokens.push_back(token);
    }

    return tokens;
}

std::vector<Availability> CSVLoader::loadAvailability(const std::string& filePath) {
    std::vector<Availability> availability;
    std::ifstream file(filePath);

    if(!file.is_open()) {
        std::cerr << "Error: Could not open availability CSV file.\n";
        return availability;
    }

    std::string line;

    getline(file, line);

    while(getline(file, line)) {
        std::vector<std::string> data = split(line);

        if (data.size() != 4) continue;

        std::string id = data[0];
        std::string day = data[1];
        std::string start = data[2];
        std::string end = data[3];

        Availability avail(id, day, start, end);
        availability.push_back(avail);
    }

}

std::vector<Doctor> CSVLoader::loadDoctor(const std::string& filePath) {
    std::vector<Doctor> doctors;
    std::ifstream file(filePath);

    if(!file.is_open()) {
        std::cerr << "Error: Could not open Doctor CSV file.\n";
        return doctors;
    }

    std::string line;

    getline(file, line);

    while(getline(file, line)) {
        std::vector<std::string> data = split(line);

        if (data.size() != 3) continue;
        
        std::string name = data[0];
        std::string id = data[1];
        std::string department = data[2];

        Doctor doctor(id, name, department);
        doctors.push_back(doctor);
    }

    file.close();
    return doctors;
}