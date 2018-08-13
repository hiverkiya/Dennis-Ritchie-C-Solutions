#include <stdio.h>
#include <string.h>
int main()
{   int i,num;
    printf("How much lines you want to Enter ?" );
    scanf("%d",&num);
    char string[num][200];
    for(i=0;i<num;i++)
    {
       scanf("%s",string[i]);
    }
    
    for(i=0;i<num;i++)
    {  
        int len=0;
        len=strlen(string[i]);
            if(len>80) 
    {
        printf("%s\n",string[i]);
        
    }

    }
    

    return 0;
}
