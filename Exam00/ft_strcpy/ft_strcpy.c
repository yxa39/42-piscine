/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 13:24:28 by yxie              #+#    #+#             */
/*   Updated: 2018/10/04 15:17:47 by yxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
char *ft_strcpy(char *s1, char *s2)
{
	int i;
	char *s3;

	i = 0;
	s3 = s2;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
		printf("%s\n",s2);
	}
	s1[i] = '\0';
	return s1;
}