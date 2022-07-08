/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:57:04 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/07/06 18:57:05 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../lib/minishell.h"

int ft_cd(char *str,char *path)
{
	char **str1;
	char *pwd1;

	pwd1 = path;
	str1 = ft_split(str,' ');
	pwd1 = ft_strjoin(pwd1,"/");
	pwd1 = ft_strjoin(pwd1,str1[1]);
	if(chdir(pwd1)==-1)
		printf("cd: no such file or directory:cs %s\n",str1[1]);
	return(0);
}
