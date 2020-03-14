/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavares <rtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 20:42:48 by rtavares          #+#    #+#             */
/*   Updated: 2020/03/14 18:01:55 by rtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_aux(int n, char *str, int len, int sig)
{
	while (--len >= 0)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	if (sig == 1)
		str[0] = '-';
	return (str);
}

static char		*ft_test(int n)
{
	if (n == -0 || n == 0 || n > 2147483647 || n < -2147483648)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 2147483647)
		return (ft_strdup("2147483647"));
	else
		return (NULL);
}

char			*ft_itoa(int n)
{
	int			sig;
	int			num;
	int			len;
	char		*str;

	len = 1;
	sig = 0;
	if (ft_test(n) != NULL)
		return (ft_test(n));
	if (n < 0)
	{
		n *= -1;
		sig = 1;
	}
	num = n;
	while (num /= 10)
		len++;
	len += sig;
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	ft_aux(n, str, len, sig);
	return (str);
}
