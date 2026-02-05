# Online Library Management System

## Overview
The Online Library Management System is a C++ application designed to manage a library's book collection and user accounts. It utilizes Object-Oriented Programming (OOP) principles to encapsulate data and behaviors related to books, users, and the library itself. This system allows users to borrow and return books, while also providing functionalities for adding, removing, and searching for books.

## Project Structure
The project is organized into the following directories and files:

```
online-library-management-system
├── src
│   ├── Book.cpp          # Implementation of the Book class
│   ├── Book.h            # Header file for the Book class
│   ├── Library.cpp       # Implementation of the Library class
│   ├── Library.h         # Header file for the Library class
│   ├── User.cpp          # Implementation of the User class
│   ├── User.h            # Header file for the User class
│   └── main.cpp          # Entry point of the application
├── tests
│   ├── BookTest.cpp      # Test cases for the Book class
│   ├── LibraryTest.cpp   # Test cases for the Library class
│   ├── UserTest.cpp      # Test cases for the User class
│   └── test_utils.h      # Utility functions for tests
├── CMakeLists.txt        # CMake configuration file
└── README.md             # Project documentation
```

## Design Choices
- **Encapsulation**: Each class (Book, Library, User) encapsulates its data and provides public methods to interact with that data, promoting modularity and maintainability.
- **Separation of Concerns**: The project separates the implementation of classes from their definitions, as well as separating the application logic from the testing logic.
- **Test-Driven Development**: Test cases are provided for each class to ensure that all functionalities work as expected and to facilitate future modifications.

## Instructions for Execution
1. **Build the Project**:
   - Navigate to the project directory.
   - Run `cmake .` to generate the build files.
   - Use `make` to compile the project.

2. **Run the Application**:
   - Execute the compiled binary (usually named `online-library-management-system` or similar) to start the application.

3. **Run Tests**:
   - Ensure you have built the project with tests enabled.
   - Run the test executables generated in the `tests` directory to validate the functionality of each class.

## Conclusion
This Online Library Management System serves as a practical application of OOP principles in C++. It provides a user-friendly interface for managing library operations while ensuring that the underlying code is well-structured and maintainable.