#include <stdio.h>

void change(int *i)
{
    *i = 42;


}

int main()
{
    int i;

    i = 0;

    change(&i);
   printf("%d", i);



}