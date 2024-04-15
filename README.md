# Vector Operations System

## Overview
This system is designed to perform various operations on vectors dynamically allocated in memory. It provides a menu-based interface for users to interact with and manipulate vectors through different operations.

## Features
- **Create Vector**: Allows users to create a new vector with a specified size.
- **Release Vector**: Frees the memory allocated for a vector.
- **Get Vector Size**: Retrieves the size of a vector.
- **Access Vector Element**: Accesses the value at a specific position in a vector.
- **Assign Value to Vector Element**: Assigns a new value to a specified position in a vector.
- **Sort Vector**: Sorts the elements of a vector in ascending order.
- **List Vector**: Displays the elements of a vector.
- **Sum of Vector Elements**: Calculates the sum of all elements in a vector.
- **Sum of Two Vectors**: Creates a new vector by adding corresponding elements of two input vectors.
- **Exit**: Terminates the program.

## Usage
1. Run the program.
2. Choose from the menu options to perform various operations on vectors.
3. Follow the prompts to input necessary information for each operation.
4. The program will execute the selected operation and provide appropriate outputs.

## Error Handling
- The system validates user inputs and provides error messages for invalid inputs or operations.
- Error messages are displayed when attempting operations on uninitialized or invalid vectors.

## Dependencies
- Standard C libraries: `stdio.h`, `stdlib.h`, `math.h`
- Custom library: `biblioteca2.h`

## Compilation
Compile the program using a C compiler:

    gcc main.c biblioteca2.c -o vector_operations

## Execution
Run the compiled program:

    ./vector_operations

## License
This project is licensed under the [MIT License](https://opensource.org/licenses/MIT).
