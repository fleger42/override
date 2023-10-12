#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int lang = 0;

void greetuser(char *user)
{
	char buffer[64];

	if (lang == 1)
	{
		strcpy(buffer, "Hyv\xc3\xa4\xc3\xa4 p\xc3\xa4iv\xc3\xa4\xc3\xa4 ");
	}
	else if (lang == 2)
	{
		strcpy(buffer, "Goedemiddag! ");
	}
	else if (lang == 0)
	{
		strcpy(buffer, "Hello ");
	}
	strcat(buffer, user);
	puts(buffer);
}

int main(int argc, const char **argv, const char **envp)
{
  char dest[72];
  char *v6;

  if ( argc != 3 )
    return 1;
  memset(dest, 0, sizeof(dest));
  strncpy(dest, argv[1], 40);
  strncpy(&dest[40], argv[2], 32);
  v6 = getenv("LANG");
  if ( v6 )
  {
    if ( !memcmp(v6, "fi", 2) )
    {
      lang = 1;
    }
    else if ( !memcmp(v6, "nl", 2) )
    {
      lang = 2;
    }
  }
  return greetuser(dest);
}