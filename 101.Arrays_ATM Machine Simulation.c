#include <stdio.h>
#include <ctype.h>

#define MAX 100

int n;
int account[MAX], pin[MAX];
long long balance[MAX];

int loggedIn = 0;
int currentIndex = -1;
int stop = 0;


void loginUser();
void checkBalance();
void depositMoney();
void withdrawMoney();
void logoutUser();
void exitATM();

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d %lld", &account[i], &pin[i], &balance[i]);
    }

    char line[200];

    while (!stop) {
        if (!fgets(line, sizeof(line), stdin))
            break;

        int i = 0;
        while (line[i] == ' ' || line[i] == '\t') i++;

        if (line[i] == '\n' || line[i] == '\0')
            continue;

      
        if (isdigit(line[i]))
            continue;

        char choice = line[i];

        switch (choice) {
            case 'A': loginUser(); break;
            case 'B': checkBalance(); break;
            case 'C': depositMoney(); break;
            case 'D': withdrawMoney(); break;
            case 'E': logoutUser(); break;
            case 'F': exitATM(); break;
            default:
                printf("Invalid choice. Please enter A, B, C, D, E, or F.\n");
        }
    }
    return 0;
}



void loginUser() {
    if (loggedIn) {
        printf("User %d is already using the ATM.\n", account[currentIndex]);
        return;
    }

    int acc, p;
    scanf("%d %d", &acc, &p);

    for (int i = 0; i < n; i++) {
        if (account[i] == acc && pin[i] == p) {
            loggedIn = 1;
            currentIndex = i;
            printf("Welcome User %d\n", acc);
            return;
        }
    }
    printf("Wrong Credentials!\n");
}

void checkBalance() {
    if (!loggedIn) {
        printf("Login first!\n");
        return;
    }
    printf("Balance: Rs.%lld\n", balance[currentIndex]);
}

void depositMoney() {
    if (!loggedIn) {
        printf("Login first!\n");
        return;
    }

    long long amt;
    scanf("%lld", &amt);
    balance[currentIndex] += amt;
    printf("New Balance: Rs.%lld\n", balance[currentIndex]);
}

void withdrawMoney() {
    if (!loggedIn) {
        printf("Login first!\n");
        return;
    }

    long long amt;
    scanf("%lld", &amt);

    if (amt > balance[currentIndex]) {
        printf("Insufficient balance!\n");
    } else {
        balance[currentIndex] -= amt;
        printf("New Balance: Rs.%lld\n", balance[currentIndex]);
    }
}

void logoutUser() {
    if (!loggedIn) {
        printf("No user is currently logged in.\n");
        return;
    }
    loggedIn = 0;
    currentIndex = -1;
    printf("Logged out successfully.\n");
}

void exitATM() {
    if (loggedIn) {
        printf("Exiting the ATM without logging out is not allowed.\n");
    } else {
        printf("Exiting ATM. Thank you!\n");
        stop = 1;
    }
}