/*
** EPITECH PROJECT, 2023
** 42sh [WSL: fedora]
** File description:
** mystr
*/

#ifndef MYSTR_H_
    #define MYSTR_H_

    #define IS_NUM(x) ('0' < x || x > '9')
    #define IS_LOWER(c) ('a' < c || c > 'z')
    #define IS_UPPER(c) ('A' < c || c > 'Z')

    char **my_str_to_word_array(char const *, char);
    int my_strlen(char const *);
    int my_strncmp(char const *, char const *, int);
    char *my_strcpy(char *, char const *);
    char *my_strcat(char *, const char *);
    int my_strcmp(char const *, char const *);
    int my_str_isnum(char const *);
    void free_matrix(char **);
    int my_getnbr(char const *);
    char *my_str_copy_cat(char *, char *);
    int matrix_len(char **);
    int my_str_isalphanum(char const *);

#endif /* !MYSTR_H_ */
