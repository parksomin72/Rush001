int	is_valid_input(char *input)
{
	int count = 0;
	while (*input)
	{
		if ((*input >= '1' && *input <= '4'))
			count++;
		else if (*input != ' ')
			return (0);
		input++;
	}
	return (count == 16);
}

int	*valid_views(char *input)
{
	int	*views = malloc(sizeof(int) * 16);
	int	i = 0;

	while (*input)
	{
		if (*input >= '1' && *input <= '4')
		{
			views[i] = *input - '0';
			i++;
		}
		input++;
	}
	return (views);
}
