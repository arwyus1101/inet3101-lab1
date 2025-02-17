# INET3101 Lab 1

Name: Arwah Yusuf

Program Description
This is a simple command-line menu for an Inventory Management System. It provides an interface for managing part records. The program demonstrates simple C concepts like loops, functions, and switch-case statements.

Menu Options
When the program runs, it shows a menu with these choices:

1. Print all records
2. Add a record
3. Delete last record
4. Print number of records
5. Print database size
6. Print number of changes
7. Exit

The user enters a number to select an option. The program performs the action and returns to the menu until the user chooses "Exit."

Functions

`void printAllRecords()`
- Purpose: Displays all records or a message if none exist.
- Steps:
  - Check if there are records.
  - If yes, print them.
  - Otherwise, show a message.

`void addRecord()`
- Purpose: Adds a new part record.
- Steps:
  - Ask the user for part details.
  - Save the details.
  - Print the new record.
  - Update the change count.

 `void deleteLastRecord()`
- Purpose: Removes the last record.
- Steps:
  - Check if records exist.
  - If yes, remove the last one.
  - Show a confirmation message.
  - Update the change count.

 `void printNumRecords()`
- Purpose: Prints how many records exist.
- Steps:
  - Display the count of records.

 `void printDatabaseSize()`
- Purpose: Shows memory usage.
- Steps:
  - Print the size of the record array using `sizeof`.

 `void printNumChanges(int print)`
- Purpose: Tracks changes.
- Steps:
  - If `print` is 1, display the count.
  - Otherwise, increase the count and print it.



