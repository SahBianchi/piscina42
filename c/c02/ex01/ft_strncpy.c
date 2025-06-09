#include  <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while(src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	src[] = "Samantha";
	char	dest[3];

	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
}