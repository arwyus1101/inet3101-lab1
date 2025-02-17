#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RECORDS 100

// Structure to hold part information
typedef struct {
    int partNumber;
    char partName[50];
    float partSize;
    char partSizeMetric[10];
    float partCost;
} Part;

// Global variables
Part database[MAX_RECORDS];
int recordCount = 0;
int changeCount = 0;
char databaseName[50];

// Function prototypes
void printAllRecords();
void addRecord();
void deleteLastRecord();
void printNumRecords();
void printDatabaseSize();
void printNumChanges(int print);

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Error: Database name required.\nUsage: %s <DatabaseName>\n", argv[0]);
        return 1;
    }

    strncpy(databaseName, argv[1], sizeof(databaseName) - 1);
    databaseName[sizeof(databaseName) - 1] = '\0'; // Ensure null termination

    int choice;
    do {
        printf("\n%s Database Menu:\n", databaseName);
        printf("1. Print all records\n");
        printf("2. Add record\n");
        printf("3. Delete last record\n");
        printf("4. Print number of records\n");
        printf("5. Print database size\n");
        printf("6. Print number of changes\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: printAllRecords(); break;
            case 2: addRecord(); break;
            case 3: deleteLastRecord(); break;
            case 4: printNumRecords(); break;
            case 5: printDatabaseSize(); break;
            case 6: printNumChanges(1); break;
            case 7: printf("Exiting program...\n"); break;
            default: printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 7);

    return 0;
}

void printAllRecords() {
    printf("You have entered the Print all records function\n");
    if (recordCount == 0) {
        printf("No records in the database.\n");
    } else {
        for (int i = 0; i < recordCount; i++) {
            printf("\nRecord %d:\n", i + 1);
            printf("Part number: %d\n", database[i].partNumber);
            printf("Part name: %s\n", database[i].partName);
            printf("Part size: %.2f %s\n", database[i].partSize, database[i].partSizeMetric);
            printf("Part cost: $%.2f\n", database[i].partCost);
        }
    }
}

void addRecord() {
    if (recordCount >= MAX_RECORDS) {
        printf("Database is full. Cannot add more records.\n");
        return;
    }

    printf("Enter Part number: ");
    scanf("%d", &database[recordCount].partNumber);
    printf("Enter Part name: ");
    scanf("%s", database[recordCount].partName);
    printf("Enter Part size: ");
    scanf("%f", &database[recordCount].partSize);
    printf("Enter Part size metric: ");
    scanf("%s", database[recordCount].partSizeMetric);
    printf("Enter Part cost: ");
    scanf("%f", &database[recordCount].partCost);

    printf("You entered:\n");
    printf("Part number = %d\n", database[recordCount].partNumber);
    printf("Part name = \"%s\"\n", database[recordCount].partName);
    printf("Part size = %.2f\n", database[recordCount].partSize);
    printf("Part size metric = \"%s\"\n", database[recordCount].partSizeMetric);
    printf("Part cost = $%.2f\n", database[recordCount].partCost);

    recordCount++;
    printNumChanges(0);
}

void deleteLastRecord() {
    if (recordCount == 0) {
        printf("No records to delete.\n");
        return;
    }
    recordCount--;
    printf("You have entered the delete last record function\n");
    printNumChanges(0);
}

void printNumRecords() {
    printf("You have entered the Print number of records function\n");
    printf("Number of records: %d\n", recordCount);
}

void printDatabaseSize() {
    printf("You have entered the Print database size function\n");
    printf("Database size: %lu bytes\n", sizeof(database));
}

void printNumChanges(int print) {
    static int modifications = 0;
    if (print) {
        printf("You have modified the database %d times\n", modifications);
    } else {
        modifications++;
        printf("%d modifications so far\n", modifications);
    }
}
