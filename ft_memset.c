/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:48:44 by tbouzalm          #+#    #+#             */
/*   Updated: 2021/11/30 01:39:52 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	uc;
	unsigned char	*su;

	uc = (unsigned char)c;
	su = (unsigned char *)s;
	while (0 < n)
	{
		*su = uc;
		su++;
		n--;
	}
	return (s);
}
