/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:57:31 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/07/04 15:57:33 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../lib/minishell.h"

void	ft_echo(char *str)
{
	char **str1;

	str1 = ft_split(str,' ');
	if(str1[1]==NULL)
	{
		printf("\n");
		return;
	}
	if(str1[1][0] == '-' && str1[1][1] == 'n')
	{
		str1 = str1 + 2;
		while (*(str1 + 1)!= NULL)
			printf("%s ",*str1++);
		printf("%s",*str1++);
		printf("%c",'%');
		printf("%c",'\n');
	}
	else
	{
		str1++;
		while (*(str1 + 1)!= NULL)
			printf("%s ",*str1++);
		printf("%s",*str1++);
		printf("%c",'\n');
	}
}
