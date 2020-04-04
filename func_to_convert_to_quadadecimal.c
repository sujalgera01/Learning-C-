#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    scanf("%d",&num);
    char arr[100];
    int j=0,k;
    while(num/14!=0)
    {
        arr[j]=num%14;
        num=num/14;
        j=j+1;
    }
    arr[j]=num%14;
    
for(k=j;k>=0;k--)
{
    if(arr[k]>=0 && arr[k]<=9)
    {
        printf("%d",arr[k]);
    }
    else
    {
        printf("%c",55+arr[k]);
    }
}
}