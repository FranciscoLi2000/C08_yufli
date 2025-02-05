#include "ft_stock_str.h"
#include <stdlib.h>
static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
static char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int	i;
	t_stock_str	*tab;
	tab = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = malloc((tab[i].size) + 1);
		if (!tab[i].copy)
			return (NULL);
		else
			ft_strcpy(tab[i].copy, av[i]);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}
