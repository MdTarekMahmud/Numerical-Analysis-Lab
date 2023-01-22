#include<stdio.h>
#include<math.h>
#define fx(y,z) (3+5*y+2*z)/10
#define fy(x,z) (3+4*x+3*z)/10
#define fz(x,y) (-3-x-6*y)/10
#define e 0.01
void main()
   {
    int i=0;
    float a1,b1,c1;
    float a,b,c,e1,e2,e3;
    printf("Enter The initial value : ");
    scanf("%f %f %f",&a,&b,&c);
    // for(i=1;i<=n;i++)
    do
    {
        a1=fx(b,c);
        b1=fy(a,c);
        c1=fz(a,b);
        e1=fabs(a-a1);
        e2=fabs(b-b1);
        e3=fabs(c-c1);

        a=a1;
        b=b1;
        c=c1;
        i++;
        printf("x%d = %f\ty%d = %f\tz%d = %f\n",i, a1,i, b1, i, c1);
    }while(e1>e || e2>e || e3>e);
}     