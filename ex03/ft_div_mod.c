#include <unistd.h>
#include <stdlib.h>
void     ft_div_mod(int a, int b, int *div, int *mod)
{
	int p = 0;
	if (p! = '\0')
	{
		*mod = a % b;
		*div = a / b;
	}
}
int main(void)
{
	int x;  int a;
	int y;  int b;
	x = 6;
	y = 17;
  
	ft_div_mod(x, y, &a, &b);
	printf("x = %i && y = %i\n", x, y)
		printf("div = %i && mod = %i\n" ,a ,b);
}
