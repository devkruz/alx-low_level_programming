#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of the program
* @ac: Argument count
* @av: Argument vector
*
* Return: The pointer to the concatenated strings
*/


char *argstostr(int ac, char **av)
{
	char *char_ptr;
	int i, k = 0, av_size = ac, ac_count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (ac_count < ac)
	{
		int av_count = 0;

		while (av[ac_count][av_count])
			av_size++, av_count++;
		ac_count++;
	}

	char_ptr = (char *)malloc((av_size + 1) * sizeof(char));

	if (!char_ptr)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		int j;

		for (j = 0; av[i][j]; j++, k++)
		{
			char_ptr[k] = av[i][j];
		}

		char_ptr[k] = '\n';
		k++;
	}

	return (char_ptr);
}
