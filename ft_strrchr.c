/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:57:45 by hkaddour          #+#    #+#             */
/*   Updated: 2021/11/07 15:42:52 by hkaddour         ###   ########.fr       */
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
		if (zb[i] == (c))
			return (&zb[i]);
		i--;
	}
	if (zb[i] != (c))
        return (NULL);
	return (&zb[i]);
}
