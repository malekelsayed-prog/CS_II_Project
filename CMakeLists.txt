cmake_minimum_required(VERSION 3.16)

project(HospitalManagementSystem VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

include_directories(
    include
    include/models
    include/core
    include/managers
    include/ui
    include/controller
)

set(SOURCES
    src/main.cpp

    src/models/Patient.cpp
    src/models/Doctor.cpp
    src/models/Appointment.cpp
    src/models/Availability.cpp
    src/models/TimeSlot.cpp

    src/core/HospitalSystem.cpp
    src/core/AppointmentManager.cpp

    src/managers/CSVLoader.cpp
    src/managers/DataManager.cpp
    src/managers/ScheduleManager.cpp






    src/controller/SystemController.cpp
)

set(HEADERS
    include/models/Patient.hpp
    include/models/Doctor.hpp
    include/models/Appointment.hpp
    include/models/Availability.hpp
    include/models/TimeSlot.hpp

    include/core/HospitalSystem.hpp
    include/core/AppointmentManager.hpp

    include/managers/CSVLoader.hpp
    include/managers/DataManager.hpp
    include/managers/ScheduleManager.hpp






    include/controller/SystemController.hpp
)

qt_add_executable(HospitalManagementSystem
    ${SOURCES}
    ${HEADERS}
    src/ui/mainwindow.h src/ui/mainwindow.cpp src/ui/mainwindow.ui
    src/ui/patientform.h src/ui/patientform.cpp src/ui/patientform.ui
    src/ui/bookingdialog.h src/ui/bookingdialog.cpp src/ui/bookingdialog.ui
    src/ui/scheduleview.h src/ui/scheduleview.cpp src/ui/scheduleview.ui
)

target_link_libraries(HospitalManagementSystem PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
)

file(COPY IOFiles DESTINATION ${CMAKE_BINARY_DIR})

set_target_properties(HospitalManagementSystem PROPERTIES
    WIN32_EXECUTABLE TRUE
)
