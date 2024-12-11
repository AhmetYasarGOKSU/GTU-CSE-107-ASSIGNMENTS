#include <stdio.h>

int main() {
  int node_len;
  printf("Input the number of nodes: ");
  scanf("%d", &node_len);
  
  int node_array[node_len];
  
  for (int i = 0; i < node_len; i++){
    printf("Input data for node %d: ", i+1);
    scanf("%d", &node_array[i]);
  }
  printf("Data entered in the list are: \n");  
  for (int i = 0; i < node_len; i++){
    printf("Data = %d\n", node_array[i]);
  }
  printf("\n");
  printf("Total number of nodes = %d", node_len);
  printf("\n\n");
  printf("The list in reverse are: \n");
  for (int i = node_len-1; 0 <= i; i--) {
    printf("Data = %d\n", node_array[i]);
  }
}
