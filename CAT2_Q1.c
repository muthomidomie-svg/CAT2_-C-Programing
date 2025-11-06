/*
NAME : Dominic Muthomi
REG NO : CT101/G/26556/25
DATE : 6/11/2025
*/

#include <stdio.h>

int main() {
    // Declare and initialize the 2D array
    int scores[2][2] = {
        {65, 92},
        {35, 67}
    };

    // Print the elements using nested for loops
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
