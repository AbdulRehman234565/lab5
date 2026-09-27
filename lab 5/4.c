#include <stdio.h>

int main() {
    int code;

    printf("Enter permission code: ");
    if (scanf("%d", &code) != 1) return 1;

    int login = code & 1;
    int file = code & 2;
    int admin = code & 4;
    int sys = code & 8;

    printf("Login: %s\nFile Access: %s\nAdmin Access: %s\nSystem Settings: %s\n",
        login ? "YES" : "NO",
        file ? "YES" : "NO",
        admin ? "YES" : "NO",
        sys ? "YES" : "NO");

    if (admin && sys) {
        printf("Access Level: Administrator Access\n");
    } 
    else if (file) {
        printf("Access Level: Advanced Access\n");
    } 
    else if (login) {
        printf("Access Level: Basic Access\n");
    } 
    else {
        printf("Access Level: No Access\n");
    }

    return 0;
}

