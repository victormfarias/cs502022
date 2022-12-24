#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("What's the height of the pyramid? Qual a altura da piramide? ");
    }
    while (height < 1 || height > 8);

    //printf("altura é %i\n", height);
    // iterar de 0 até a altura da pirâmide
    for (int i = 0; i < height ; i++)
    {
        // dentro do primeiro loop, o k itera, para adicionar os espaços necessários para preencher até o hash da linha
        for (int k = 1; k < height - i ; k++)
        {
            printf(" ");
        }
        // dento do primeiro loop, após a iteração de k com os espaços da linha, essa iteração de j, preenche a quantidade de hashes necessárias da linha
        for (int j = -1; j < i; j++)
        {
            printf("#");
        }
        // é adicionada uma linha nova, e recomeça a iteração do primeiro loop com i = + 1
        printf("\n");
    }
}
