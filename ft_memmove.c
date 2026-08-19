/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenoztur <kenoztur@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 15:37:33 by kenoztur          #+#    #+#             */
/*   Updated: 2026/08/20 00:34:30 by kenoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	s1 = (unsigned char *)dest;
	s2 = (const unsigned char *)src;
	if (s1 < s2)
	{
		i = 0;
		while (i < n)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i-- > 0)
			s1[i] = s2[i];
	}
	return (dest);
}
