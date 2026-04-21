# Hospital Management System (HMS)

## Overview

This project is a Hospital Management System (HMS) developed using C++ and the Qt framework. It is designed for a single administrative user to manage patient records, doctor schedules, and appointment booking.

The system enforces scheduling constraints, prevents conflicts, and provides a visual timetable interface for efficient operation.

---

## Features

### Schedule Visualization

* Visual timetable displaying all available appointment slots
* Filtering by:

  * Doctor name
  * Department

---

### Patient Management

* Add new patients with:

  * Name
  * Birthdate
  * Gender
  * Mobile Number
  * National ID
* Enforces unique National ID constraint
* Only the mobile number can be edited after creation

---

### Appointment Booking

* Fixed 20-minute time slots
* Booking constraints:

  * Maximum 2 appointments per patient per day
  * No doctor or patient conflicts
  * Must be booked at least 1 hour in advance
  * Must be within a 2-month window

---

### Data Persistence

* Patient records and appointments are saved locally
* Data is restored when the application restarts

---

### Initial Data (Read-Only)

Loaded from CSV files:

* Doctors CSV: doctor ID, name, and department
* Availability CSV: weekly working hours

---

## System Architecture

The project follows a modular design with clear separation of responsibilities:

### Core Components

* `HospitalSystem`: Main controller
* `Patient`, `Doctor`, `Appointment`, `Availability`, `TimeSlot`: Data models

### Managers

* `AppointmentManager`: Handles validation rules
* `ScheduleManager`: Filtering and timetable generation
* `DataManager`: Saving and loading data
* `CSVLoader`: Reads initial CSV data

### UI Layer (Qt)

* Handles user interaction using signals and slots
* Communicates with backend logic

---

## UML Design

The system is designed using a UML Class Diagram with:

* Encapsulation (private and public members)
* Defined relationships (association, aggregation, composition)
* Separation of concerns

---

## Technologies Used

* C++ (C++11 or newer)
* Qt Framework
* CMake
* CSV file handling

---

## Build and Run

### Prerequisites

* Qt installed
* C++ compiler (C++11 or newer)
* CMake

### Steps

```bash
# Clone the repository
git clone <your-repo-link>

# Navigate into project
cd HMS_Project

# Build using CMake
mkdir build
cd build
cmake ..
make

# Run the executable
./HMS_Project
```

---

## Project Structure

```
/src
  /models
    Patient.hpp
    Doctor.hpp
    Appointment.hpp
    Availability.hpp
    TimeSlot.hpp

  /core
    HospitalSystem.hpp
    AppointmentManager.hpp

  /managers
    DataManager.hpp
    ScheduleManager.hpp
    CSVLoader.hpp

  /ui
    MainWindow.hpp
    BookingDialog.hpp
```

---

## Important Notes

* Do not modify the CSV files (read-only data source)
* Ensure no duplicate National IDs
* Follow all appointment validation rules
* Do not include `.cpp` files; they are compiled separately

---

## Milestones

### Milestone 1

* UML Class Diagram

### Upcoming

* Core system implementation
* Qt user interface
* Integration and testing

---

## Author

Malek Ahmed Elsayed
Karim Allam


---

## License

This project is for educational purposes.
