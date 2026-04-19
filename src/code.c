#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Vehicle {
    int id;
    char name[50];
    char type[30];
    float mileage;
    struct Vehicle* next;
};

struct Vehicle* head = NULL;

void addVehicle() {
    struct Vehicle* newNode = (struct Vehicle*)malloc(sizeof(struct Vehicle));

    printf("Enter Vehicle ID: ");
    scanf("%d", &newNode->id);

    printf("Enter Vehicle Name: ");
    scanf("%s", newNode->name);

    printf("Enter Vehicle Type: ");
    scanf("%s", newNode->type);

    printf("Enter Mileage: ");
    scanf("%f", &newNode->mileage);

    newNode->next = head;
    head = newNode;

    printf("Vehicle Added Successfully!\n");
}

void displayVehicles() {
    struct Vehicle* temp = head;

    if (temp == NULL) {
        printf("No vehicles found.\n");
        return;
    }

    printf("\n--- Vehicle List ---\n");
    while (temp != NULL) {
        printf("ID: %d | Name: %s | Type: %s | Mileage: %.2f\n",
               temp->id, temp->name, temp->type, temp->mileage);
        temp = temp->next;
    }
}

void searchVehicle() {
    int id;
    printf("Enter Vehicle ID to search: ");
    scanf("%d", &id);

    struct Vehicle* temp = head;
    while (temp != NULL) {
        if (temp->id == id) {
            printf("Found -> ID: %d | Name: %s | Type: %s | Mileage: %.2f\n",
                   temp->id, temp->name, temp->type, temp->mileage);
            return;
        }
        temp = temp->next;
    }

    printf("Vehicle not found.\n");
}

void deleteVehicle() {
    int id;
    printf("Enter Vehicle ID to delete: ");
    scanf("%d", &id);

    struct Vehicle *temp = head, *prev = NULL;

    if (temp != NULL && temp->id == id) {
        head = temp->next;
        free(temp);
        printf("Vehicle deleted.\n");
        return;
    }

    while (temp != NULL && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Vehicle not found.\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Vehicle deleted.\n");
}

void updateVehicle() {
    int id;
    printf("Enter Vehicle ID to update: ");
    scanf("%d", &id);

    struct Vehicle* temp = head;

    while (temp != NULL) {
        if (temp->id == id) {
            printf("Enter New Name: ");
            scanf("%s", temp->name);

            printf("Enter New Type: ");
            scanf("%s", temp->type);

            printf("Enter New Mileage: ");
            scanf("%f", &temp->mileage);

            printf("Vehicle updated successfully.\n");
            return;
        }
        temp = temp->next;
    }

    printf("Vehicle not found.\n");
}

int main() {
    int choice;

    do {
        printf("\n====== Vehicle Fleet Management ======\n");
        printf("1. Add Vehicle\n");
        printf("2. Delete Vehicle\n");
        printf("3. Update Vehicle\n");
        printf("4. Search Vehicle\n");
        printf("5. Display Vehicles\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addVehicle(); break;
            case 2: deleteVehicle(); break;
            case 3: updateVehicle(); break;
            case 4: searchVehicle(); break;
            case 5: displayVehicles(); break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }

    } while (choice != 6);

    return 0;
}