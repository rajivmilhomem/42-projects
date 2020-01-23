/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 21:49:16 by rtavares          #+#    #+#             */
/*   Updated: 2020/01/22 20:45:00 by rtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dptr;
	unsigned char	*optr;
	unsigned int	i;

	i = 0;
	optr = (unsigned char *)src;
	dptr = (unsigned char *)dest;
	while (n--)
	{
		dptr[i] = optr[i];
		i++;
	}
	return (dest);
}
