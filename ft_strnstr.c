/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:11:43 by hkaddour          #+#    #+#             */
/*   Updated: 2021/11/13 16:32:25 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;
	char	*s;
	//char	*find;

	i = 0;
	s = (char *) str;
	if (!n)
		return (s);
	/*if (str > to_find)
		return (NULL);*/
	if (to_find[0] == '\0')
		return (s);
	while (i < n - 1)
	{
		j = 0;
		while (s[i + j] != '\0' && s[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&s[i]);
			j++;
		}
		if (to_find[j + 1] == s[i])
			return (NULL);
		i++;
	}
	return (0);
}
