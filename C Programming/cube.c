#include <stdio.h>


int main(){
  int cube[3][3][3] = { {{5, 5, 12}, {13,15,7}, {10, 5, 13}},
                        {{18, 10, 15}, {7, 10, 15}, {12, 12, 10}},
                        {{12, 7, 15}, {10, 12, 15}, {10, 10, 12}}};
  int sorted_cube[27];
  int mean, median, low_range, upper_range, mode, frequency, weight;
  mean = 0;
  int counter = 0;
  //calculate mean value: 
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        mean += cube[i][j][k];
      }
    }
  }
  mean = mean / 27;
  // calculate median:
  
  // create an array
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        sorted_cube[counter] = cube[i][j][k];
        counter++;
      }
    }
  }
  counter = 0;
  // sort array
  while (counter < 26) {
    if (sorted_cube[counter] > sorted_cube[counter+1]){
      int temp = sorted_cube[counter];
      sorted_cube[counter] = sorted_cube[counter+1];
      sorted_cube[counter+1] = temp;
      counter = 0;
    }
    else {
      counter++;
    }
  }
  // find median value
  median = sorted_cube[27/2];
  // find low and upper range
  low_range = sorted_cube[0];
  upper_range = sorted_cube[26];
  
  // find mode 
  counter = 1;
  int max_counter = 0;
  mode = sorted_cube[0];
  for (int i = 0; i < 26; i++) {
    if (sorted_cube[i] != sorted_cube[i+1]) {
      if (counter > max_counter) {
	max_counter = counter;
	mode = sorted_cube[i];
	counter = 1;
      }
      counter = 1;
    } else {
      counter++;
    }
  }
  printf("1. Mean: %d\n2. Median: %d\n3. Range: [%d, %d]\n4. Mode: %d\n5. Enter a weight to check its frequency: ", mean, median, low_range, upper_range, mode);
  // Frequency calculate
  scanf("%d", &weight);
  frequency = 0;
  for (int i = 0; i < 27; i++) {
    if (sorted_cube[i] == weight) {
      frequency++;
    }
  }
  printf("The weight value of %d occurs %d times within the cube.\n", weight, frequency);
  
  return 0;
}
