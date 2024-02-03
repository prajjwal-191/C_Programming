#include<stdio.h>
int LinearSearch(int* a, int x,int n)
{ int j;
    for(j=1;j<=n;j++)
{
      if(a[j]==x)
      return j;

}
printf("element not found in array\n");
return -1;

}

int main()
{ int a[10] ={5,9,87,66,78,94,23,85,52,78};
int p=sizeof(a);
int q =sizeof(a[1]);
int n= (p/q)-1;
int x;
printf("enter the number that you want to search in array a");
scanf("%d",&x);
int i =LinearSearch(a,x,n);
if(i>=0)
printf("The number you searched is at index %d",i);
else
return i;
}