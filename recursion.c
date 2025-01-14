#include <stdio.h>
#include <string.h> 
int main()
{
    char s[100];
    scanf("%s",s);
    int n=strlen(s);
    int flag=0;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a Palindrome");
    }
    
    
    return 0;
}