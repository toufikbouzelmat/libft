/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:05:27 by tbouzalm          #+#    #+#             */
/*   Updated: 2021/11/30 01:23:21 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char	*needle, size_t	len)
{
	char	*nshaystack;
	char	*nsneedle;
	size_t	i;
	size_t	j;

	nshaystack = (char *)haystack;
	nsneedle = (char *)needle;
	if (*nsneedle == '\0')
		return (nshaystack);
	i = 0;
	while (nshaystack[i] != '\0' && i < len)
	{
		j = 0;
		if (nshaystack[i] == nsneedle[j])
		{
			while (i + j < len && nshaystack [i + j] == nsneedle[j])
			{
				j++;
				if (!nsneedle[j])
					return (&nshaystack[i]);
			}
		}
		i++;
	}
	return (0);
}
