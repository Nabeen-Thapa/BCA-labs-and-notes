#include <stdio.h>

int main() {
    int choice;
    
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
        case 2:
            printf("You selected option 1 or 2.\n");
            break;
        case 3:
            printf("You selected option 3.\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
    
    return 0;
}

