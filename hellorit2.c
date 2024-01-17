#include <stdio.h>

// Function declaration
void printMessages(int numberOfMessages);

int main() {
    int numberOfMessages = 5; // You can change this to any number you like

    // Calling the printMessages function with the number of messages
    printMessages(numberOfMessages);

    return 0;
}

// Function definition
void printMessages(int numberOfMessages) {
    for (int i = 0; i < numberOfMessages; i++) {
        printf("Hello RIT Dubai!\n");
    }
}
