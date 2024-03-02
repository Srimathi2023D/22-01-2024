#include <stdio.h>

// Function to count the number of digits in a given number
int countDigits(int num) {
    int count = 0;

    // Counting digits
    while (num != 0) {
        num /= 10;
        count++;
    }

    return count;
}

int main() {
    int N;

    // Input the number
    scanf("%d", &N);

    // Count the number of digits and print the result
    int digitCount = countDigits(N);
    printf("%d\n", digitCount);

    return 0;
}
