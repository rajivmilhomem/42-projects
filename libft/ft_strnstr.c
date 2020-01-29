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
    unsigned int i;
    unsigned int j;
    unsigned int l;

    i = 0;
    j = 0;
    l = len;
    while (s1[i] != '\0' && l > 0)
    {
        j = 0;
        while (s1[i] == s2[j] && l > 0 && s2[j] != '\0')
        {
            i++;
            j++;
            l--;
        }
        if (s2[j] == '\0')
            return((char *)&s1[i - j]);
        i++;
        l--;
    }
    return (NULL);
}