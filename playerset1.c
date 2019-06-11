#include<stdio.h>
int main()
{
char s[1000];
long long int len,i;
scanf("%s",s);
for(len=0;s[len];len++);
for(i=len-1;i>=0;i--)
printf("%c",s[i]);
}
