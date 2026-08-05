# Railway Station Management System

## Overview

The Railway Station Management System is a C++ console application that simulates the daily operations of a railway station. It manages train departures using a **queue** (FIFO) and maintenance requests using a **stack** (LIFO). The program provides an interactive menu that allows users to add, view, process, and clear train departures and maintenance requests.

---

## Files Included

| File | Description |
|------|-------------|
| `train_queue.cpp` | Implementation of the `TrainQueue` class using a queue data structure. |
| `maintenance_stack.cpp` | Implementation of the `MaintenanceStack` class using a stack data structure. |
| `program6.h` | Header file containing class declarations, structures, constants, and function prototypes. |
| `program6_driver.cpp` | Driver program that provides the interactive railway station management system. |
| `README.md` | Project documentation. |

---

## Features

### Train Departure Management (Queue)

- Add new train departures.
- View the next scheduled train.
- Process (depart) the next train.
- Clear all train departures.
- First-In, First-Out (FIFO) processing.

### Maintenance Request Management (Stack)

- File new maintenance requests.
- View the latest maintenance request.
- Resolve the latest maintenance request.
- Clear all maintenance requests.
- Last-In, First-Out (LIFO) processing.

---

## Program Flow

The program performs the following steps:

1. Displays the Railway Station Management System menu.
2. Allows the user to:
   - Add a train departure.
   - View the next departing train.
   - Process the next train departure.
   - Clear all train departures.
   - File a maintenance request.
   - View the latest maintenance request.
   - Resolve the latest maintenance request.
   - Clear all maintenance requests.
3. Repeats until the user selects **-1** to exit.

---

## Data Stored

### Train Information

Each train record contains:

- Train number
- Destination
- Departure time
- Passenger count

### Maintenance Request Information

Each maintenance request contains:

- Request number
- Maintenance issue
- Staff reporter name

---