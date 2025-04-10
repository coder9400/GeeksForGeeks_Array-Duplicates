// Array Duplicate
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    int brr[n],a=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                brr[a] = arr[i];
                arr[j] = 0;
                a++;
            }
        }
    }
    if(a!=0)
    {
    printf("Output : ");
    for(int i=0;i<a;i++)
    {
        if(brr[i]==0) continue;
        printf("%d ",brr[i]);
    }
    }
    else printf("Output : 0");
    return 0;
}