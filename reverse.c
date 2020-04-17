/* Reverses a series of numbers */

#include <stdio.h>

/* redefine the SIZE macro with an expression using sizeof function */
#define SIZE (sizeof(a)/sizeof(a[0]))

int main() {
  int i, s;

  printf("Enter size of array to be created: ");
  scanf("%d", &s);
  int a[s];
  printf("Enter %d numbers: ", s);
  for(i = 0; i < SIZE; i++) {
    scanf("%d", &a[i]);
  }

  printf("In reverse order:");
  for (i = SIZE-1; i >=0; i--) {
    printf(" %d", a[i]);
  }
  printf("\n%d",sizeof(a)/sizeof(a[0]));

  return 0;
}
