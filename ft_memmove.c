/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:27:27 by tbouzalm          #+#    #+#             */
/*   Updated: 2021/11/30 01:16:46 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	len)
{
	unsigned int	i;
	char			*sdst;
	char			*ssrc;

	i = 0;
	sdst = (char *)dst;
	ssrc = (char *)src;
	if (!dst && !src)
		return (NULL);
	if (sdst > ssrc)
	{
		while (len-- > 0)
		{
			sdst[len] = ssrc[len];
		}
	}
	else
	{
		while (i < len)
		{
			sdst[i] = ssrc[i];
			i++;
		}
	}
	return (dst);
}
