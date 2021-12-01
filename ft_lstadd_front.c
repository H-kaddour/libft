/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:24:52 by hkaddour          #+#    #+#             */
/*   Updated: 2021/11/21 16:45:49 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new-> next = *lst;
		lst = &new;
	}
}
/*
int main(void)
{
    t_list *str1;
    t_list *str2;
    t_list *new;
    t_list **lst;

    str1 =malloc(sizeof(t_list));
    str2 =malloc(sizeof(t_list));
    new = malloc(sizeof(t_list));
    lst = malloc(sizeof(t_list));

    str1->content = "hicham";
    str1->next = str2;
    str2->content = "kaddouri";
    str2->next = NULL;

    new->content = "hi";
    new->next = NULL;
    *lst = str1;
    ft_lstadd_front(lst, new);
    printf("%s",(*lst)->content);
}*/
