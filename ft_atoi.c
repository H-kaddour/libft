/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:54:08 by hkaddour          #+#    #+#             */
/*   Updated: 2021/11/04 16:18:50 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int rslt;

	i = 0;
	sign = 1;
	rslt = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rslt = (rslt * 10) + (str[i] - '0') ;
		i++;
	}
	return (rslt * sign);
}
int main()
{
    char arr[]="    +---1234";
    printf("%d", ft_atoi(arr));
    return (0);
}
