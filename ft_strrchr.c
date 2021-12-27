/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:26:29 by tbouzalm          #+#    #+#             */
/*   Updated: 2021/11/30 01:23:52 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	uc;
	char	*ns;
	int		i;

	uc = (char)c;
	ns = (char *)s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (ns[i] == uc)
			return ((&ns[i]));
		i--;
	}
	return (0);
}
