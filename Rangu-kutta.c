#include<stdio.h>
#include<math.h>
// #define f(x,y) (x-y)/(x+y)
#define f(x,y) x*y

int main()
{
    float x0,y0,k1,k2,k3,k4,k,y,x,h,xn;
    int i=0;
    printf("Enter x0,y0,xn,h: ");
    scanf("%f %f %f %f",&x0,&y0,&xn,&h);
    x=x0;
    y=y0;
    printf("Iteration    \tX\t\tY\n");
    while(x<xn)
    {
        k1=h*f(x0,y0);
        k2=h*f((x0+h/2),(y0+k1/2));
        k3=h*f((x0+h/2),(y0+k2/2));
        k4=h*f((x0+h),(y0+k3));
        k=((k1+2*k2+2*k3+k4)/6);
        y=y+k;
        x=x+h;
        i++;
        printf("%d\t%f\t%f\n",i,x,y);
    }
    return 0;
}