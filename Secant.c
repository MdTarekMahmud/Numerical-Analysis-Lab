#include<stdio.h>
#include<math.h>
#define e 0.001
// #define f(x) x*x*x-4*x-1
#define f(x) 3*x- cos(x)-1
int main()
{
    float x0, x1, x2;
    float f0, f1, f2;
    int i = 0;
    printf("Enter the value of x0 and x1: ");
    scanf("%f %f", &x0, &x1);
    printf("\nStep\t\tx0\t\tx1\t\tx2(Root)\t\tf(x2)\n");
    do
        {
        f0=f(x0);
        f1=f(x1);
        x2 = x1 - (x1 - x0) * f1/(f1-f0);
		f2 = f(x2);
        i++;
        printf("%d\t\t%f\t%f\t%f\t%f\n",i,x0,x1,x2, f2);
		  
		  x0 = x1;
		  f0 = f1;
		  x1 = x2;
		  f1 = f2;  
    }while(fabs(f2)>e);
    printf("\nRoot is: %.4f", x2);
return 0;
}

