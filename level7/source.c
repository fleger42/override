#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

void m(void)
{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  printf("%s - %d\n",c,(int)tVar1);
  return;
}



int main(int ac, char *av[])
{
  char *first;
  char *second;
  FILE *stream;
  
  first = malloc(8);
  *first = 1;
  first[1] = (int)malloc(8);

  second = malloc(8);
  *second = 2;
  second[1] = (int)malloc(8);

  strcpy(&first[1],av[1]);
  strcpy(&second[1],av[2]);
  stream = fopen("/home/user/level8/.pass","r");
  fgets(c,68,stream);
  puts("~~");
  return 0;
}