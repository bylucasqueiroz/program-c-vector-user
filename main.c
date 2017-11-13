#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i=0, *user, par = 0, impar = 0, num=0;

    printf("Digite o tamanho do vetor: ");
    scanf("%i", &num);

    user = (int *) malloc(sizeof(int) *num);

    for(i=0;i<num;i++)
    {
        printf("Digite um Numero [%d] : ", i);
        scanf("%d", &*user);

        if(*user%2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }
            printf("\nQntd impar: %d\n", impar);

            printf("\nQntd par: %d\n", par);

    return 0;
}

