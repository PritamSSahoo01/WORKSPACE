#include <stdio.h>
#include <string.h>
int main()
{
  char string1[50],temp;
  int i,j,a;
    
 printf("Input the string : ");
 gets(string1);
  a=strlen(string1);
  for(i=1;i<a;i++)
    for(j=0;j<a-i;j++)
	if(string1[j]>string1[j+1])
	{
	  temp=string1[j];
	  string1[j] = string1[j+1];
	  string1[j+1]=temp;
	}
   printf("After sorting =%s",string1);
  }