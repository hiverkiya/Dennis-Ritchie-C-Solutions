#include<stdio.h>
#include<stdlib.h>

void *mycalloc(unsigned, unsigned);

void *mycalloc(unsigned n,unsigned size)
{
    unsigned i,nb;
    char *p,*q;

    nb = n * size;
    
    if((p = q = malloc(nb)) != NULL)
        for(i = 0; i <nb; i++)
            *p++ = 0;
    return q;

}

int main(int argc, char *argv[]) {
    int *p = NULL;
    int i = 0;

    p = mycalloc(100, sizeof *p);
    if (NULL == p) {
        printf("mycalloc returned NULL");

    } else {
        for(i=0; i <= 100; i++) {
            printf("%08X", p[i]);
            if (i % 8 == 7) {
                printf("\n");
            }
        }
        printf("\n");
        free(p);
    }
    return 0;
}
