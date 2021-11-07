/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:27:37 by hkaddour          #+#    #+#             */
/*   Updated: 2021/11/07 19:25:05 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (n >= i)
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] >= s2[i])
			return (1);
		else if (s1[i] <= s2[i])
			return (-1);
		i++;
	}
	return (0);
}










/*
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (n - 1 > i)
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}*/
