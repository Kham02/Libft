/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estrong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:53:25 by estrong           #+#    #+#             */
/*   Updated: 2021/10/14 17:54:59 by estrong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s1;
	char	*s2;

	if (!src && !dst)
		return (NULL);
	s1 = (char *)dst;
	s2 = (char *)src;
	while (n--)
		*s1++ = *s2++;
	return (dst);
}
