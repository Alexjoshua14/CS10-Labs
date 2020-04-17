/* 
 * Computes the dimensional weight of a box.
 *
 * Code given will computer the dimensional weight
 * based on a given set of values.
 *
 * Alter the code so that the dimensional weight is
 * calculated based on user input of
 * height, length, width
 */

#include <stdio.h>

main() {
  int height, length, width, volume, weight;

  height = 8;
  length = 12;
  width = 10;
  
  printf("Enter height of box: ");
  scanf("%d", &height);
  printf("Enter length of box: ");
  scanf("%d", &length);
  printf("Enter width of box: ");
  scanf("%d", &width);

  volume = height * length * width;
  weight = (volume + 165) / 166;

  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional Weight (pounds): %d\n", weight);

  return 0;
}
