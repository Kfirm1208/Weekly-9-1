#include <stdio.h>

int main()
{
    int n,ans=1;
    printf("Fill the number of people: ");
    scanf("%d",&n);
    
    for(int i=n;i>=n-1;i--)
    {
       ans  = ans *i;
    }
     ans /= 2;
    printf("handshake %d times",ans);
}