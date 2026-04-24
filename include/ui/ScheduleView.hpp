#include <QWidget>

class ScheduleView : public QWidget {
    Q_OBJECT

    public:
        explicit ScheduleView(QWidget* parent = nullptr)

    public slots:
        void updateSchedule(const std::vector<TimeSlot>& slots);
};