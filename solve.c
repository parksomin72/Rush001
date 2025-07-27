int	is_valid(int **grid, int *views, int row, int col, int val);

int	solve(int **grid, int *views, int row, int col)
{
	if (row == 4)
		return (1);
	if (col == 4)
		return (solve(grid, views, row + 1, 0));
	for (int val = 1; val <= 4; val++)
	{
		grid[row][col] = val;
		if (is_valid(grid, views, row, col, val))
		{
			if (solve(grid, views, row, col + 1))
				return (1);
		}
		grid[row][col] = 0;
	}
	return (0);
}
