/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estrong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:47:02 by estrong           #+#    #+#             */
/*   Updated: 2021/10/16 18:53:42 by estrong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	s;

	n = ft_strlen(dst);
	s = ft_strlen(src);
	if (n > dstsize)
		return (s + dstsize);
	else
	{
		dst = dst + n;
		ft_strlcpy(dst, src, dstsize - n);
		return (n + s);
	}
}
