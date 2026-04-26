#ifndef SYSTEMCONTROLLER_H
#define SYSTEMCONTROLLER_H

#include <QObject>
#include <vector>
#include "HospitalSystem.hpp"
#include "TimeSlot.hpp"
#include "Doctor.hpp"

class SystemController : public QObject {
    Q_OBJECT

private:
    HospitalSystem system;

public:
    explicit SystemController(QObject *parent = nullptr);

signals:
    void scheduleReady(const std::vector<TimeSlot>& slots);
    void doctorsReady(const std::vector<Doctor>& doctors);
    void departmentsReady(const std::vector<std::string>& departments);

public slots:
    void initialize();
    void loadSchedule();
    void filterByDoctor(const QString& name);
    void filterByDepartment(const QString& dept);
};

#endif