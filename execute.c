#include "shell.c"
/**
 * execute_prog - executes binary or builtin
 * @args: argument buffer
 * @line: line buffer
 * @env: environment
 * @flow: helps decide what code to run
 * Return: 1 if success
 */
int execute_prog(char **args, char *line, char **env, int flow)
{
	int status;

	if (args[0] == NULL)
		return (1);
	if (flow == 1)
	{
		if (check_for_builtins(args, line, env) == 1)
			return (1);
	}
	status = launch_prog(args);
	return (status);
}
