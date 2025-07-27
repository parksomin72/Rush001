#include <unistd.h>

int		is_valid_input(char *input);
int		*valid_views(char *input);
int		**grid(void);
void	free_all(int **grid, int *views);
void	print_grid(int **grid);
int		solve(int **grid, int *views, int row, int col);

int	main(int argc, char **argv)
{
	int	**grid;
	int	*views;

	if (argc != 2 || !is_valid_input(argv[1]))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	views = valid_views(argv[1]);
	grid = grid();
	if (solve(grid, views, 0, 0))
		print_grid(grid);
	else
		write(1, "Error\n", 6);
	free_all(grid, views);
	return (0);
}
