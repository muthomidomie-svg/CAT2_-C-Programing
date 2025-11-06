/*
 NAME : Dominic Muthomi
REG NO: CT101/G/26556/25
DATE : 6/11/2025
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// Function to write 10 integers into input.txt
void writeInputFile() {
    FILE *fp;
    int numbers[SIZE];

    fp = fopen("input.txt", "w");
    if (fp == NULL) {
        perror("Error opening input.txt for writing");
        exit(1);
    }

    printf("Enter %d integers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
        fprintf(fp, "%d\n", numbers[i]);
    }

    fclose(fp);
    printf("Numbers successfully written to input.txt\n\n");
}

// Function to read integers, calculate sum & average, and write to output.txt
void processFile() {
    FILE *fpIn, *fpOut;
    int num, sum = 0, count = 0;
    double avg;

    fpIn = fopen("input.txt", "r");
    if (fpIn == NULL) {
        perror("Error opening input.txt for reading");
        exit(1);
    }

    while (fscanf(fpIn, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(fpIn);

    if (count == 0) {
        printf("No integers found in input.txt\n");
        exit(1);
    }

    avg = (double)sum / count;

    fpOut = fopen("output.txt", "w");
    if (fpOut == NULL) {
        perror("Error opening output.txt for writing");
        exit(1);
    }

    fprintf(fpOut, "Sum = %d\n", sum);
    fprintf(fpOut, "Average = %.2f\n", avg);

    fclose(fpOut);
    printf("Results successfully written to output.txt\n\n");
}

// Function to display contents of both files
void displayFiles() {
    FILE *fp;
    char ch;

    printf("Contents of input.txt:\n");
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        perror("Error opening input.txt for display");
        exit(1);
    }
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);

    printf("\nContents of output.txt:\n");
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        perror("Error opening output.txt for display");
        exit(1);
    }
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
}

int main() {
    writeInputFile();
    processFile();
    displayFiles();
    return 0;
}