#include "../../include/controller/SystemController.hpp"
#include <QTime>

SystemController::SystemController(QObject *parent)
    : QObject(parent)
{
}

void SystemController::loadSchedule()
{
    emit scheduleReady(system.getAvailableSlots());
}

void SystemController::filterByDoctor(const QString &name)
{
    emit scheduleReady(
        system.getFilteredSlotsByDoctor(name.toStdString())
        );
}

void SystemController::filterByDepartment(const QString &dept)
{
    emit scheduleReady(
        system.getFilteredSlotsByDepartment(dept.toStdString())
        );
}

void SystemController::addPatient(const QString &name,
                                  const QString &birthdate,
                                  const QString &gender,
                                  const QString &mobileNumber,
                                  const QString &nationalID)
{
    Patient p(
        name.toStdString(),
        birthdate.toStdString(),
        gender.toStdString(),
        mobileNumber.toStdString(),
        nationalID.toStdString()
        );

    bool success = system.addPatient(p);

    if (success)
        emit bookingResult(true);
    else
        emit errorOccurred("Could not add patient.");
}

void SystemController::bookAppointment(const QString &patientID,
                                       const QString &doctorID,
                                       const QString &date,
                                       const QString &startTime)
{
    QTime start = QTime::fromString(startTime, "HH:mm");
    QTime end = start.addSecs(20 * 60);

    Appointment a(
        "A001",
        patientID.toStdString(),
        doctorID.toStdString(),
        date.toStdString(),
        startTime.toStdString(),
        startTime.toStdString()
        );

    bool success = system.bookAppointment(a);

    emit bookingResult(success);

    if (!success)
        emit errorOccurred("Booking failed.");
}
