#include <unistd.h>

int	**grid(void)
{
	int	**grid = malloc(sizeof(int *) * 4);
	for (int i = 0; i < 4; i++)
	{
		grid[i] = malloc(sizeof(int) * 4);
		for (int j = 0; j < 4; j++)
			grid[i][j] = 0;
	}
	return (grid);
}

void	free_all(int **grid, int *views)
{
	for (int i = 0; i < 4; i++)
		free(grid[i]);
	free(grid);
	free(views);
}

void	print_grid(int **grid)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			ft_putchar(grid[i][j] + '0');
			if (j != 3)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
