#include "../../include/models/Availability.hpp"
#include <vector>

Availability::Availability(std::string id, std::string day, std::string start, std::string end) : doctorID(id), weekday(day), startTime(start), endTime(end) {}

static int toMinutes(const std::string& time) {
    int h = std::stoi(time.substr(0,2));
    int m = std::stoi(time.substr(3, 2));
    return h * 60 + m;
}

static std::string toTime(int minutes) {
    int h = minutes / 60;
    int m = minutes % 60;

    std::string hh = (h < 10 ? "0" : "") + std::to_string(h);
    std::string mm = (m < 10 ? "0" : "") + std::to_string(m);

    return hh + ":" + mm;
}

std::vector<TimeSlot> Availability::generateTimeSlots() const {
    std::vector<TimeSlot> slots;

    int start = toMinutes(startTime);
    int end = toMinutes(endTime);

    for (int t = start; t + 20 <= end; t += 20) {
        slots.emplace_back(toTime(t), toTime(t + 20));
    }

    return slots;
}

std::string Availability::getDoctorID() const {
    return doctorID;
}