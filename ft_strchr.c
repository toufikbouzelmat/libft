/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:36:01 by tbouzalm          #+#    #+#             */
/*   Updated: 2021/11/30 01:18:51 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ns;
	char	uc;

	uc = (char)c;
	ns = (char *)s;
	while (*ns != uc)
	{
		if (*ns == '\0')
			return (0);
		ns++;
	}
	return (ns);
}
