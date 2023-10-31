/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:53:17 by fekiz             #+#    #+#             */
/*   Updated: 2023/10/18 12:28:53 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t len)
{
	unsigned char	*p;
	unsigned char	v;
	size_t			i;

	p = (unsigned char *) ptr;
	v = (unsigned char) value;
	i = 0;
	while (i < len)
	{
		p[i] = v;
		i ++;
	}
	return (ptr);
}
