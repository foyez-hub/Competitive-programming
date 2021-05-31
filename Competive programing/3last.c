#include <stdio.h>
#include <stdlib.h>
double fact(double n){

    if(n>=1.0) 
    return n*fact(n-1);

    else
    {
        return 1.0;
    }
    
}
int main() {
     int n,i,j;
   scanf("%d",&n);

   for ( i = 1; i <= n-1; i++)
   {
       for ( j = 1; j <=i-1; j++)
       {
           printf(" ");
       }
 
       for ( j = 1; j <=n-i; j++)
       {
            printf("#");
       }
       
         
         for ( j = 1; j <=i; j++)
       {
           printf("*");
       }
        for ( j = 1; j <=n-i; j++)
       {
            printf("#");
       }
       printf("\n");
       
         
      
      
   }

      for ( j = 1; j <=n-1; j++)
       {
           printf(" ");
       }

      for ( j = 1; j <=n; j++)
       {
           printf("*");
       }
        printf("\n");


       for ( i = 1; i <= n-1; i++)
   {
       for ( j = 1; j <=n-1-i; j++)
       {
           printf(" ");
       }
 
       for ( j = 1; j <=i; j++)
       {
            printf("#");
       }
       
         
         for ( j = 1; j <=n-i; j++)
       {
           printf("*");
       }
        for ( j = 1; j <=i; j++)
       {
            printf("#");
       }
       printf("\n");
       
         
      
      
   }
  
   

    
}