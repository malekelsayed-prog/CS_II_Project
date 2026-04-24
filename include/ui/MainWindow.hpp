#include <QMainWindow>

class MainWindow : public QMainWindow {
    Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = nullptr);

    signals:
        void requestLoadSchedule();
        void requestFilterByDoctor(const QString& name);
        void requestFilterByDepartment(const QString& department);
        void requestAddPatient();
        void requestBookAppointment();

    public slots:
        void displaySchedule(const std::vector<TimeSlot>& schedule);
        void showError(const QString& message);
        void refreshUI();

};