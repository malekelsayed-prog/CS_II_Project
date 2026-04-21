#ifndef CSVLOADER_HPP
#define CSVLOADER_HPP

#include "Doctor.hpp"
#include <string>

class CSVLoader {
    public:
        std::vector<Doctor> loadDoctor(std::string filePath);
        std::vector<Availability> loadAvailability(std::string filePath);
};

#endif