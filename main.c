#include <stdio.h>
#include <stdlib.h>

void TowerofHannoi(int n,char source,char dest,char temp)
{
    if(n>1)
    {
        TowerofHannoi(n-1,source,temp,dest);
        printf("\n move %d disc from %c to %c",n,source,dest);
        TowerofHannoi(n-1,temp,dest,source);
    }
    else
        printf("\n move %d disc from %c to %c",n,source,dest);
}
int main()
{
    int n;
    printf("\n read no of disc :");
    scanf("%d",&n);
    TowerofHannoi(n,'S','D','T');
    return 0;
}
