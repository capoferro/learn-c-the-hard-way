#include <stdio.h>

int main(int argc, char *argv[])
{
  int areas[] = {10, 12, 13, 14, 20};
  char full_name[] = {
    'J', 'o', 's', 'i', 'a', 'h', ' ',
    'D', ' ',
    'K', 'i', 'e', 'h', 'l', '\0'
  };
  char name[] = "Josiah";

  name[1] = 'X';
  areas[0] = 1000;

  printf("The size of an int: %ld\n", sizeof(int));
  printf("The size of areas (int[]): %ld\n",
         sizeof(areas) / sizeof(int));
  printf("The number of ints in areas: %ld\n",
         sizeof(areas) / sizeof(int));
  printf("The first area is %d, the 2nd %d.\n",
         areas[0], areas[10]);

  printf("The size of a char: %ld\n", sizeof(char));
  printf("The size of name (char[]): %ld\n",
         sizeof(name));
  printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));

  printf("The size of full_name (char[]): %ld\n", 
         sizeof(full_name));
  printf("The number of chars: %ld\n", 
         sizeof(full_name) / sizeof(char));
  printf("name=\"%s\" and full_name=\"%s\"\n", 
         name, full_name);

  return 0;
}
