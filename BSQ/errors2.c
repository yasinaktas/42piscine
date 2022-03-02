int	line_lengths(char *map)
{
	int	index;
	int	length;
	int	control;

	index = 0;
	length = 0;
	control = 0;
	while (map[index++] != '\n')
	index++;
	while (map[index++] != '\n')
		length++;
	while (map[index])
	{
		control++;
		if (map[index] == '\n')
		{
			if (control != length + 1)
				return (0);
			control = 0;
		}
		index++;
	}
	return (1);
}

int	at_least(char *map, char empty)
{
	int	index;

	index = 0;
	while (map[index] != '\n')
		index++;
	index++;
	while (map[index] != '\n')
	{
		if(map[index] == empty)
			return (1);
		index++;
	}
	return (0);
}

int	control_chars(char *map, char empty, char obstacle)
{
	int	index;
	char	ch;

	index = 0;
	while (map[index] != '\n')
		index++;
	index++;
	while (map[index])
	{
		ch = map[index];
		if (!(ch == empty || ch == obstacle || ch == '\n'))
			return (0);
		index++;
	}
	return (-1);
}

int	errors2(char *map, char *chars)
{
	if (line_lengths(map) == 0)
		return (-1);
	if (at_least (map, chars[0]) == 0)
		return (-2);
	if (control_chars(map, chars[0], chars[1]) == 0)
		return (-3);
	return (1);
}		
