#include <stdio.h>

int global;

int main(void)
{

    int local;

    int funcao(int local)
    {
        printf("%d \n", local);

        printf("%d \n", global);
        return 0;
    }
    funcao(local);

}