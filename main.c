#include <stdio.h>
#include <string.h>

typedef struct Patient
{
    int id;
    char name[50];
    int age;
    char disease[50];
    char status[20];
} Pts;

// Global declarations
Pts PXs[100]; // PXs - Patients
int patientCount = 0;

// Add Patient Function
void addPts()
{
    int id, i, found = 0, age;
    // Checking capacity
    if (patientCount >= 100)
    {
        printf("Patient record limit reached\n");
        return;
    }
    printf("Enter Patient ID: ");
    scanf("%d", &id);
    // Checking for duplicate IDs
    for (i = 0; i < patientCount; i++)
    {
        if (PXs[i].id == id)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("Patient ID already exists!\n");
        return;
    }

    printf("Enter Patient Age: ");
    scanf("%d", &age);

    if (age <= 0 || age > 120)
    {
        printf("Invalid age! Enter an age between 1 and 120.\n");
        return;
    }

    // Store patient details after age validation
    PXs[patientCount].id = id;

    printf("Enter Patient Name: ");
    scanf(" %49[^\n]", PXs[patientCount].name);

    PXs[patientCount].age = age;

    printf("Enter Disease: ");
    scanf(" %49[^\n]", PXs[patientCount].disease);

    strcpy(PXs[patientCount].status, "Admitted");

    patientCount++;
    printf("Patient registered successfully!\n");
}
// Function for Displaying All Patient Details
void displayPts()
{
    if (patientCount == 0)
    {
        printf("No patient record found.\n");
        return;
    }
    printf("\n==== PATIENT RECORDS ====\n");

    for (int i = 0; i < patientCount; i++)
    {
        printf("\nPatient ID: %d\n", PXs[i].id);
        printf("Name: %s\n", PXs[i].name);
        printf("Age: %d\n", PXs[i].age);
        printf("Disease: %s\n", PXs[i].disease);
        printf("Status: %s\n", PXs[i].status);
    }
}
// Search Function
void searchPts()
{
    int id, i, found = 0;

    printf("Enter Patient ID to search: ");
    scanf("%d", &id);

    for (i = 0; i < patientCount; i++)
    {
        if (PXs[i].id == id)
        {
            found = 1;

            printf("\n==== PATIENT FOUND ====\n");
            printf("Patient ID: %d\n", PXs[i].id);
            printf("Name: %s\n", PXs[i].name);
            printf("Age: %d\n", PXs[i].age);
            printf("Disease: %s\n", PXs[i].disease);
            printf("Status: %s\n", PXs[i].status);
            break;
        }
    }

    if (found == 0)
        printf("Patient not found!\n");
}
// Update Patient Function
void updatePts()
{
    int id, i, found = 0, newAge;
    char newName[50];

    printf("Enter Patient ID to update: ");
    scanf("%d", &id);

    // Finding Patient
    for (i = 0; i < patientCount; i++)
    {
        if (PXs[i].id == id)
        {
            found = 1;
            break;
        }
    }

    // If not found
    if (found == 0)
    {
        printf("Patient not found!\n");
        return;
    }

    printf("Enter New Name: ");
    scanf(" %49[^\n]", newName);

    printf("Enter New Age: ");
    scanf("%d", &newAge);

    // Checking for valid age value
    if (newAge <= 0 || newAge > 120)
    {
        printf("Invalid age! Update cancelled.\n");
        return;
    }

    // Updating name and age
    strcpy(PXs[i].name, newName);
    PXs[i].age = newAge;

    printf("Enter New Disease: ");
    scanf(" %49[^\n]", PXs[i].disease);

    printf("Patient details updated successfully!\n");
}
// Discharging Patient Function
void dischargePts()
{
    int id, i, found = 0;
    printf("Enter patient ID to discharge: ");
    scanf("%d", &id);

    // Searching for patient with ID
    for (i = 0; i < patientCount; i++)
    {
        if (PXs[i].id == id)
        {
            found = 1;
            break;
        }
    }

    // If not found
    if (found == 0)
    {
        printf("Patient not found!\n");
        return;
    }

    if (strcmp(PXs[i].status, "Discharged") == 0)
    {
        printf("Patient is already discharged!\n");
        return;
    }

    strcpy(PXs[i].status, "Discharged");
    printf("Patient discharged successfully!\n");
}

int main()
{
    int choice;

    do
    {
        // Main Menu
        printf("\n============================================\n");
        printf("     HOSPITAL PATIENT MANAGEMENT SYSTEM     \n");
        printf("============================================\n");
        printf("1. Add Patient\n");
        printf("2. Display All Patients\n");
        printf("3. Search Patient\n");
        printf("4. Update Patient\n");
        printf("5. Discharge Patient\n");
        printf("6. Exit\n");
        printf("============================================\n");
        // Input for Choice
        printf("Enter your choice: ");
        scanf("%d", &choice);
        // choice condition
        if (choice < 1 || choice > 6)
            printf("Invalid choice! Please enter a number between 1 and 6.\n");

        switch (choice)
        {
        case 1:
            printf("\n==== ADD PATIENT ====\n");
            addPts();
            break;
        case 2:
            displayPts();
            break;
        case 3:
            printf("\n==== SEARCH PATIENT ====\n");
            searchPts();
            break;
        case 4:
            printf("\n==== UPDATE PATIENT DETAILS ====\n");
            updatePts();
            break;
        case 5:
            printf("\n==== DISCHARGE PATIENT ====\n");
            dischargePts();
            break;
        case 6:
            printf("\nEXITING PROGRAM...\n");
            break;
        default:
            break;
        }
    } while (choice != 6);

    return 0;
}