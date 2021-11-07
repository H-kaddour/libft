/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:52:10 by hkaddour          #+#    #+#             */
/*   Updated: 2021/11/07 13:48:26 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*zb;

	i = 0;
	zb = (char *) s;
	if (zb[i] == '\0')
		return (NULL);
	while (i < (int)ft_strlen(s))
	{
		if (zb[i] == (c))
				return (&zb[i]);
		i++;
	}
		if (zb[i] != (c))
				return (NULL);
	return (&zb[i]);
}
