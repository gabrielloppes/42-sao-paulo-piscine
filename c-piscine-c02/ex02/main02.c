#include <stdio.h>

int ft_str_is_alpha(char *str);
int main()
{
    int resultado;

    resultado = ft_str_is_alpha("hshsshshss");
    printf("O resultado é: %d\n", resultado);
    
    resultado = ft_str_is_alpha("QWERTY");
    printf("O resultado é: %d\n", resultado);

    resultado = ft_str_is_alpha("HAHAHAHAHAAHAHAH");
    printf("O resultado é: %d\n", resultado);

    resultado = ft_str_is_alpha("sdfkshdffhsdkfsdfjh998888");
    printf("O resultado é: %d\n", resultado);

    resultado = ft_str_is_alpha("hshsshshss");
    printf("O resultado é: %d\n", resultado);
}
