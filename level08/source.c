#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(int argc, const char **argv, const char **envp)
{
  char s[32];

  while ( 1 )
  {
    printf("%p, %p \n", auth, service);
    if ( !fgets(s, 128, stdin) )
      break;
    if ( !memcmp(s, "auth ", 5u) )
    {
      auth = (char *)malloc(4u);
      if ( strlen(s + 5) <= 30 )
        strcpy(auth, s + 5);
    }
    if ( !memcmp(s, "reset", 5u) )
      free(auth);
    if ( !memcmp(s, "service", 6u) )
      service = (int)strdup(s + 6);
    if ( !memcmp(s, "login", 5u) )
    {
      if (auth[8] == 0)
        fwrite("Password:\n", 1, 10, stdout);
      else
        system("/bin/sh");
    }
  }
  return 0;
}