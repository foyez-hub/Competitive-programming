#include<stdio.h>
#include<string.h>

int CalSum(int n,int sum,int pre){



   if(n>0){
        printf("%d ",pre);
       CalSum(n-1,sum+pre,pre+3);
   }
   else{

        return sum;
   }


}

int main(){

   int n;
   printf("Enter a Number\n");
   scanf("%d",&n);
   printf("Series is:-> ");

   int ans=CalSum(n,0,1);

  printf("\nsum: %d \n",ans);





}
