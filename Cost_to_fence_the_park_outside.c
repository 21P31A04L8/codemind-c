#include<stdio.h>
int main()
{
    int l,b,w,c,a,tc;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a=(2*l*w)+(2*b*w)+(4*w*w);
    tc=a*c;
    printf("%d",tc);
}