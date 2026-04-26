#include "SystemController.hpp"
#include <set>

SystemController::SystemController(QObject *parent)
    : QObject(parent) {}

void SystemController::initialize()
{
    system.initializeSystem(
        "data/doctors.csv",
        "data/availability.csv",
        "data/patients.csv",
        "data/appointments.csv"
    );

    auto doctors = system.getDoctors();
    emit doctorsReady(doctors);
    
    std::set<std::string> deptSet;
    for (const auto& d : doctors) {
        deptSet.insert(d.getDepartment());
    }

    std::vector<std::string> departments(deptSet.begin(), deptSet.end());
    emit departmentsReady(departments);

    loadSchedule();
}

void SystemController::loadSchedule()
{
    auto slots = system.getAvailableSlots();
    emit scheduleReady(slots);
}

void SystemController::filterByDoctor(const QString& name)
{
    if (name == "All Doctors") {
        loadSchedule();
        return;
    }

    auto slots = system.getFilteredSlotsByDoctor(name.toStdString());
    emit scheduleReady(slots);
}

void SystemController::filterByDepartment(const QString& dept)
{
    if (dept == "All Departments") {
        loadSchedule();
        return;
    }

    auto slots = system.getFilteredSlotsByDepartment(dept.toStdString());
    emit scheduleReady(slots);
}