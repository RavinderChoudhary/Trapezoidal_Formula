#include<stdio.h>
#include<conio.h>
#include<math.h>

/* Define function here */
#define f(x) 1/(1+pow(x,2))       //  I1

int main()
{
 float lower, upper, integration=0.0, stepSize, k;
 int i, subInterval;
 
 lower = 0;
 upper = 6;                          //  3 I2
 stepSize = 1;

 subInterval = (upper - lower)/stepSize;

 integration = f(lower) + f(upper);
 int count = 0;
 printf("y%d = %f\n",count,f(lower));
 count++;
 for(i=1; i<= subInterval-1; i++)
 {
  k = lower + i*stepSize;
  integration = integration + 2 * f(k);
  printf("y%d = %f\n",count,f(k));
  count++;
 }
 integration = integration * stepSize/2;
 printf("y%d = %f\n",count,f(upper));
 printf("\nRequired value of integration is: %.3f", integration);
 return 0;
}