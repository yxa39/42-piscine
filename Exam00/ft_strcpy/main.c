/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 13:25:52 by yxie              #+#    #+#             */
/*   Updated: 2018/10/04 15:22:04 by yxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char *ft_strcpy(char *s1, char *s2);
int ft_strlen(char *str);

int main()
{
    char a[] = "abdc";
    char b[] = "adcdf";
	char *c;
//	c = strcpy(a,b);
	printf("ft_strlen\n%d\n", ft_strlen(b));
	printf("strcpy\n%s\n", ft_strcpy(a, b));
	printf("b is %s", b);
	printf("\nft_strlen\n%d\n", ft_strlen(b));
}
