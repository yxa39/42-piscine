/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:19:47 by yxie              #+#    #+#             */
/*   Updated: 2018/10/05 10:05:22 by yxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int bool1;
	int bool2;
	int j;

	i = 0;
	bool1 = 0;
	bool2 = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = i - 1;
			while (j >= 0)
			{
				if (argv[1][j] == '\0')
                    j--;
				if (argv[1][i] == argv[1][j])
					bool2 = 1;
				j--;
			}
			if (bool2 == 0)
				write(1, &argv[1][i], 1);
			i++;
			if (argv[1][i] == '\0' && bool1 == 0)
			{
				i++;
				bool1 = 1;
			}
			bool2 = 0;
		}
	}
}
