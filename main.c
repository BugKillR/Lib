#include "libft.h"

int	main(void)
{
	/*
	char	*src = "Tamam_Canim";
	char	*arr;
	int	i;
	int	size;

	size = ft_strlen(src);
	arr = (char*)ft_memalloc(size + 1);
	ft_memccpy(arr, src, '_', size);
	i = 0;
	while (i < size + 1)
	{
		ft_putstr_fd("Dec: ", 1);
		ft_putnbr_fd(arr[i], 1);
		ft_putchar_fd('\t', 1);
		ft_putstr_fd("Output: ", 1);
		ft_putchar_fd(arr[i], 1);
		ft_putchar_fd('\n', 1);
		i++;
	}*/
	char	*arr;
	char	*dest;
	char	*swap;
	int	i;
	
	dest = (char *)ft_memalloc(30);
	//ft_bzero(dest, 30);
	arr = ft_strdup("Ates bocegi 5512.");
	ft_strcpy(dest, arr);


	swap = "Alev";
	i = 0;
	while (*swap)
	{
		ft_memset(dest + i, *swap, 1);
		i++;
		swap++;
	}
	/*
	while (i < 30)
        {
                ft_putstr_fd("Dec: ", 1);
                ft_putnbr_fd(dest[i], 1);
                ft_putchar_fd('\t', 1);
                ft_putstr_fd("Output: ", 1);
                ft_putchar_fd(dest[i], 1);
                ft_putchar_fd('\n', 1);
                i++;
        }*/
	ft_putstr(dest);
	ft_putchar('\n');
	return (0);
}
