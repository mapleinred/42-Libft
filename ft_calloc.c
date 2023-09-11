/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:06:30 by xzhang            #+#    #+#             */
/*   Updated: 2023/09/10 13:24:14 by xzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*i;

	i = malloc(count * size);
	if (i == NULL)
		return (NULL);
	else 
		ft_bzero(s, count * size);
	return (i);
}
