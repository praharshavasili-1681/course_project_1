#include <stdio.h>
#include <string.h>

#define MAX_EMP 50
#define MAX_LEAVE 30

struct Employee {
    int id;
    char name[50];
    int leaveBalance;
};

struct Employee empList[MAX_EMP];
int empCount = 0;

// Function to add employee
void addEmployee() {
    if (empCount >= MAX_EMP) {
        printf("Employee limit reached!\n");
        return;
    }

    struct Employee e;
    printf("Enter Employee ID: ");
    scanf("%d", &e.id);
    printf("Enter Name: ");
    scanf("%s", e.name);

    e.leaveBalance = MAX_LEAVE;  // default leave balance

    empList[empCount++] = e;
    printf("Employee Added Successfully!\n");
}

// Function to display all employees
void displayEmployees() {
    printf("\n--- Employee List ---\n");
    for (int i = 0; i < empCount; i++) {
        printf("ID: %d | Name: %s | Leave Balance: %d\n",
               empList[i].id, empList[i].name, empList[i].leaveBalance);
    }
}

// Function to apply leave
void applyLeave() {
    int id, days;
    printf("Enter Employee ID: ");
    scanf("%d", &id);

    for (int i = 0; i < empCount; i++) {
        if (empList[i].id == id) {
            printf("Enter Leave Days: ");
            scanf("%d", &days);

            if (days <= empList[i].leaveBalance) {
                empList[i].leaveBalance -= days;
                printf("Leave Approved! Remaining Leave: %d\n", empList[i].leaveBalance);
            } else {
                printf("Not enough leave balance!\n");
            }
            return;
        }
    }
    printf("Employee Not Found!\n");
}

// Function to check leave balance
void checkBalance() {
    int id;
    printf("Enter Employee ID: ");
    scanf("%d", &id);

    for (int i = 0; i < empCount; i++) {
        if (empList[i].id == id) {
            printf("Leave Balance for %s: %d days\n",
                   empList[i].name, empList[i].leaveBalance);
            return;
        }
    }

    printf("Employee Not Found!\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n=== Leave Management System ===\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Apply Leave\n");
        printf("4. Check Leave Balance\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: applyLeave(); break;
            case 4: checkBalance(); break;
            case 5: return 0;
            default: printf("Invalid Choice!\n");
        }
    }
}