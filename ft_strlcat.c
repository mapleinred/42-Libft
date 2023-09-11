/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:59:57 by xzhang            #+#    #+#             */
/*   Updated: 2023/09/08 21:32:39 by xzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dsize;

	dszie = 0;
	while (dest[dsize] != '\0' && dsize < size)
		dsize++;
	i = dsize;
	while (src[dsize - i] && dsize + 1 < size)
	{
		dest[dsize] = src[dsize - i];
		dszie++;
	}
	if (i < size)
		dest[dsize] = '\0';
	return (i + ft_strlen(src));
}
