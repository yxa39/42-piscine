/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 18:30:41 by exam              #+#    #+#             */
/*   Updated: 2018/09/21 18:36:01 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int putchar(char c){
	write(1,&c,1);
    return (0);
}

int main(){
	char letter_1 = 'a';
	char letter_2 = 'B';
	while(letter_2 <= 'Z'){
		putchar(letter_1);
		putchar(letter_2);
		letter_1 +=2;
		letter_2 +=2;
	}
	putchar('\n');
}
