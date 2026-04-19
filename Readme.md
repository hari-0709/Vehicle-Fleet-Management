# 🚗 Vehicle Fleet Management System

## 📖 Overview
The Vehicle Fleet Management System is a menu-driven application developed in C programming language. It is designed to manage vehicle records efficiently using a singly linked list. The system allows users to perform CRUD (Create, Read, Update, Delete) operations through a simple and interactive interface.

This project demonstrates the use of dynamic memory allocation, structured programming, and data structures to solve a real-world problem.

---

## 🎯 Objectives
- To implement a real-world application using C
- To understand and apply linked list data structure
- To perform CRUD operations efficiently
- To develop a modular and menu-driven program

---

## 👥 Team Members
- S. Sairaj (CDS/2025/1577)  
- M. Hari (CDS/2025/1592)

---

## 📌 Problem Statement
Managing vehicle records manually can be inefficient and time-consuming. This project aims to create a digital system to store, manage, and manipulate vehicle data effectively using data structures.

---

## 🧠 Data Structure Used
**Singly Linked List**

Each vehicle is stored as a node containing vehicle details and a pointer to the next node.

---

## ⚙️ Features
- Add Vehicle Record  
- Delete Vehicle Record  
- Update Vehicle Details  
- Search Vehicle by ID  
- Display All Vehicles  

---

## 🔁 CRUD Operations

| Operation | Description |
|----------|------------|
| Create   | Add a new vehicle record |
| Read     | Display all vehicle records |
| Update   | Modify existing vehicle details |
| Delete   | Remove a vehicle record |

---

## 🧩 Algorithm

1. Start the program  
2. Display menu options  
3. Accept user input  
4. Perform the selected operation:
   - Insert a new node (Add)
   - Traverse list (Display/Search)
   - Modify node data (Update)
   - Remove node (Delete)
5. Repeat until user selects Exit  
6. End program  

---

## 🏗️ System Design
struct Vehicle {
int id;
char name[50];
char type[30];
float mileage;
struct Vehicle* next;
};

---

## 💻 Compilation & Execution

```bash
gcc main.c -o project
./project
```

## 📊 Sample Output

---

====== Vehicle Fleet Management ======
1. Add Vehicle
2. Delete Vehicle
3. Update Vehicle
4. Search Vehicle
5. Display Vehicles
6. Exit

Enter your choice: 1
Enter Vehicle ID: 101
Enter Vehicle Name: TruckA
Enter Vehicle Type: Truck
Enter Mileage: 12.5
Vehicle Added Successfully!

Enter your choice: 1
Enter Vehicle ID: 102
Enter Vehicle Name: CarB
Enter Vehicle Type: Car
Enter Mileage: 18.2
Vehicle Added Successfully!

Enter your choice: 5

--- Vehicle List ---
ID: 102 | Name: CarB | Type: Car | Mileage: 18.20
ID: 101 | Name: TruckA | Type: Truck | Mileage: 12.50

Enter your choice: 4
Enter Vehicle ID to search: 101
Found -> ID: 101 | Name: TruckA | Type: Truck | Mileage: 12.50

Enter your choice: 3
Enter Vehicle ID to update: 102
Enter New Name: CarX
Enter New Type: SUV
Enter New Mileage: 20.5
Vehicle updated successfully.

Enter your choice: 2
Enter Vehicle ID to delete: 101
Vehicle deleted successfully.

Enter your choice: 5

--- Vehicle List ---
ID: 102 | Name: CarX | Type: SUV | Mileage: 20.50

Enter your choice: 6
Exiting...
---