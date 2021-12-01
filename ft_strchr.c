/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:52:10 by hkaddour          #+#    #+#             */
/*   Updated: 2021/12/01 10:25:51 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*zb;

	i = 0;
	zb = (char *) s;
	while (i < (int)ft_strlen(s))
	{
		if (zb[i] == (char) c)
			return (&zb[i]);
		i++;
	}
	if (zb[i] != (char) c)
		return (NULL);
	return (&zb[i]);
}
