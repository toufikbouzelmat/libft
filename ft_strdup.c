/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:28:46 by tbouzalm          #+#    #+#             */
/*   Updated: 2021/11/30 01:19:25 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	char	*s2;
	int		i;
	char	*ns1;
	int		len;

	i = 0;
	ns1 = (char *)s1;
	len = ft_strlen(ns1) + 1;
	s2 = (char *)malloc(sizeof(char) * len);
	if (s2 == NULL)
		return (NULL);
	while (ns1[i])
	{
		s2[i] = ns1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
