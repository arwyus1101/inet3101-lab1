# INET3101 Lab 1

Name: Arwah Yusuf

Simple command-line menu for an Inventory Management System

Name: Arwah Yusuf

## Program Description
This program is a simple in-memory database system implemented in C. It allows users to interact with a menu-driven interface to manage part records. The program demonstrates fundamental C concepts such as loops, functions, switch-case statements, input handling, and command-line arguments.

## Menu Definition and Usage
Upon execution, the program presents a menu with the following options:

1. Print all records
2. Add a record
3. Delete the last record
4. Print number of records
5. Print database size
6. Print number of changes
7. Exit

The user selects an option by entering the corresponding number. The program then performs the requested action and loops back to the menu until the user selects "Exit."

## Function Definitions

### `void printAllRecords()`
- **Input:** None
- **Output:** Prints all records in the database (or a message if none exist)
- **Algorithm:**
  - Check if any records exist.
  - If records exist, iterate and print each record.
  - Otherwise, print a message indicating no records are present.

### `void addRecord()`
- **Input:** User input for part details (number, name, size, metric, cost)
- **Output:** Displays the entered data
- **Algorithm:**
  - Prompt user for part details.
  - Store values in the database array.
  - Print stored details.
  - Increment the modification counter.

### `void deleteLastRecord()`
- **Input:** None
- **Output:** Displays a message indicating a record was deleted
- **Algorithm:**
  - Check if there are any records.
  - If yes, decrement the record count.
  - Print a confirmation message.
  - Increment the modification counter.

### `void printNumRecords()`
- **Input:** None
- **Output:** Displays the number of records in the database
- **Algorithm:**
  - Print the value of the record count variable.

### `void printDatabaseSize()`
- **Input:** None
- **Output:** Displays the total memory size of the database
- **Algorithm:**
  - Print the size of the database array using `sizeof`.

### `void printNumChanges(int print)`
- **Input:** Integer flag to determine action (1 for print, 0 for increment)
- **Output:** Either prints or updates the modification count
- **Algorithm:**
  - If `print` is true, print the modification count.
  - Otherwise, increment the count and display the new value.

## Files Required

| File Name  | Type  | Description |
|------------|-------|-------------|
| `myLab1.c` | `.c`  | Main program source code |
| `README.txt` | `.txt` | Design document for the program |

## Compilation and Execution
To compile and run the program, use the following commands:
```sh
gcc -o myLab1 myLab1.c
./myLab1 MarksDatabase
```

## Notes
- The program requires a database name to be passed as a command-line argument.
- It maintains a static counter to track modifications.
- It uses a structured approach to handling user input and data storage.
