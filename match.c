#include <stdio.h>
#include <string.h>
#define LENGTH 100

void found(char *input1, char *input2) {
  // starting a counter to go through second input
  int count = 0;

  // going through the two inputs
  for (int i = 0; i< strlen(input1); i++) {
    if (input1[i] == input2[count]) {
      // as long as the length of the string is as long as count, 
      if (count+1 == strlen(input2)) {
	printf("%s was found in %s.\n", input2, input1);
	// using return to get out of function completely
	return;
      }
      // checks if the next character matches, if so continues count
      if (input1[i+1] == input2[count+1]) {
	count++;
      } else {
	// if not, the count is reset
	count = 0;
      }
    }
  }
  // gone through all of the first input without a match, end of the function
  printf("%s was not found in %s.\n", input2, input1);
}

int main() {
  // initializing strings
  char input1[LENGTH];
  char input2[LENGTH];

  // asking for input
  printf("Enter the string to search through: ");
  // using fgets, which allows for whitespace
  fgets(input1, LENGTH, stdin);
  // ensures that the newline character is not a part of the string
  if( input1[strlen(input1)-1] == '\n' ) input1[strlen(input1)-1] = 0;

  // asking for second input
  printf("Enter the string to search for: ");
  // using fgets, which allows for whitespace
  fgets(input2, LENGTH, stdin);
  // ensures that the newline character is not a part of the string
  if( input2[strlen(input2)-1] == '\n' ) input2[strlen(input2)-1] = 0;

  // checking for a substring between the two strings
  found(input1, input2);
  return 0;
}
