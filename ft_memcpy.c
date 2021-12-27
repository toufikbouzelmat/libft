/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:31:20 by tbouzalm          #+#    #+#             */
/*   Updated: 2021/12/07 01:42:54 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ndst;
	unsigned char	*nsrc;
	size_t			i;

	ndst = (unsigned char *)dst;
	nsrc = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		ndst[i] = nsrc[i];
		i++;
	}
	return (ndst);
}
