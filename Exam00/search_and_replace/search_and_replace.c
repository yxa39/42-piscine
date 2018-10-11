/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:51:05 by yxie              #+#    #+#             */
/*   Updated: 2018/10/04 16:01:37 by yxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 4 
		&& argv[2][0] != '\0' && argv[2][1] == '\0' 
		&& argv[3][0] != '\0' && argv[3][1] == '\0')
	{
		while (*argv[1])
		{
			if (*argv[1] == argv[2][0])
				write(1, &argv[3][0], 1);
			else
				write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1,"\n",1);
}