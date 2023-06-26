//Least Square Method

#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int ax[20],ay[20],i,n;
    int sum_x=0,sum_xy=0,sum_x2=0,sum_y=0;
    float a,b;
    printf("\nEnter no.s of records :\n");
    scanf("%d",&n);
    printf("\n Enter data:");
    printf("\n****************************************************\n");
    for(i=0;i<n;i++)
    {
                    scanf("%d%d",&ax[i],&ay[i]);
                    }
                    for(i=0;i<n;i++)
                    {
                                    sum_x+=ax[i];
                                    sum_y+=ay[i];
                                    sum_xy+=ax[i]*ay[i];
                                    sum_x2+=(ax[i]*ax[i]);
                                    }
                                    b=(n*sum_xy-sum_x*sum_y)/(n*sum_x2-(sum_x*sum_x));
                                    a=(sum_y-b*sum_x)/n;
                                    printf("\n a = %0.3f,\tb = %0.3f",a,b);
                                    printf("\nThe equation is %0.3f + %0.3fx\n",a,b);
                                    getch();
                                    return 0;
                                    }
