/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 13:33:46 by rtavares          #+#    #+#             */
/*   Updated: 2020/01/25 13:33:55 by rtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *s1, const char *s2, size_t len)
{
    int i;
    int j;
    char *ptr1;

    ptr1 = (char *)s1;
    i = 0;
    while (ptr1[i] != '\0' && len--)
    {
        j = 0;
        while (ptr1[i] == s2[j])
        {
            if (s2[j + 1] == '\0')
                return (&ptr1[i - j]);
            j++;
            i++;
            len--;
        }
        i++;
    }
    return (NULL);
}