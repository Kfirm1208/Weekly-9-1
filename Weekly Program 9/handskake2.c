#include <stdio.h>

int main()
{
    int n,ans ;
    printf("Fill the number of people: ");
    scanf("%d",&n);
    ans = (n*(n-1)) / 2 ;
     printf("handshake %d times",ans);
}