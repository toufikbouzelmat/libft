/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 05:51:40 by tbouzalm          #+#    #+#             */
/*   Updated: 2021/11/30 01:22:29 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strmapi(char const	*s, char (*f)(unsigned int, char))
{
	char			*ns;
	unsigned int	lens;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	lens = ft_strlen(s) + 1;
	ns = malloc(lens * sizeof(char));
	if (ns == 0)
		return (NULL);
	while (s[i] != '\0')
	{
		ns[i] = f(i, s[i]);
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
