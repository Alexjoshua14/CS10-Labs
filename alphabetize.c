#include <stdio.h>
#include <string.h>
#define SIZE 10
#define LENGTH 100

int smallest(char array[SIZE][LENGTH], int i) {
  // looking for the word that comes first when alphabetized, returns index
  int tracker = 0;
  for(int k = 1; k < i; k++) {
    if(strcmp(array[tracker], array[k]) > 0) {
      tracker = k;
    }
  }
  return tracker;
}

int main() {
  // creating an array based on defined constants
  char array[SIZE][LENGTH];
  // setting i outside of the loop in order to pass it into 'smallest' function
  int i; 
  
  // gets the list of words from the user
  for (i = 0; i < SIZE; i++) {   
    printf("Enter a word: ");
    fgets(array[i], LENGTH, stdin);
    // in the case that the list is cut short, passes in the list of the array while not counting new line character
    if (!strcmp(array[i], "\n")){
      i = i-1;
      break;
    }
  }

  // getting the index of the 'smallest' word in the list
  int index = smallest(array, i);
  printf("This is the smallest word: %s", array[index]);
  return 0;
}
