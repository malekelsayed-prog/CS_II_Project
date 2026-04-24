#include <QWidget>

class BookingDialog : public QWidget {
    Q_OBJECT

    public:
        explicit BookingDialog(QWidget* parent = nullptr);

    signals:
        void appointmentRequested(const QString& patientID,
                                  const QString& doctorID,
                                  const QString& date,
                                  const QString& startTime);
    public slots:
        void showAvailableSlots(const std::vector<TimeSlot>& slots);
        void showBookingResult(bool success);
};