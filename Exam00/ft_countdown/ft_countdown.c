/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 18:21:25 by exam              #+#    #+#             */
/*   Updated: 2018/09/21 18:26:53 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int putchar(char c){
	write(1,&c,1);
	return (0);
}

int main(){
	char dig = '9';
	while(dig >= '0')
	{
		putchar(dig);
		dig--;
	}
	putchar('\n');
}
