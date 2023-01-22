#include<stdio.h>
#include<math.h>
#define f(x) (x*x*x)-x-1
#define g(x) cbrt(x+1)
#define e 0.001
int main()
{
	float x0, x1;
    int i=0;
	printf("Enter initial guess: ");
	scanf("%f", &x0);
	do
	{
       x1=g(x0);
       i++;
       printf("Number of iteration : %d, ",i);
       printf("Root : %f\n",x1);
       x0=x1; 
    }
    while( fabs(f(x1)) > e);
	return 0;
}
