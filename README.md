 
# 🏦 Bank Management System

A console-based **Bank Management System** developed in **C++** using **Object-Oriented Programming (OOP)** and **File Handling**. The application allows users to securely manage bank accounts with persistent data storage, making it a practical demonstration of core C++ programming concepts.

---

## 📌 Project Overview

This project simulates the basic operations of a banking system through a menu-driven console application. Customer information is stored in a text file, allowing account data to persist even after the program is closed.

The project was developed as part of the **Thiranex C++ Internship Program** to strengthen concepts such as classes, file handling, vectors, string streams, and CRUD operations.

---

## ✨ Features

- ✅ Create New Bank Account
- 📂 Store Account Data Using File Handling
- 📋 Display All Accounts
- 🔍 Search Account by Account Number
- 💰 Deposit Money
- 💸 Withdraw Money
- 💳 Check Account Balance
- ✏️ Update Account Details
- 🗑️ Delete Account
- 💾 Persistent Storage using `accounts.txt`
- 🖥️ Simple Menu-Driven Interface

---

## 🛠️ Technologies Used

| Technology | Purpose |
|------------|---------|
| C++ | Programming Language |
| Object-Oriented Programming | Data Management |
| File Handling | Persistent Storage |
| STL Vector | Temporary Data Storage |
| StringStream | Parsing File Data |
| VS Code | Development Environment |
| GCC (MSYS2 MinGW) | Compiler |
| Git & GitHub | Version Control |

---

## 📂 Project Structure

```text
Bank-Management-System/
│
├── screenshots/
│   ├── home.png
│   ├── create.png
│   ├── search.png
│   └── transactions.png
│
├── accounts.txt
├── main.cpp
├── .gitignore
└── README.md
```

---

## ⚙️ How It Works

Each account contains the following information:

- Account Number
- Customer Name
- Age
- Phone Number
- Address
- Account Type
- Current Balance

The application stores account information in:

```text
accounts.txt
```

using a pipe-separated format:

```text
101|Vinay|20|9876543210|Nuzvid|Savings|50000
```

---

## 🚀 Getting Started

### Clone the Repository

```bash
git clone https://github.com/karrivinay54/Bank-Management-System.git
```

### Navigate to the Project

```bash
cd Bank-Management-System
```

### Compile

```bash
g++ main.cpp -o main
```

### Run

**Windows**

```bash
./main.exe
```

**Linux/macOS**

```bash
./main
```

---

## 📸 Screenshots

### 🏠 Main Menu

![Main Menu](screenshots/home.png)

---

### ➕ Create Account

![Create Account](screenshots/create.png)

---

### 🔍 Search Account

![Search Account](screenshots/search.png)

---

### 💰 Banking Operations

![Transactions](screenshots/transactions.png)

---

## 📖 Concepts Demonstrated

- Object-Oriented Programming
- Classes and Objects
- Constructors
- File Handling
- CRUD Operations
- Vectors
- String Streams
- Functions
- Menu-Driven Programming
- Data Persistence

---

## 🎯 Future Improvements

- Input Validation
- Duplicate Account Number Detection
- Password Protected Accounts
- Interest Calculation
- Transaction History
- Account Transfer
- Binary File Storage
- GUI Version using Qt or C#

---

## 📚 What I Learned

During this project, I gained practical experience with:

- Designing menu-driven applications
- Managing structured data using classes
- Reading and writing files
- Parsing text files using `stringstream`
- Updating records using vectors
- Applying CRUD operations in C++
- Using Git and GitHub for version control

---

## 👨‍💻 Author

**Karri Vinay**

B.Tech – Electronics & Communication Engineering  
RGUKT IIIT Nuzvid

GitHub:
https://github.com/karrivinay54

LinkedIn:
www.linkedin.com/in/karri-vinay

---

## ⭐ If you found this project helpful

Consider giving the repository a ⭐ on GitHub.
