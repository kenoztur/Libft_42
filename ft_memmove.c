/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenoztur <kenoztur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 15:37:33 by kenoztur          #+#    #+#             */
/*   Updated: 2026/08/25 19:55:57 by kenoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;

	if (!dest && !src)
		return (NULL);
	s1 = (unsigned char *)dest;
	s2 = (const unsigned char *)src;
	if (s1 < s2)
	{
		while (n--)
			*s1++ = *s2++;
	}
	else
	{
		while (n > 0)
		{
			n--;
			s1[n] = s2[n];
		}
	}
	return (dest);
}
