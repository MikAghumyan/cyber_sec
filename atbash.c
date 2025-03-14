#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*decrypt(char *text)
{
	size_t	i;
	char	*decrypted_text;

	i = 0;
	decrypted_text = malloc(sizeof(char) * strlen(text) + 1);
	if (!decrypted_text)
	{
		return (NULL);
	}
	while (text[i])
	{
		if (text[i] >= 'A' && text[i] <= 'Z')
		{
			decrypted_text[i] = 'Z' - (text[i] - 'A');
		}
		else if (text[i] >= 'a' && text[i] <= 'z')
		{
			decrypted_text[i] = 'z' - (text[i] - 'a');
		}
		else
		{
			decrypted_text[i] = text[i];
		}
		i++;
	}
	decrypted_text[i] = '\0';
	return (decrypted_text);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s\n", decrypt(argv[1]));
	}
	return (0);
}