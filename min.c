/*This program will allow the user to create an array of numbers 
  then the program will find the minimum value */

/*defines printf, getchar, and EOF */
#include <stdio.h>

main () {
  /* ints to be used */
  int size, num, nums[50], min;

  /* Prompt for user for the size of their array */
  printf("Size of array: ");
  scanf("%d", &size);
  
  /* This should loop until the user enters all their numbers, or capacity is reached */
  for(int i = 0; i < size; i++) {
    printf("Number to add to array: ");
    scanf("%d", &num[i]); 
    /* This will keep track of the smallest number as the user inputs more 
       numbers, it will initialize the minimum number to be the first number 
       entered */
    if (i == 0 || nums[i] < nums[i-1] ) {
      min = nums[i];
    } 
  }

  /*This will inform the user as to what the smallest number was */
  printf("The smallest number is %d\n", min);


}

