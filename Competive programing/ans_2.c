#include<stdio.h>
int main(){

char str[100];
int i;
gets(str);
int M=-1;
int ans=-1;
int ans2=-1;
int m=1000;
int len=0;
while (str[len]!='\0')
{
     len++;
}

for ( i = 0; i<len; i++)
{
  int cnt=0;
  int index=i;
  while (str[i]!=' '&&i<len)
  {
    cnt++;
    i++;
  }
  if(cnt>M){
    M=cnt;
    ans=index;

  }
   if(cnt<m){
    m=cnt;
    ans2=index;

  }


}

i=ans;
 printf("The largest word is ");

while (str[i]!=' '&&i<len)
{
  printf("%c",str[i]);
  i++;
}
 printf(" and the smallest word is ");
 i=ans2;
 while (str[i]!=' '&&i<len)
{
  printf("%c",str[i]);
  i++;
}
 printf("\n");





}