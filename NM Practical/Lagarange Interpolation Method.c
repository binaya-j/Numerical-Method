//Lagarange Interpolation Method

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float x[100],y[100],a,s=1,t=1,k=0;
    int n,i,j,d=1;
    printf("\n\nenter the numbers of terms of table:");
    scanf("%d",&n);
    printf("\n\nenter the respective value of variable x and y:\n");
    for(i=0;i<n;i++)
    {
                    scanf("%f\t",&x[i]);
                    scanf("%f",&y[i]);
                    }
                    printf("\n\n the entered table is:\n\n");
                    for (i=0;i<n;i++)
                    {
                        printf("%0.3f\t%0.3f",x[i],y[i]);
                        printf("\n");
                        }
                        while(d==1)
                        {
                                   printf("\n\nEnter the value of x and find value of y:");
                                   scanf("%f",&a);
                                   for(i=0;i<n;i++)
                                   {
                                                   s=1;
                                                   t=1;
                                                   for(j=0;j<n;j++)
                                                   {
                                                                   if(j!=i)
                                                                   {
                                                                           s = s*(a-x[j]);
                                                                           t = t*(x[i]-x[j]);
                                                                           }
                                                                           }
                                                                           k = k+((s/t)*(y[i]));
                                                                           }
                                                                           printf("\n\n The respective value of y is %f",k);
                                                                           printf("\n Do you want to continue ?\npress 1 to continue and any other to exit");
                                                                           scanf("%d",&d);
                                                                           getch();
                                                                           return 0;
                                                                           }
                                                                           }
