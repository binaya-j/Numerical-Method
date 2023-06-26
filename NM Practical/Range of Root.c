//Range of Root

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define e 0.0001
int main()
{
    int degree,i;
       float coeff[10],range;
    printf("Enter the degree of polynomial function:");
    scanf("%d",&degree);
    for(i=degree;i>=0;i--)
    {
                          printf("\nEnter the coefficient of [%d]:\t",i);
                          scanf("%f",&coeff[i]);
                          }
                          for(i=degree;i>degree-1;i--)
                          {
                                                printf(" coefficient are %f,%f,%f",coeff[i],coeff[i-1],coeff[i-2]);
                                                range =sqrt(((coeff[i-1]*coeff[i-1])/(coeff[i]*coeff[i]))-2*(coeff[i-2]/coeff[i]));
                                                }
                                                printf(" \nRANGE OF ROOT IS FROM - %f TO + %f:",range,range);
                          getch();
                          return 0;
                          }
                          
