#include<stdio.h>
int BinarySearch(int* a,int i,int n,int x)
{
    if(i==n)
     {
          if(a[i]==x)
        return i;
    else
        {    printf("expected range of index is 0 to %d\n",n);
             printf("the number we searched for is out of range of expected range of indices so element is not present in the array");
            exit (1);
        }
     }
     else
     {
         int mid = (i+n)/2;
         if (a[mid]==x)
            return (mid);
         else if(a[mid]>x)
            BinarySearch(a,i,mid-1,x);
         else if(a[mid]<x)
            BinarySearch(a,mid+1,n,x);

     }
}

int main()
{
    int a[10]={7,15,17,21,29,32,37,45,52,77};
    int p =sizeof(a);
    int q =sizeof(a[1]);
    int n =(p/q)-1;
    int x;
    int i =0;
    printf("enter the element you want to search in array\n");
    scanf("%d",&x);
    int s= BinarySearch(a,i,n,x);
     printf("expected range of index is 0 to %d\n",n);
     if(i>=0)
    printf("the number we searched for is at index %d\n",s);
       return 0;



}
