/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:47:09 by tbouzalm          #+#    #+#             */
/*   Updated: 2021/12/04 02:28:04 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*ns;
	char	uc;

	i = 0;
	ns = (char *)s;
	uc = (unsigned char)c;
	while (i < n)
	{
		if (ns[i] == uc)
		{
			return (&ns[i]);
		}
		i++;
	}
	return (0);
}
