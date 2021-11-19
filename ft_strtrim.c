/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:51:09 by hkaddour          #+#    #+#             */
/*   Updated: 2021/11/12 22:51:22 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_check(char str, char *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (str == set[i])
			return (1);
		i++;
	}
	return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int     i;
    int     j;
    int     h;
    char    *ptr;
    char    *str;
    char    *sep;
    
    h = 0;
	if (!s1 || !set)
		return (NULL);
    str = (char *) s1;
    sep = (char *) set;
    i = 0;
	j = ft_strlen(str);
	while (str[i] && ft_check(str[i],sep))
		i++;
	if (i == j)
		return (ft_strdup(""));
	while (ft_check(str[j - 1], sep))
		j--;
    ptr = (char *) malloc(sizeof(char) * (j - i) + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr,&str[i], j - i + 1);
    return (ptr);
}





/*
char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	//int		h;
	int		len;
	//int		set_start;
	//int		set_end;
	char	*ptr;
	char	*str;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	j = 0;
	str = (char *) s1;
	len = ft_strlen(str) - 1;
	ptr = (char *) malloc(sizeof(char) * len);
	if (!ptr)
		return (NULL);
	while (set[i] == str[i])
	{
			i++;
	}
	while (str[len] && str[len] == set[len])
	{
		if (str[len] == set[len])
			len++;
		else
			break;
	}
	ft_strlcpy(ptr, s1, len);
	while(*ptr)
	{
		*ptr++ = *str++;
	}
	*ptr = '\0';
	return (ptr);
}

int main()
{
	char str[]= "#*##hicham kaddouri###";
	char set[]= "#";
	printf("%s", ft_strtrim(str, set));
	return (0);
}*/
