/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:18:29 by tbouzalm          #+#    #+#             */
/*   Updated: 2021/11/30 01:24:32 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const	*s1, char const	*set)
{
	size_t	front;
	size_t	rear;
	char	*str;
	char	*ns1;

	ns1 = (char *)s1;
	str = 0;
	if (ns1 != 0 && set != 0)
	{
		front = 0;
		rear = ft_strlen(ns1);
		while (ns1[front] && ft_strchr(set, ns1[front]))
			front++;
		while (ns1[rear - 1] && ft_strchr(set, ns1[rear - 1]) && rear > front)
			rear--;
		str = (char *)malloc(sizeof(char) * (rear - front + 1));
		if (str)
			ft_strlcpy(str, &ns1[front], rear - front + 1);
	}
	return (str);
}
