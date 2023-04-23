/*
** EPITECH PROJECT, 2023
** minishell2
** File description:
** minishell2
*/

#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include "mysh.h"
#include "ast.h"

int separator_handler(char *command_line, head_t *head)
{
    ast_t *command_tree = NULL;
    int r = 0;

    head->stdin_copy = dup(0);
    head->stdout_copy = dup(1);
    command_tree = build_ast(command_line, 0);
    if (!command_tree) {
        head->keep = false;
        return 84;
    }
    execute(command_tree, 0, 1, head);
    free_ast(command_tree);
    dup2(head->stdin_copy, 0);
    dup2(head->stdout_copy, 1);
    return r;
}
