#include "../../include/controller/SystemController.hpp"

SystemController::SystemController(QObject* parent = nullptr) : QObject(parent) {}

void SystemController::loadSchedule() {
    auto slots = system.getAvailableSlots();
    emit scheduleReady(slots);
}

void SystemController::filterByDoctor(const QString& name) {
    
}