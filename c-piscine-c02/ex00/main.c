#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main()
{
    char dest[100] = "asasdasadasd";
    char src[100] = "Abrobrinha";
    printf("O destino é: %s\n", ft_strcpy(dest, src));
    return(0);
    }
