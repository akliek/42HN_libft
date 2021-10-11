# 42HN_libft
Summary:

This project aims to code a C library regrouping usual functions that you’ll be allowed to use in all your other projects.

Foreword:

C programming can be very tedious when one doesn’t have access to those highly useful standard functions. This project allows to re-write those functions,
understand them, and learn to use them.

Links:

Wikipedia about libaries: https://en.wikipedia.org/wiki/Library_(computing)

Subject PDF: https://github.com/akliek/42HN_libft/blob/master/en.subject.pdf

# Clone
Open a terminal and run following command:
```
git clone <repository url>
```
# Instalation
Then go to created repository and run following command:
```
make
```
# How to use?
For using libft functions in your projects include libft.h header and compile it with following command:
```
gcc your_files.c <path_to_libft.a>
```
# What functions doe's libft include?
Re-coded standart functions (RTFM):
```
  • ft_isalpha - works like standart <isalpha> function.
  • ft_isdigit - works like standart <isalpha> function.
  • ft_isalnum - works like standart <isalnum> function.
  • ft_isascii - works like standart <isascii> function.
  • ft_isprint - works like standart <isprint> function.
  • ft_strlen - works like standart <strlen> function.
  • ft_memset - works like standart <memset> function.
  • ft_bzero - works like standart <bzero> function.
  • ft_memcpy - works like standart <memcpy> function.
  • ft_memccpy - works like standart <memccpy> function.
  • ft_memmove - works like standart <memmove> function.
  • ft_strlcpy - works like standart <strlcpy> function.
  • ft_strlcat - works like standart <strlcat> function.
  • ft_toupper - works like standart <toupper> function.
  • ft_tolower - works like standart <tolower> function.
  • ft_strchr - works like standart <strchr> function.
  • ft_strrchr - works like standart <strrchr> function.
  • ft_strncmp - works like standart <strncmp> function.
  • ft_memchr - works like standart <memchr> function.
  • ft_memcmp - works like standart <memcmp> function.
  • ft_strnstr - works like standart <strnstr> function.
  • ft_atoi - works like standart <atoi> function.
  • ft_calloc - works like standart <calloc> function.
  • ft_strdup - works like standart <strdup> function.
```
Additional functions:
```
  • ft_substr
      - Prototype: char *ft_substr(char const *s, unsigned int start, size_t len);
      - Parameters:
        #1. The string from which to create the substring.
        #2. The start index of the substring in the string ’s’.
        #3. The maximum length of the substring.
      - Return value: the substring, NULL if the allocation fails.
      - External functions: malloc
      - Description: Allocates (with malloc(3)) and returns a substring from the string ’s’.
        The substring begins at index ’start’ and is of maximum size ’len’.
  • ft_strjoin
      - Prototype: char *ft_strjoin(char const *s1, char const *s2);
      - Parameters:
        #1. The prefix string.
        #2. The suffix string.
      - Return value: the new string, NULL if the allocation fails.
      - External functions: malloc
      - Description: Allocates (with malloc(3)) and returns a new string,
        which is the result of the concatenation of ’s1’ and ’s2’.
  • ft_strtrim
      - Prototype: char *ft_strtrim(char const *s1, char const *set);
      - Parameters:
        #1. The string to be trimmed.
        #2. The reference set of characters to trim.
      - Return value: the trimmed string, NULL if the allocation fails.
      - External functions: malloc
      - Description: Allocates (with malloc(3)) and returns a copy of ’s1’ with the
        characters specified in ’set’ removed from the beginning and the end of the string.
  • ft_split
      - Prototype: char **ft_split(char const *s, char c);
      - Parameters:
        #1. The string to be split.
        #2. The delimiter character.
      - Return value: the array of new strings resulting from the split,
        NULL if the allocation fails.
      - External functions: malloc, free
      - Description: Allocates (with malloc(3)) and returns an array of strings obtained by
        splitting ’s’ using the character ’c’ as a delimiter.
        The array must be ended by a NULL pointer.
  • ft_itoa
      - Prototype: char *ft_itoa(int n);
      - Parameters:
        #1. the integer to convert.
      - Return value: the string representing the integer, NULL if the allocation fails.
      - External functions: malloc
      - Description: Allocates (with malloc(3)) and returns a string representing
        the integer received as an argument. Negative numbers must be handled.
  • ft_strmapi
      - Prototype: char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
      - Parameters:
        #1. The string on which to iterate.
        #2. The function to apply to each character.
      - Return value: The string created from the successive applications of ’f’.
        Returns NULL if the allocation fails.
      - External functions: malloc
      - Description: Applies the function ’f’ to each character of the string ’s’ ,
        and passing its index as first argument to create a new string (with malloc(3))
        resulting from successive applications of ’f’.
  • ft_puchar_fd
      - Prototype: void ft_putchar_fd(char c, int fd);
      - Parameters:
        #1. The character to output.
        #2. The file descriptor on which to write.
      - Return value: NONE
      - External functions: write
      - Description: Allocates (with malloc(3)) and returns an array of strings obtained
        by splitting ’s’ using the character ’c’ as a delimiter.
        The array must be ended by a NULL pointer.
  • ft_putstr_fd
      - Prototype: void ft_putstr_fd(char *s, int fd);
      - Parameters:
        #1. The string to output.
        #2. The file descriptor on which to write.
      - Return value: NONE
      - External functions: write
      - Description: Outputs the string ’s’ to the given file descriptor.
  • ft_putendl_fd
      - Prototype: void ft_putendl_fd(char *s, int fd);
      - Parameters:
        #1. The string to output.
        #2. The file descriptor on which to write.
      - Return value: NONE
      - External functions: write
      - Description: Outputs the string ’s’ to the given file descriptor,
        followed by a newline.
  • ft_putnbr_fd
      - Prototype: void ft_putnbr_fd(int n, int fd);
      - Parameters:
        #1. The integer to output.
        #2. The file descriptor on which to write.
      - Return value: NONE
      - External functions: write
      - Description: Outputs the integer ’n’ to the given file descriptor.
  • ft_lstnew
      - Prototype: t_list *ft_lstnew(void *content);
      - Parameters:
        #1. The content to create the new element with.
      - Return value: The new element.
      - External functions: malloc
      - Description: Allocates (with malloc(3)) and returns a new element.
        The variable ’content’ is initialized with the value of the parameter ’content’.
        The variable ’next’ is initialized to NULL.
  • ft_lstadd_front
      - Prototype: void ft_lstadd_front(t_list **lst, t_list *new);
      - Parameters:
        #1. The address of a pointer to the first link of a list.
        #2. The address of a pointer to the element to be added to the list.
      - Return value: NONE
      - External functions: NONE
      - Description: Adds the element ’new’ at the beginning of the list.
  • ft_lstsize
      - Prototype: int ft_lstsize(t_list *lst);
      - Parameters:
        #1. The beginning of the list.
      - Return value: Length of the list.
      - External functions: NONE
      - Description: Counts the number of elements in a list.
  • ft_lstlast
      - Prototype: t_list *ft_lstlast(t_list *lst);
      - Parameters:
        #1. The beginning of the list.
      - Return value: Last element of the list.
      - External functions: NONE
      - Description: Returns the last element of the list.
  • ft_lstadd_back
      - Prototype: void ft_lstadd_back(t_list **lst, t_list *new);
      - Parameters:
        #1. The address of a pointer to the first link of a list.
        #2. The address of a pointer to the element to be added to the list.
      - Return value: NONE
      - External functions: NONE
      - Description: Adds the element ’new’ at the end of the list.
  • ft_lstdelone
      - Prototype: void ft_lstdelone(t_list *lst, void (*del)(void *));
      - Parameters:
        #1. The element to free.
        #2. The address of the function used to delete the content.
      - Return value: NONE
      - External functions: free
      - Description: Takes as a parameter an element and frees the memory of the element’s
        content using the function ’del’ given as a parameter and free the element.
        The memory of ’next’ must not be freed.
  • ft_lstclear
      - Prototype: void ft_lstclear(t_list **lst, void (*del)(void *));
      - Parameters:
        #1. The adress of a pointer to an element.
        #2. The adress of the function used to delete the content of the element.
      - Return value: NONE
      - External functions: free
      - Description: Deletes and frees the given element and every successor of that element,
        using the function ’del’ and free(3).
        Finally, the pointer to the list must be set to NULL.
  • ft_lstiter
      - Prototype: void ft_lstiter(t_list *lst, void (*f)(void *));
      - Parameters:
        #1. The adress of a pointer to an element.
        #2. The adress of the function used to iterate on the list.
      - Return value: NONE
      - External functions: NONE
      - Description: Iterates the list ’lst’ and applies the function ’f’ to the content of
        each element.
  • ft_lstmap
      - Prototype: t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
      - Parameters:
        #1. The adress of a pointer to an element.
        #2. The adress of the function used to iterate on the list.
        #3. The adress of the function used to delete the content of an element if needed.
      - Return value: The new list. NULL if the allocation fails.
      - External functions: malloc, free
      - Description: Iterates the list ’lst’ and applies the function ’f’ to the content of each
        element. Creates a new list resulting of the successive applications of the function ’f’.
        The ’del’ function is used to delete the content of an element if needed.
```
