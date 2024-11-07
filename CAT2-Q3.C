*/
Author:Maxwell Gathara
Reg no:CT101/G/2271/24
Date:07/11/24
/*

#include <stdio.h>

int main() {
    int scores[2][4] = {
        {65, 92, 35, 70},
        {84, 72, 59, 67}
    };

    // Printing elements using nested for loop
    printf("Array elements:\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");  // New line after each row
    }

    return 0;
}
