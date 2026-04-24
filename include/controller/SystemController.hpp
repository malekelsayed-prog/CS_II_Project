#include <QObject>
#include "../core/HospitalSystem.hpp"

class SystemController : public QObject {
    Q_OBJECT

    private:
        HospitalSystem system;

    public:
        explicit SystemController(QObject* parent = nullptr);

    signals:
        void scheduleReady(const std::vector<TimeSlot>& slots);
        void errorOccurred(const QString& message);
        void bookingResult(bool success);

    public slots:
        void loadSchedule();
        void filterByDoctor(const QString& name);
        void filterByDepartment(const QString& dept);

        void addPatient(const QString& name,
                        const QString& birthdate,
                        const QString& gender,
                        const QString& mobileNumber,
                        const QString& nationalID);

        void bookAppointment(const QString& patientID,
                             const QString& doctorID,
                             const QString& date,
                             const QString& startTime);
};