#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
        
    }
    int index=0;
    for (i=0; i<a; i++)
    {
        if (arr[i]%2==0)
        {
            index=i;
            
        }
        
    }
    printf("%d",index);
    return 0;
    
}