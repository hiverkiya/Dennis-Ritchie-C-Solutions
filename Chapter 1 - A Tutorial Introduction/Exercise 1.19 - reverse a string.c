#include<stdio.h>
#define MAXLINE 1000

int mgetline(char line[],int lim);
void reverse(char rline[]);

int main(void)
{
  int len;
  char line[MAXLINE];

  while((len=mgetline(line,MAXLINE))>0)
  {
    reverse(line);
    printf("%s",line);
  }

  return 0;
}
