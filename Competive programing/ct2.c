#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int j;
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=n-i ; j++)
        {
             printf(" ");
        }
        int tem=n;
        for ( j = 1; j <=i; j++)
        {
             printf("%d",tem);
             tem--;
        }
       tem+=2;
         
         for ( j = 1; j <=i-1; j++){
           printf("%d",tem);
           tem++;

         }
         
         
        printf("\n");
        
        
         
        
        
    }
    
    //printf("%d",a);
}