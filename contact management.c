#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

struct Contact {
    char name[50];
    char phone[20];
    char email[50];
};

struct Contact contacts[MAX_CONTACTS];
int num_contacts = 0;

void add_contact() {
    if (num_contacts >= MAX_CONTACTS) {
        printf("Contact list is full.\n");
        return;
    }

    printf("Enter name: ");
    scanf("%s", contacts[num_contacts].name);

    printf("Enter phone number: ");
    scanf("%s", contacts[num_contacts].phone);

    printf("Enter email address: ");
    scanf("%s", contacts[num_contacts].email);

    num_contacts++;
    printf("Contact added successfully!\n");
}

void display_contacts() {
    if (num_contacts == 0) {
        printf("No contacts found.\n");
        return;
    }

    printf("\nContact List:\n");
    for (int i = 0; i < num_contacts; i++) {
        printf("Name: %s\n", contacts[i].name);
        printf("Phone: %s\n", contacts[i].phone);
        printf("Email: %s\n\n", contacts[i].email);
    }
}

int main() {
    int choice;

    do {
        printf("\nContact Management System\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

      switch (choice) {
            case 1:
                add_contact();
                break;
            case 2:
                display_contacts();
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 3);

    return 0;
}



