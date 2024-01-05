#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef struct			s_struct
{
  char  message[140];
	char  username[40];
	int   message_lenght;
}						t_struct;
int secret_backdoor()
{
  char s[128];

  fgets(s, 128, 0);
  return system(s);
}

char *set_msg(t_struct *var)
{
  char s[1024];

  memset(s, 0, sizeof(s));
  puts(">: Msg @Unix-Dude");
  printf(">>: ");
  fgets(s, 1024, 0);
  return strncpy(var->message, s, var->message_lenght);
}

int set_username(t_struct *var)
{
  char s[140];
  int i;

  memset(s, 0, 128);
  puts(">: Enter your username");
  printf(">>: ");
  fgets(s, 128, 0);
  for ( i = 0; i <= 40 && s[i]; ++i )
    var->username[i] = s[i];
  return printf(">: Welcome, %s", var->username);
}

int handle_msg()
{
  t_struct var;
  var.message_lenght = 140;

  set_username(&var);
  set_msg(&var);
  return puts(">: Msg sent!");
}

int main(void)
{
  puts(
    "--------------------------------------------\n"
    "|   ~Welcome to l33t-m$n ~    v1337        |\n"
    "--------------------------------------------");
  handle_msg();
  return 0;
}