#include <stdio.h>
 #include <stdlib.h>


int main()
{
    int po[] = {1, 2 ,3, 4};

    int *p = po;

    printf("%d \n", p++);
    printf("%d \n", *p);
    printf("%d \n", p[0]);

  


}