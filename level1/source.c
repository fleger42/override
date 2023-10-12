#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void run(void)

{
  fwrite("Good... Wait what?\n",1,19,stdout);
  system("/bin/sh");
  return;
}

int main(int ac, char **av, char **envp)
{
    char str[76];

    gets(str);
    return;
}