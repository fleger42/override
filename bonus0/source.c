#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *p(char *dest, char *s)
{
  char buf[4096]; // [esp+10h] [ebp-1008h] BYREF

  puts(s);
  read(0, buf, 4096);
  *strchr(buf, 10) = 0;
  return strncpy(dest, buf, 20);
}

//----- (0804851E) --------------------------------------------------------
char *pp(char *dest)
{
  char src[20];
  char v3[20];

  p(src, " - ");
  p(v3, " - ");
  strcpy(dest, src);
  dest[strlen(dest)] = ' ';
  dest[strlen(dest) + 1] = '\0';
  return strcat(dest, v3);
}

//----- (080485A4) --------------------------------------------------------
int main(int argc, const char **argv, const char **envp)
{
  char s[42];
  pp(s);
  puts(s);
  return 0;
}