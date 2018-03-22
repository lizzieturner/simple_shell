#ifndef SHELL_H
#define SHELL_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

/* check_helpers */
void exit_check(char *user_input);
int blank_check(char *user_input);
int path_check(char *command);

/* fork_wait_exec */
void fork_wait_exec(char **commands, char **env);

/* memory_helpers */
void free_commands(char **commands);

/* parse_input */
char **parse_input(char *user_input);

/* string_helpers */
int _strlen(char *str);
char *_strcat(char *dest, char *src);

/* env_helpers */
int get_path_count(char *path);
char **get_path_array(char **env);

#endif
