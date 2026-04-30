#include <stdio.h>

void add() {
    float num, add;

    printf("\n");
    printf("Input 1st Number: ");
    scanf("%f", &num);
    printf("Input 2nd Number: ");
    scanf("%f", &add);
    
    num += add;

    printf("\nResult: %.2f\n\n", num);
}

int main() {
    int run = 1;
    while (run == 1) {
        int choice;
        printf("[1] Addition\n[2] Negation\n[3] Multiplication\n[4] Division\n[5] Quit\nSelect your calc: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: add(); break;
            case 5: run = 0; break;
        }
    }

}