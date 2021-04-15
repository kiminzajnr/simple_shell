#include "shell.h"

/**
  * **parse_input_string - splits the string entered by the user.
  * @buffer: string to be split.
  * Return: splitted string.
  */
char **parse_input_string(char *buffer)
{
	char **cmd = NULL;
	char *token = NULL;
	int i;

	cmd = malloc(sizeof(char *) * 1024);
	if (cmd == NULL)
	{
		perror("memory could not be allocated");
		exit(EXIT_FAILURE);
	}
	token = strtok(buffer, " \n");
	i = 0;
	while (token != NULL)
	{
		cmd[i] = token;
		i++;
		token = strtok(NULL, " \n");
	}
	cmd[i] = NULL;
	return (cmd);
}
