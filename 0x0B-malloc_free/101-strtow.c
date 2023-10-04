#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int is_space(char c) {
	return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *str) {
	int count = 0;
	int i = 0;

	while (str[i] != '\0') {
		if (!is_space(str[i])) {
			count++;
			while (str[i] && !is_space(str[i]))
				i++;
		} else {
			i++;
		}
	}

	return count;
}

char **strtow(char *str) {
	int i, j, k, len, word_count;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	words = malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; k < word_count; i++) {
		while (is_space(str[i]))
			i++;
		len = 0;
		while (str[i + len] && !is_space(str[i + len]))
			len++;
		if (len > 0) {
			words[k] = malloc((len + 1) * sizeof(char));
			if (words[k] == NULL) {
				for (j = 0; j < k; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			for (j = 0; j < len; j++)
				words[k][j] = str[i + j];
			words[k][len] = '\0';
			k++;
		}
		i += len;
	}

	words[word_count] = NULL;
	return (words);
}
