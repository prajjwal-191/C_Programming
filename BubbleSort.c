#include<stdio.h>

void Swap(int *a,int i,int j)
{
    int temp =a[i];
    a[i]=a[j];
    a[j]=temp;
}

void BubbleSort(int *a,int n)
{   int max;
    for(int j=1;j<n;j++)
    {   max =0;
        for(int i=1;i<=n;i++)
    {
        if(a[i]>=a[max])
            max =i;
        if(a[i]<a[max])
        {
            Swap(a,i,max);
            max=i;
        }
    }
    }

}

int main()
{
    int a[10]={54,25,85,2,85,36,96,65,11,52};
    int n=sizeof(a)/sizeof(int)-1;
    printf("size of array is %d\n",n);
    BubbleSort(a,n);
    printf("The sorted array is displayed below\n");
    for(int i=0;i<=n;i++)
    printf("%d\t",a[i]);

}
