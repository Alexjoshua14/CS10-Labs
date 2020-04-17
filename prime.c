/* This program will compute the primes from 1-1000 */
#include <stdio.h>
#include <stdlib.h>

/* Size of the array */
#define SIZE 1000

/* Creating boolean type */
typedef int bool;
#define TRUE 1
#define FALSE 0

int main() {
  int a[SIZE] = {0};
  for(int i =1; i < SIZE; i++){
    a[i] = 1;
  }
  for(int i = 2; i < SIZE; i++){
    for(int j = 2; (j < i) && (j< (SIZE/2)); j++){
      if(!(i % j)){
	a[i] = 0;
	break;
      }

    }
    for(int i =0; i < SIZE; i++){
      if(a[i] == 1){
	printf("%d\n", i); 
      }
  }

  }
  



  return 0;
}
