//Bisection Method

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define e 0.00001
int main()
{
    int s=0;
    float x1,x2,x0,f1,f2,f0;
    a:
          printf("\nENTER THE INITIAL GUESSES:\t");
          scanf("%f%f",&x1,&x2);
          printf("it. no.  x1\t   x2\t    f(x1)\t f(x2) \t x0\t  f(x0)\n\n");  
          b:
                      s++;
          f1=x1*x1-4*x1-10;
          f2=x2*x2-4*x2-10;
       
          if(f1*f2>0)
          {			
                     printf("\nROOTS ARE NOT ENCLOSED IN GUESSES MARGIN.\nPLEASE TRY AGAIN");
                     goto a;
                     }
                     x0 = (x1+x2)/2;
                     f0 = x0*x0-4*x0-10;
                        printf("%d     %f   %f  %f  %f  %f  %f\n ",s,x1,x2,f1,f2,x0,f0);
                     if(f1*f0<0)
                     {
                                x2=x0;
                                f2=f0;
                                }
                                else
                                {
                                    x1=x0;
                                    f1=f0;
                                    }
                                    if (fabs((x2-x1)/x2)>e)
                                    {
                                                          goto b;
                                                          }
                                                          printf("\n THE ROOT IS %f",x0);
                                                          getch();
                                                          return 0;
                                                          }
                     
