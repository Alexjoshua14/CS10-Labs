/* This program will compute the primes from 1-1000 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Size of the array */
#define SIZE 1000

/* Creating boolean type */
typedef int bool;
#define TRUE 1
#define FALSE 0

int main() {
  clock_t start, end;
  double timeElapsed;
  start = clock;

  int a[SIZE] = {0};
  int *ptr = a;
  int *ptr2 = a;
  for(ptr = &a[1]; ptr < &a[SIZE]; ptr++){
    *ptr = 1;
    printf("%d\n", ptr);
    }
  printf("%d\n", sizeof(ptr));
  
  for(ptr = &a[2]; ptr < &a[SIZE]; ptr++){
    for(ptr2 = &a[2]; (ptr2 < ptr) && (ptr2 < (SIZE/2)); ptr2++){
      if(!(ptr % ptr2)){
	*ptr = 0;
	break;
      }

    }
     for(ptr = &a[0]; ptr < &a[SIZE]; ptr++){
      if(*ptr == 1){
	printf("%d\n", ptr);
      }
  }

  }
  
  end = clock();
  timeElapsed = ((double (end-start)) / CLOCKS_PER_SEC;


  return 0;
}
