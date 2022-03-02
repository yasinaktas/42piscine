int     errors2(char *map, char *chars);

int	first_line(char *map)
{
	int	index;

	index = 0;
	while (map[index] != '\n')
		index++;
	if (index < 4)
		return (-6);
	if (map[index - 1] == map[index - 2])
		return (-7);
	if (map[index - 1] == map[index - 3])
		return (-8);
	if (map[index - 2] == map[index - 3])
		return (-9);
	index = index - 4;
	while (index >= 0)
	{
		if (!(map[index] >= 48 && map[index] <= 57))
			return (-10);
		index--;
	}
	return (1);
}

int	first_line_printable(char *map)
{
	int	index;

	index = 0;
	while (map[index] != '\n')
		index++;
	if (index < 4)
		return (0);
	if (!(map[index - 1] >= 32 && map[index - 1] <= 126))
		return (0);
	if (!(map[index - 2] >= 32 && map[index - 2] <= 126))
		return (0);
	if (!(map[index - 3] >= 32 && map[index - 3] <= 126))
		return (0);
	return (1);
}

int	errors(char *map)
{
	int	index;
	char	chars[3];

	index = 0;
	if (first_line(map) < 0)
		return (first_line(map));
	if (first_line(map) == 0)
		return (-5);
	while (map[index] != '\n')
		index++;
	chars[2] = map[index - 1];
	chars[1] = map[index - 2];
	chars[0] = map[index - 3];
	if (errors2(map, chars) < 0)
		return (errors2(map, chars));
	return (1);
}
