/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:57:46 by hkaddour          #+#    #+#             */
/*   Updated: 2021/11/05 12:06:08 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char *d = (char *)dst;
	char *s = (char *)src;
	if ( dst == NULL && src == NULL)
		return(NULL);
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		char *lasts = s + (n - 1);
		char *lastd = d + (n - 1);
		while (n--)
			*lastd-- = *lasts--;
	}
	return (dst);

	/*unsigned int	i;
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
	return (0);*/
}
