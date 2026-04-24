#include <QWidget>

class PatientForm : public QWidget {
    Q_OBJECT

    public:
        explicit MainWindow(QWidget* parent = nullptr);

    signals:
        void patientSubmitted(const QString& name,
                              const QString& birthdate,
                              const QString& gender,
                              const QString& mobile,
                              const QString& nationalID);

    public slots:
        void clearForm();
        void showError(const QString& message);
};