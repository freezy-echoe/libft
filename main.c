#include <stdio.h>
#include <strings.h>
#include <string.h>
#include <locale.h>
#include <limits.h>
#include <stdlib.h>
#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include "ft_isalnum.c"
#include "ft_isprint.c"
#include "ft_strlen.c"
#include "ft_memset.c"
#include "ft_bzero.c"
#include "ft_memcpy.c"
#include "ft_memmove.c"
#include "ft_strlcat.c"
#include "ft_toupper.c"
#include "ft_tolower.c"
#include "ft_strncmp.c"
#include "ft_strnstr.c"
#include "ft_strchr.c"
#include "ft_strrchr.c"
#include "ft_memchr.c"
#include "ft_memcmp.c"
#include "ft_atoi.c"
#include "ft_calloc.c"
#include "ft_strdup.c"



int	main(void)
{
  char *original = "Hello, 42!";
    char *copy = ft_strdup(original);

    if (copy)
    {
        printf("Original: %s\n", original);
        printf("Copy    : %s\n", copy);
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    // Remember to free after use
    free(copy);


	return 0;
}