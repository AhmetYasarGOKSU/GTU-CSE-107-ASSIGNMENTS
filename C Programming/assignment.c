#include <stdio.h>

int factorial(int x) {
    int total = 1; 
    for (int i = 1; i <= x; i++) {
        total *= i;  
    }
    return total;
}
int square(int x) {
    return x * x;
}

int fibonacci(int x) {
    int first_value, second_value;
    first_value = 0;
    second_value = 1;
    printf("First %d terms: %d, %d ", x, first_value, second_value);

    for (int i = 2; i < x; i++) {
        second_value += first_value;
        first_value = second_value - first_value;
        printf(",%d ", second_value);
    }
    printf("\n");
}

int main() {
    int start;
    printf("What do you want to do ?(For factorial and square press 1, For fibonacci press 2):\n");
    scanf("%d", &start);
    if (start != 1 && start != 2) {
        printf("Invalid value. Please try again.");
        return 0;
        }
    int is_input_correct = 0;
    int number;

    while (is_input_correct == 0) {
        printf("Type a positive integer: ");
        scanf("%d", &number);
        if (number > 0) {
            is_input_correct = 1;
        }
        else {
            printf("Invalid value.");
            while (getchar() != '\n');  // '\n' karakterini bulana kadar giriş akışını temizler

        }
    }
    if (start == 1) {
        if (number < 10) {
            int result = factorial(number);  
            printf("Factorial of %d is %d\n", number, result);  
        } else if (number >= 10) {
            int result = square(number);
            printf("Square of %d is %d\n", number, result);  
        }
        return 0;
    } else if (start == 2) {
        int result = fibonacci(number);
        return result;
    }
}

