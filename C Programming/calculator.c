#include <stdio.h>

int main (){
  int number_1, number_2, operation, is_okey, is_operation_okey, go_first_loop;
  is_okey = 1;
  is_operation_okey = 0;
  go_first_loop = 0;
  while (is_okey == 1) {
      printf("Please enter 2 integers\nNumber1: ");
      
      if (scanf("%d", &number_1) != 1) {
          printf("Invalid input. Please enter an integer.\n");
          while (getchar() != '\n'); 
          continue; 
      }

      printf("Number2: ");
      if (scanf("%d", &number_2) != 1) { 
          printf("Invalid input. Please enter an integer.\n");
          while (getchar() != '\n');
          continue;
      }
      while (is_operation_okey == 0) { 
        printf("• 1 for Addition\n• 2 for Subtraction\n• 3 for Multiplication\n• 4 for Division\n");
        printf("Please choose a number between 1 and 4: ");
        scanf("%d", &operation);
        if (operation >= 1 && operation <= 4){
              if (number_2 == 0 && operation == 4) {
                printf("Error: Division by zero is not allowed\n What do you want to change? (Press 1 for numbers, 0 for operation): ");
                scanf("%d", &is_operation_okey);
                if (is_operation_okey == 0) {
                  continue;
                }
                else {
                  is_operation_okey = 1;
                  go_first_loop = 1;
                }
              } else {
                is_operation_okey = 1;
              }
        } else {
          printf("Invalid operation.");
        }
      }
      is_operation_okey = 0;
      if (go_first_loop == 1) {
          go_first_loop = 0;
          continue;
      }
      switch (operation) {
        case 1:
          printf("The result of %d + %d: %d\n", number_1, number_2, number_1 + number_2);
          break;
        case 2:
          printf("The result of %d - %d: %d\n", number_1, number_2, number_1 - number_2);
          break;
        case 3:
          printf("The result of %d * %d: %d\n", number_1, number_2, number_1 * number_2);
          break;
        case 4:
          printf("The result of %d / %d: %d\n", number_1, number_2, number_1 / number_2);
          break;
      }
      printf("Do you want to continue? (Press 1 for Yes, 0 for No): ");
      scanf("%d", &is_okey);
  }
}

