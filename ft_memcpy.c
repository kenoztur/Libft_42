/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenoztur <kenoztur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:54:30 by kenoztur          #+#    #+#             */
/*   Updated: 2026/08/26 00:26:24 by kenoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;

	if (!dest && !src)
		return (NULL);
	s1 = (unsigned char *)dest;
	s2 = (const unsigned char *)src;
	while (n--)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	return (dest);
}
