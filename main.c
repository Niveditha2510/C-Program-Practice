#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[10000];
    scanf("%s",s);
    //printf("%s",s);
    int l=strlen(s);
    int count[9]={0};
    for(int i=0;i<l;i++)
    {
        if(isdigit(s[i]))
        {
            count[s[i]-48]++;
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",count[i]);
    }
    return 0;
}
