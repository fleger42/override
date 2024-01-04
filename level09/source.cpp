#include <unistd.h>
#include <cstring>

int main(int argc, const char **argv, const char **envp)
{

  if ( argc <= 1 )
    exit(1);

  N *number1 = new N(5);

  N *number2 = new N(6);
	a->setAnnotation(av[1]);
	return (b->*(b->func))(*a);
}

class N {

  int nbr;
  char str[100];

	N(int val) : nb(val)
	{
		this->func = &N::operator+;
	}

  void N::setAnnotation(N *instance, char *param_1)

  {
    size_t n;
    
    n = strlen(param_1);
    memcpy(this->str,param_1,n);
    return;
  }

  int N::operator+(N param_1)
  {
    return this->nbr + param_1->nbr;
  }

  int N::operator-(N param_1)

  {
    return this->nbr - param_1->nbr;
  }

}