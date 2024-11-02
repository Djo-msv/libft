/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmassavi <jmassavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:32:38 by jmassavi          #+#    #+#             */
/*   Updated: 2024/10/14 18:28:23 by jmassavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char	*source;
	unsigned char	*destination;
	size_t			i;

	source = (unsigned char *) src;
	destination = (unsigned char *) dest;
	i = 0;
	if (src == NULL && dest == NULL)
		return (dest);
	while (size > 0)
	{
		size--;
		destination[size] = source[size];
	}
	return (dest);
}
