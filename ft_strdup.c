/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:24:34 by xzhang            #+#    #+#             */
/*   Updated: 2023/09/10 13:51:52 by xzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen(src) +1);
	if (!dest)
		return (NULL);
	while (*s)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}
