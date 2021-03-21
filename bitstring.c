#include<stdio.h>
#include<string.h>
int main()
{
int arr1[]={2,4,33,42,67,98};
int arr2[]={4,33,67,11,39,42};
int m = sizeof(arr1) / sizeof (arr1[0]);
int n = sizeof (arr2) / sizeof (arr2[0]);
int printintersection(int *arr1,int *arr2,int m,int n);
int printintersection(int arr1[],int arr2[],int m,int n);
int i=0,j=0;
while(i<m && j<n)
{
if(arr1[i] < arr2[j])
i++;
else if(arr2[j] < arr1[i])
j++;
else
{
printf("the intersection element is %d\n", arr2[j++]);
i++;
}
}
return 0;
}
