/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:13:36 by hkaddour          #+#    #+#             */
/*   Updated: 2021/11/10 22:08:14 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t n)
{
	size_t	i;
	char	*str;
	char	*ptr;
	
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	str = (char *) s;
	ptr = (char *) malloc(sizeof(char) * n + 1);
	if (!ptr)
		return (NULL);
	while (s[start] && i < n)
	{
		*ptr++= str[start];
		start++;
		i++;
	}
	*ptr = '\0';
	return (ptr - n);
}
