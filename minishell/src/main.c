#include <stdio.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <stdlib.h>

int main(void)
{
	char *str;
	while (1)
	{
		str = readline("😊 erdemshell>");
		if(!strcmp("exit",str))
			exit(0);
	}
}
