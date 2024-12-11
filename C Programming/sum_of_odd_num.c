#include <stdio.h>

int main() {
  int num, is_okey, what_num, total;
  is_okey = 1;
  while (is_okey == 1){
    total = 0;
    printf("Please enter a positive integer: ");
    if (scanf("%d", &num) != 1){
      printf("Invalid input.");
      while (getchar() != '\n');
      continue;
    }
    if (num <= 0) {
      printf("Invalid input.");
      while(getchar() != '\n');
      continue;
    }
    for (int i = 1; i <= num; i += 2){
      total += i;

    }
    printf("The sum of odd numbers from 1 to %d is %d.\n", num, total);
    printf("Do you want to continue? (Press 1 for Yes, 0 for No): ");
    scanf("%d", &is_okey);
  }
}
