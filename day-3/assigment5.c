//write a c program to read the number of notes as input from the user for indian currency dimensions and print the total amount
#include <stdio.h>

int main() {
    // Declare variables for the number of notes and total amount
    int notes_2000, notes_500, notes_200, notes_100, notes_50, notes_20, notes_10, notes_5, notes_2, notes_1;
    int total_amount;

    // Input the number of notes for each denomination
    printf("Enter the number of 2000 rupee notes: ");
    scanf("%d", &notes_2000);

    printf("Enter the number of 500 rupee notes: ");
    scanf("%d", &notes_500);

    printf("Enter the number of 200 rupee notes: ");
    scanf("%d", &notes_200);

    printf("Enter the number of 100 rupee notes: ");
    scanf("%d", &notes_100);

    printf("Enter the number of 50 rupee notes: ");
    scanf("%d", &notes_50);

    printf("Enter the number of 20 rupee notes: ");
    scanf("%d", &notes_20);

    printf("Enter the number of 10 rupee notes: ");
    scanf("%d", &notes_10);

    printf("Enter the number of 5 rupee notes: ");
    scanf("%d", &notes_5);

    printf("Enter the number of 2 rupee notes: ");
    scanf("%d", &notes_2);

    printf("Enter the number of 1 rupee notes: ");
    scanf("%d", &notes_1);

    // Calculate the total amount
    total_amount = (notes_2000 * 2000) +
                   (notes_500 * 500) +
                   (notes_200 * 200) +
                   (notes_100 * 100) +
                   (notes_50 * 50) +
                   (notes_20 * 20) +
                   (notes_10 * 10) +
                   (notes_5 * 5) +
                   (notes_2 * 2) +
                   (notes_1 * 1);

    // Print the total amount
    printf("The total amount is: %d rupees\n", total_amount);

    return 0; // Successful execution
}
