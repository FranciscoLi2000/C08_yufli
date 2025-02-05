#include "ft_stock_str.h"

int	main(int argc, char **argv)
{
	t_stock_str	*tab;

	if (argc < 2)
		return (0);
	tab = ft_strs_to_tab(argc - 1, argv + 1);
	if (!tab)
		return (1);
	ft_show_tab(tab);
	return (0);
}
