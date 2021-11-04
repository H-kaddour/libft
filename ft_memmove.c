/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:57:46 by hkaddour          #+#    #+#             */
/*   Updated: 2021/11/04 14:41:43 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	char			*src1;
	char			*dst1;
	char			*tmp;

	i = 0;
	j = 0;
	src1 = (char *) src;
	dst1 = (char *) dst;
	while (src1[i] != '\0')
	{
		tmp[i] = src1[i];
		i++;
	}
	while (n > j)
	{
		dst1[j] = tmp[j];
		j++;
	}
	return (0);
}
