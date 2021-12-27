/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 08:39:11 by tbouzalm          #+#    #+#             */
/*   Updated: 2021/11/30 01:20:50 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t	dstsize)
{
	size_t	i;
	size_t	j;
	char	*nsrc;

	nsrc = (char *)src;
	j = ft_strlen(nsrc);
	i = ft_strlen(dst);
	if (dstsize == 0 || i > dstsize)
		return (dstsize + j);
	if (!*nsrc)
		return (i);
	j = 0;
	while (nsrc[j] && i + j < dstsize - 1)
	{
		dst[i + j] = nsrc[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(nsrc));
}
