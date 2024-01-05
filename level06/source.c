#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/ptrace.h>

int auth(char *login, int serial)
{
  int new_string;

  login[strcspn(login, "\n")] = 0;

  if ( strnlen(login, 32)<= 5 )
    return 1;
  else if ( ptrace(PTRACE_TRACEME, 0, 1, 0) == -1 )
  {
    puts("\x1B[32m.---------------------------.");
    puts("\x1B[31m| !! TAMPERING DETECTED !!  |");
    puts("\x1B[32m'---------------------------'");
    return 1;
  }
  else
  {
    new_string = (login[3] ^ 0x1337) + 6221293;
    for ( int i = 0; i < strnlen(login, 32); ++i )
    {
      if ( login[i] <= 31 )
        return 1;
      new_string += (new_string ^ (unsigned int)login[i]) % 0x539;
    }
    return serial != new_string;
  }
}

int main(int argc, const char **argv, const char **envp)
{
  int serial;
  char login[32];

  puts("***********************************");
  puts("*\t\tlevel06\t\t  *");
  puts("***********************************");
  printf("-> Enter Login: ");
  fgets(login, 32, 0);
  puts("***********************************");
  puts("***** NEW ACCOUNT DETECTED ********");
  puts("***********************************");
  printf("-> Enter Serial: ");
  scanf("%d", &serial);
  if ( auth(login, serial) )
    return 1;
  puts("Authenticated!");
  system("/bin/sh");
  return 0;
}