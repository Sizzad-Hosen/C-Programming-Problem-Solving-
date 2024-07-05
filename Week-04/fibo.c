#include<stdio.h>
int main()
{

     int n;
     scanf("%d",&n);
     int s=0,s2=1;

     for (int i = 1; i <=n; i++)
     {
        int nextStep = s + s2;
        s=s2;
        s2=nextStep;
        printf("%d ",nextStep);
     }
     
     return 0;
}