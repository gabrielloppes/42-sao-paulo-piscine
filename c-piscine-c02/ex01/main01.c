#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int		main()
{
	char dest[200] = "batata";
	char src[200] = "Pão de batata";
	printf("Destino é: %s\n", ft_strncpy(dest, src, 6));
	return (0);

}
