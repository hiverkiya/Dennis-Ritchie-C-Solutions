#include<stdio.h>

int main(void)
{
  int c;

  while((c=getchar())!=EOF)
  {

    if( c == ' ' || c == '\n' || c == '\t')
      putchar('\n');
    else
      putchar('*');
  }
return 0;
}
