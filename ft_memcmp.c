/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:15:08 by hkaddour          #+#    #+#             */
/*   Updated: 2021/11/04 14:34:11 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int		i;
	char	*str;
	char	*str3;

	i = 0;
	str = (char *) str1;
	str3 = (char *) str2;
	while ((str[i] != '\0') && (str3[i] != '\0') && n > i)
	{
		if (str[i] == str3[i])
			i++;
		else if (str[i] >= str3[i])
			return (1);
		else if (str[i] <= str[i])
			return (-1);
	}
	return (0);
}
