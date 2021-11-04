/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:50:12 by hkaddour          #+#    #+#             */
/*   Updated: 2021/11/04 14:55:22 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	int		i;
	char	*s;

	i = 0;
	s = (char *) str;
	while (i < n)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
int main()
{
	char arr[]= "hicham kaddouri";
	char *ptr = ft_memchr(arr, 'i', 5);
	printf("%s", ptr);
	return (0);
}
