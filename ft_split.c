/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   by: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   created: 2021/11/19 10:26:55 by hkaddour          #+#    #+#             */
/*   Updated: 2021/11/19 18:06:22 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strcount(char *s, char c)
{
	int	len;
	
	len = 0;
	while (*s != '\0')
	{
		if (*s != c && *s)
		{
			len++;
			while (*s != '\0' && *s != c)
				s++;
			continue;
		}
		s++;
	}
	return (len);
}

void	ft_free(char **ptr,int w)
{
	while (w >= 0)
	{
		free(ptr[w--]);
	}
	free(ptr);
}

char	*ft_alloc_word_by_word(char *s, char c)
{
	int 	len;
	char	*ptr;

	len = 0;
	while(s[len] != c && s[len])
		len++;
	ptr = (char *) malloc(sizeof(char) * len + 1);
	while (*s != c && *s)
	{
		*ptr++ = *s++;
	}
	*ptr = '\0';
	return (ptr - len);
}
char	**ft_split(char const *s, char c)
{
	int		i;
	int		w;
	char	**ptr;
	char	*str;

	i = 0;
	w = 0;
	if (!s)
		return (NULL);
	str = (char *) s;
	ptr = (char **) malloc(sizeof(char *) * (ft_strcount(str, c) + 1));
	if (!ptr)
		return (NULL);
	while(*str)
	{
		if (*str != c && *str)
		{
			ptr[w++] = ft_alloc_word_by_word(str,c);
			if (!ptr)
				ft_free(ptr,w);
			while (*str != c && *str)
				str++;
			continue;
		}
		str++;
	}
	ptr[w] = NULL;
	return (ptr);
}
