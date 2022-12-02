/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:14:04 by tpriyang          #+#    #+#             */
/*   Updated: 2022/12/02 18:05:19 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int     ft_lstsize(t_list *lst)
{
        int     i;
        t_list  *temp;

        temp = lst;
        i = 0;
        while(temp != NULL)
        {
                temp = temp->next;
                i++;
        }
        return (i);
}


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void*))
{
	t_list	*new_chain;
	t_list	*temp;

	new_chain = ((t_list*)malloc(ft_lstsize(lst) * sizeof(t_list)));
	if(!new_chain)
	       del(new_chain);	
	temp = lst;
	while(temp != NULL)
	{
		new_chain->content = f(temp->content);
		new_chain = new_chain->next;
	}
	if (!new_chain)
	{
		return (NULL);
	}
	else 
		return (new_chain);
}
