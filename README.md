# Hospital Patient Management System in C

A menu-driven mini-project developed using the C programming language to manage basic patient records. This project demonstrates fundamental C programming concepts such as structures, arrays, functions, loops, conditional statements, and string handling.

## Features

- **Add Patient:** Add a new patient with an ID, name, age, disease, and admission status.
- **Display All Patients:** Display the records of all stored patients.
- **Search Patient:** Search for a patient using their unique ID.
- **Update Patient:** Update a patient's name, age, and disease.
- **Discharge Patient:** Mark a patient as discharged without deleting their record.
- **Input Validation:** Check for duplicate patient IDs, invalid ages, and the maximum record limit.

## Technologies Used

- **Programming Language:** C
- **Compiler:** GCC or any compatible C compiler
- **Libraries:** `stdio.h` and `string.h`

## Concepts Implemented

- Structures (`struct`)
- Type definitions using `typedef`
- Arrays and variables
- User-defined functions
- Conditional statements (`if-else`)
- `switch` statement
- `do-while` loop
- String handling using `strcpy()` and `strcmp()`
- Input and output using `scanf()` and `printf()`

## Main Menu

The program provides the following options:

1. Add Patient
2. Display All Patients
3. Search Patient
4. Update Patient
5. Discharge Patient
6. Exit

## How to Run the Program

### Prerequisites

Make sure a C compiler, such as GCC, is installed on your system.

### Compilation

Open a terminal in the directory containing `main.c` and compile the program using:

```bash
gcc main.c -o hospital_management
```

### Execution

**Windows:**

```bash
.\hospital_management.exe
```

**Linux / macOS:**

```bash
./hospital_management
```

## Limitations

- The program supports a maximum of 100 patient records.
- Patient records are stored in memory and are lost when the program exits.
- The program uses basic input validation.
- It is an educational project and is not intended for actual hospital operations.

## Future Improvements

- Implement file handling to save patient records permanently.
- Improve input validation and error handling.
- Add appointment scheduling and billing features.
- Implement sorting and filtering of patient records.
- Explore database integration for persistent storage.

## Purpose

This project was developed as a Programming for Problem Solving (PPS) mini-project to practise fundamental C programming concepts through a practical, real-world-style application.

---

**Author:** Md. Rashid Iqbal Khan  
**Course:** B.Tech in Computer Science and Engineering  
**Project:** Hospital Patient Management System in C