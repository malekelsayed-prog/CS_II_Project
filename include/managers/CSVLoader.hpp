#ifndef CSVLOADER_HPP
#define CSVLOADER_HPP

#include "../models/Doctor.hpp"
#include <string>


class CSVLoader {
    public:
        std::vector<Doctor> loadDoctor(const std::string& filePath);
        std::vector<Availability> loadAvailability(const std::string& filePath);
};

#endif