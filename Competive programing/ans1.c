#include <stdio.h>
const int N = 3;
  
void print(int arr[][N], int m)
{
    int i, j;
    for (i = 0; i < m; i++)
      for (j = 0; j < N; j++)
        printf("%d ", arr[i][j]);
}

int main(){
  int i,j;

   int mat[10][10];
   for (i = 0; i < 5; i++)
   {
	   for ( j = 0; j < 5; j++)
	   {
		   mat[i][j]=0;
	   }
	   
   }
   

   for ( i=1 ; i <=10; i++)
   {


	    //   mat[rand()%25][rand()%25]='*';
		// g(mat);
		print(mat,3);
		// cout<<"k"<<endl;
	      sleep(1000);
	    // system ("CLS");



   }
}