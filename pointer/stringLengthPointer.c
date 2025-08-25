#include<stdio.h>
#include<string.h>
int str(char *g)
{
  int n;
  for(n=0; *g != '\0';g++)
  {
      n++;
  }
  return n;
}
int main()
{
    char s[10];
    gets(s);

    str(s);
    printf("%d",str(s));
}

