/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:58:32 by mlatrech          #+#    #+#             */
/*   Updated: 2021/02/10 14:58:33 by mlatrech         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countstr(const char *str, char c)
{
	int			i;
	int			a;

	i = 0;
	a = 0;
	while (str[i])
	{
		if ((i == 0 && str[i + 1] != c) || (str[i] == c &&
			str[i + 1] != c && str[i + 1]))
		{
			a++;
			i++;
		}
		else
			i++;
	}
	return (a);
}

static void		ft_unmem(char **tab, int index)
{
	while (index >= 0)
		free(tab[index]);
	free(tab);
}

static int		wordl(int w, const char *c, char sep)
{
	int			wl;

	wl = 0;
	while (c[w] != sep && c[w] != 0)
	{
		w++;
		wl++;
	}
	return (wl);
}

static int		wordmalloc(int wl, int t, char **word)
{
	if (!(word[t] = malloc(sizeof(char) * (wl + 1))))
	{
		ft_unmem(word, t);
		return (0);
	}
	return (1);
}

char			**ft_split(char const *s, char c)
{
	char		**word;
	int			t;
	int			w;
	int			i;

	i = 0;
	t = 0;
	w = -1;
	if (!(word = malloc((ft_countstr(s, c) + 1) * sizeof(char*))))
		return (0);
	while (s[++w] != 0)
	{
		if (s[w] != c)
		{
			if (i == 0 || (s[w - 1] == c && s[w]))
				if (wordmalloc(wordl(w, s, c), t, word) == 0)
					return (0);
			word[t][i] = s[w];
			word[t][++i] = 0;
		}
		else if (i > 0 && ++t && s[w - 1] != c && s[w] == c && s[w])
			i = 0;
	}
	word[ft_countstr(s, c)] = 0;
	return (word);
}
