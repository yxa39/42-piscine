/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 18:38:58 by exam              #+#    #+#             */
/*   Updated: 2018/09/23 11:26:37 by yxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strrev(char *str){
	int i = 0;
	int j = 0;

	while(str[i]){
		i++;
	}
	char c[i];
	i--;
	while(str[j]){
		c[j] = str[i];
		i--;
		j++;
		}
	j = 0;
	
	str = c;

	return *str;
}

int main(){
	char a[] ="abcd";
	a = *ft_strrev(a);
	printf("%s", a)
}
