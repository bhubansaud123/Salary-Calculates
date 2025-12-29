# Employee Salary Calculation using Inheritance in C++

This project demonstrates **inheritance and method overriding** in C++.
It shows how a derived class can extend a base class and modify its behavior using **virtual functions**.

---

## 📌 Objective

To understand and implement:
- Inheritance in C++
- Virtual functions
- Method overriding
- Runtime polymorphism basics

---

## 🧠 Concepts Used

- Class and Object  
- Inheritance  
- Protected data members  
- Virtual functions  
- Method overriding  

---

## 🧾 Program Description

- `Employee` is a base class containing common employee details
- `Manager` is a derived class that adds an extra attribute (`bonus`)
- The `calculateSalary()` function is overridden in the derived class
- Salary calculation is done based on employee type

---

## 🧩 Class Structure

### Base Class: `Employee`
- **Data Members**
  - `string name`
  - `double salary`
- **Member Function**
  - `virtual double calculateSalary()`

### Derived Class: `Manager`
- **Data Member**
  - `double bonus`
- **Overridden Function**
  - `double calculateSalary()`

---

## ▶️ Sample Input (From Code)

```cpp
Manager m("Bhuban", 50000, 10000);
