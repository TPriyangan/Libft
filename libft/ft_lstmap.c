/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:14:04 by tpriyang          #+#    #+#             */
/*   Updated: 2023/01/06 10:55:33 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static	int     ft_lstsize(t_list *lst)
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
}*/


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void*))
{
	t_list	*current;
	t_list	*temp;
	t_list	*new_list;

	current = lst;
	while (current != NULL)
	{
		temp = current->next;
		if (f(current->content))
		{
			new_list = current;
		}
		else
		{
			del(current->content);
			free(current);
			return (NULL);
		}
		current = temp;
	}
	return (new_list);
}
