/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 11:40:54 by yxie              #+#    #+#             */
/*   Updated: 2018/10/05 12:13:31 by yxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<string.h>
#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
int ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
char *ft_strrev(char *str)
{
	int i;
	int j;
	char a;
	int len = 5;
//	unsigned len = strlen((const char *)str);
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		a = str[i];
		str[i] = str[j];
		str[j] = a;
	}
	return str;
}

int is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (1);
	else if (n == 1)
		return (2);
	else
		return 2* is_power_of_2(n - 1);
			
}

int main()
{
	char str[] = "abcde";
	printf("%d\n", strcmp("", "a"));

	printf("%d\n", ft_strcmp("", "a"));

	printf("%s\n", ft_strrev(str));

	printf("%d\n", is_power_of_2(0));
}
