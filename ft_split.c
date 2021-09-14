#include "libft.h"
static size_t	ft_count_words(char const *str, char argument);

static char	**ft_malloc_words(char const *s, char argument, char **split);

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**split;

	words = ft_count_words(s, c);
	split = (char **) ft_calloc(sizeof(char *), words + 1);
	if (!split)
		return (NULL);
	split = ft_malloc_words(s, c, split);
	split[words] = NULL;
	return (split);
}

static size_t	ft_count_words(char const *str, char argument)
{
	size_t	words;
	size_t	new_word;

	words = 0;
	new_word = 0;
	while (*str)
	{
		if (*str != argument && !new_word)
		{
			new_word = 1;
			words++;
		}
		else if (*str == argument)
			new_word = 0;
		str++;
	}
	return (words);
}

static char	**ft_malloc_words(char const *s, char argument, char **split)
{
	size_t	i;
	size_t	split_i;
	size_t	word_len;
	size_t 	str_len;

	i = 0;
	split_i = 0;
	word_len = 0;
	str_len = ft_strlen(s);
	while (i < str_len + 1 && str_len > 0)
	{
		if (s[i] == argument || !s[i])
		{
			if (word_len > 0)
			{
				split[split_i] = (char *)ft_calloc(word_len + 1, sizeof(char));
				if (split[split_i])
					ft_strlcpy(split[split_i], &s[i - word_len], word_len + 1);
				word_len = 0;
				split_i++;
			}
		}
		else
			word_len++;
		i++;
	}
	return (split);
}
