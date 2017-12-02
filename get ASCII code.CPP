# include <stdio.h>

unsigned int tmp;
unsigned char as;

void main(void) {
  printf("Enter the number: ");
  scanf("%i",&tmp);

  as=(int)tmp;  //output ASCII
  printf("ASCII: %c",as);
  printf("\n 10cc: %u",tmp);
  printf("\n 16cc: %x",tmp);
  printf("h");
}
