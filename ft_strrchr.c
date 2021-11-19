/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:57:45 by hkaddour          #+#    #+#             */
/*   Updated: 2021/11/11 04:19:14 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*zb;

	zb = NULL;
	i = ft_strlen(s);
	zb = (char *) s;
	while (i >= 0)
	{
		if (zb[i] == (char) c)
			return (&zb[i]);
		i--;
	}
	if (zb[i] != (char) c)
		return (NULL);
	return (&zb[i]);
}
