/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandres <brandres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 19:45:06 by brandres          #+#    #+#             */
/*   Updated: 2020/07/14 20:20:00 by brandres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

t_list  *ft_lstnew(void const *content, size_t content_size)
{
    t_list *link:

    link = (char*)malloc(sizeof(char) * (11 + 1));
    link->content = (int *)malloc(sizeof(int) * (content_size));
    
}