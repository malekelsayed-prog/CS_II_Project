#ifndef CSVLOADER_HPP
#define CSVLOADER_HPP

#include "Doctor.hpp"
#include <string>
#include <thread>

class CSVLoader {
    public:
        std::vector<Doctor> loadDoctor(const std::string& filePath);
        std::vector<Availability> loadAvailability(const std::string& filePath);
};

#endif