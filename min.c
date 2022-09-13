#include <stdio.h>
#include <limits.h>

int min_array(int a[], int length) {
  int min = INT_MAX;
  for (int i = 0; i < length; i++) {
    if (array[i] < min) {
      min = array[i];
    }
  }
  return min;
}

int main(void) {
  int array = {1,2,3,5,-189,53,8569};
  int m = min_array(array,7);
  printf("%d\n", m);
  return 0;
}
