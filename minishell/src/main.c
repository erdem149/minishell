# include "../lib/minishell.h"

int	main(void)
{
	char	*str;
	char	*PWD;

	while (1)
	{
		str = readline ("😊 erdemshell>");
		add_history(str);
		if (!ft_strncmp("exit",str,4))
			exit(0);
		else if(!ft_strncmp("echo ",str,5))
			ft_echo(str);
		else if(!ft_strncmp("cd",str,2))
			ft_cd(str,getcwd(PWD,sizeof(PWD)));
		else if(!ft_strncmp("pwd",str,3))
			printf("%s\n",getcwd(PWD, sizeof(PWD)));
		else if(!ft_strncmp("export",str,6))
			printf("yakında gelicek\n");
		else if(!ft_strncmp("unset",str,5))
			printf("yakında gelicek\n");
		else if(!ft_strncmp("env",str,3))
			printf("yakında gelicek\n");
	}
	return(0);
}
