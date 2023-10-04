/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kishizu <kishizu@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:13:51 by kishizu           #+#    #+#             */
/*   Updated: 2023/09/28 10:56:02 by kishizu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total_len;
	int		index;
	char	*result;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	index = 0;
	total_len = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc(total_len + 1);
	if (result == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		result[index] = *s1;
		index++;
		s1++;
	}
	while (*s2 != '\0')
	{
		result[index] = *s2;
		index++;
		s2++;
	}
	result[index] = '\0';
	return (result);
}
