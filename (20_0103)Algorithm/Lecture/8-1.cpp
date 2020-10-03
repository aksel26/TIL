#include <stdio.h>


int main(){
    char a[100];

    int i, cnt = 0;
    scanf("%s", &a);

    for ( i = 0; i < a[i]!='\0'; i++)
    {
        if(a[i]=='(') cnt++;
        else if(a[i]==')') cnt--;
        if(cnt<0) break;
    }
    
    if(cnt==0) printf("YES\n");
    else printf("NO\n");

    return 0;
}