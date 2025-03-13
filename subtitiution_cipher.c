#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*get_key(char *key)
{
	int		i;
	int		j;
	char	*unique_key;

	unique_key = malloc(sizeof(char) * 26);
	i = 0;
	j = 0;
	while (key[i])
	{
		if (key[i] >= 'A' && key[i] <= 'Z')
		{
			if (strchr(unique_key, key[i]) == NULL)
			{
				unique_key[j] = key[i];
				j++;
			}
		}
		i++;
	}
	i = 0;
	while (i < 26)
	{
		if (strchr(unique_key, 'A' + i) == NULL)
		{
			unique_key[j] = 'A' + i;
			j++;
		}
		i++;
	}
	return (unique_key);
}

char	*subtitution_cipher(char *text, char *key)
{
	int	i;

	i = 0;
	while (text[i])
	{
		if (text[i] >= 'A' && text[i] <= 'Z')
		{
			text[i] = key[text[i] - 'A'];
		}
		i++;
	}
	return (text);
}

int	main(void)
{
	char *key = get_key("YEREVAN HERATSI");
	char text[] = "MIKAYEL HAYKI AGHUMYAN";
	printf("%s\n", key);
	printf("%s\n", text);
	printf("%s\n", subtitution_cipher(text, key));
	free(key);
	return (0);
}