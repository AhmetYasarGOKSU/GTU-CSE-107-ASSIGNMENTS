#include <stdio.h>

int main() {
  int array_1[5], array_2[5], counter, can_be_equal, go_again;
  go_again = 1;
  while (go_again == 1){
    counter = 0;
    can_be_equal = 1;
    while(counter < 5){
      printf("Please type %d. integer", counter+1);
      if (scanf("%d", &array_1[counter]) != 1){
        printf("Invalid input.\n");
        while (getchar() != '\n');
          continue;
        }
      counter++;
    }
    counter = 0;
    while(counter < 5){
      printf("Please type %d. integer", counter+1);
      if (scanf("%d", &array_2[counter]) != 1){
        printf("Invalid input.\n");
        while (getchar() != '\n');
          continue;
        }
      counter++;
    }
    for (int i = 0; i < 5; i++){
      for (int j = 0; j < 5; j++) {
        if (array_1[i] == array_2[j]){
          array_1[i] = -999;
          array_2[j] = -999;
          break;
        }
      }    
    }
    for(int k = 0; k < 5; k++){
      if (array_1[k] != -999){

        can_be_equal = 0;
      }
    }
    if (can_be_equal == 0){
      printf("No, array B cannot be made equal to array A.\n");
    }else {
      printf("Yes, array B can be made equal to array A.\n");
    } 
      printf("Do you want to continue? (Press 1 for Yes, 0 for No): ");
      scanf("%d", &go_again);
  }
}
/*#include <stdio.h>

int main() {
    int matrix[3][3]; // 3x3 boyutunda bir 2D array
    int i, j;

    // Kullanıcıdan elemanları alma
    printf("3x3 boyutundaki matrisi doldurunuz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Matrisin elemanlarını yazdırma
    printf("\nGirdiğiniz Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/
