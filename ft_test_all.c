/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:32:01 by rtammi            #+#    #+#             */
/*   Updated: 2024/04/27 19:17:18 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h> // For standard library functions
#include "libft.h"

// Helper function for ft_striteri
void to_uppercase(unsigned int index, char *c) {
    (void)index; // Avoid unused parameter warning
    *c = toupper(*c);
}

// Helper function for ft_lstiter
void print_list_content(void *content) {
    printf("%s ", (char *)content);
}

// Helper function for ft_lstmap
void *duplicate_content(void *content) {
    return strdup((char *)content);
}

// Test for ft_isalpha
void test_ft_isalpha() {
    printf("\nTesting ft_isalpha vs. isalpha:\n");
    printf("Custom: %d, Std: %d (Expected: 1)\n", ft_isalpha('A'), isalpha('A'));
    printf("Custom: %d, Std: %d (Expected: 0)\n", ft_isalpha('1'), isalpha('1'));
}

// Test for ft_isdigit
void test_ft_isdigit() {
    printf("\nTesting ft_isdigit vs. isdigit:\n");
    printf("Custom: %d, Std: %d (Expected: 1)\n", ft_isdigit('5'), isdigit('5'));
    printf("Custom: %d, Std: %d (Expected: 0)\n", ft_isdigit('a'), isdigit('a'));
}

// Test for ft_isalnum
void test_ft_isalnum() {
    printf("\nTesting ft_isalnum vs. isalnum:\n");
    printf("Custom: %d, Std: %d (Expected: 1)\n", ft_isalnum('A'), isalnum('A'));
    printf("Custom: %d, Std: %d (Expected: 0)\n", ft_isalnum('@'), isalnum('@'));
}

// Test for ft_isascii
void test_ft_isascii() {
    printf("\nTesting ft_isascii vs. isascii:\n");
    printf("Custom: %d, Std: %d (Expected: 1)\n", ft_isascii(65), isascii(65));
    printf("Custom: %d, Std: %d (Expected: 0)\n", ft_isascii(128), isascii(128));
}

// Test for ft_isprint
void test_ft_isprint() {
    printf("\nTesting ft_isprint vs. isprint:\n");
    printf("Custom: %d, Std: %d (Expected: 1)\n", ft_isprint(32), isprint(32));
    printf("Custom: %d, Std: %d (Expected: 0)\n", ft_isprint(127), isprint(127));
}

// Test for ft_strlen
void test_ft_strlen() {
    printf("\nTesting ft_strlen vs. strlen:\n");
    printf("Custom: %lu, Std: %lu (Expected: 5)\n", ft_strlen("Hello"), strlen("Hello"));
}

// Test for ft_memset
void test_ft_memset() {
    char buffer_custom[10];
    char buffer_std[10];
    printf("\nTesting ft_memset vs. memset:\n");
    ft_memset(buffer_custom, 'A', 10);
    memset(buffer_std, 'A', 10);
    printf("Custom: %s, Std: %s (Expected: AAAAAAAAAA)\n", buffer_custom, buffer_std);
}

// Test for ft_bzero
void test_ft_bzero() {
    char buffer_custom[10];
    printf("\nTesting ft_bzero vs. manual zeroing:\n");
    ft_bzero(buffer_custom, 10);
    char buffer_expected[10] = {0}; // Expected all zeros
    printf("Custom: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", buffer_custom[i]);
    }
    printf("\nExpected: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", buffer_expected[i]);
    }
    printf("\n");
}

// Test for ft_memcpy
void test_ft_memcpy() {
    char dest_custom[20] = {0};
    char dest_std[20] = {0};
    printf("\nTesting ft_memcpy vs. memcpy:\n");
    ft_memcpy(dest_custom, "Hello", 5);
    memcpy(dest_std, "Hello", 5);
    printf("Custom: %s, Std: %s (Expected: Hello)\n", dest_custom, dest_std);
}

// Test for ft_memmove
void test_ft_memmove() {
    char dest_custom[20] = {0};
    char dest_std[20] = {0};
    printf("\nTesting ft_memmove vs. memmove:\n");
    ft_memmove(dest_custom, "Hello", 5);
    memmove(dest_std, "Hello", 5);
    printf("Custom: %s, Std: %s (Expected: Hello)\n", dest_custom, dest_std);
}

// Test for ft_strlcpy
void test_ft_strlcpy() {
    char dest_custom[20];
    char dest_std[20];
    printf("\nTesting ft_strlcpy vs. strlcpy:\n");
    printf("Custom: %lu (Expected: 13)\n", ft_strlcpy(dest_custom, "Hello, World!", 20));
    printf("Custom: %s (Expected: Hello, World!)\n", dest_custom);
}

// Test for ft_strlcat
void test_ft_strlcat() {
    char dest_custom[20] = "Hello";
    char dest_std[20] = "Hello";
    printf("\nTesting ft_strlcat vs. strlcat:\n");
    printf("Custom: %lu (Expected: 11)\n", ft_strlcat(dest_custom, " World", 20));
    printf("Custom: %s (Expected: Hello World)\n", dest_custom);
}

// Test for ft_strchr
void test_ft_strchr() {
    printf("\nTesting ft_strchr vs. strchr:\n");
    const char *str = "Hello, World!";
    printf("Custom: %s, Std: %s (Expected: World!)\n", ft_strchr(str, 'W'), strchr(str, 'W'));
}

// Test for ft_strrchr
void test_ft_strrchr() {
    printf("\nTesting ft_strrchr vs. strrchr:\n");
    const char *str = "Hello, World!";
    printf("Custom: %s, Std: %s (Expected: orld!)\n", ft_strrchr(str, 'o'), strrchr(str, 'o'));
}

// Test for ft_strncmp
void test_ft_strncmp() {
    printf("\nTesting ft_strncmp vs. strncmp:\n");
    printf("Custom: %d, Std: %d (Expected: positive)\n", ft_strncmp("hello", "Hello", 5), strncmp("hello", "Hello", 5));
}

// Test for ft_strnstr
void test_ft_strnstr() {
    printf("\nTesting ft_strnstr vs. strnstr:\n");
    printf("Custom: %s (Expected: World!)\n", ft_strnstr("Hello, World!", "World", 13));
}

// Test for ft_memchr
void test_ft_memchr() {
    printf("\nTesting ft_memchr vs. memchr:\n");
    const char *src = "Hello, World!";
    printf("Custom: %s, Std: %s (Expected: World!)\n", (char *)ft_memchr(src, 'W', 13), (char *)memchr(src, 'W', 13));
}

// Test for ft_memcmp
void test_ft_memcmp() {
    printf("\nTesting ft_memcmp vs. memcmp:\n");
    printf("Custom: %d, Std: %d (Expected: 0)\n", ft_memcmp("hello", "hello", 5), memcmp("hello", "hello", 5));
}

// Test for ft_toupper
void test_ft_toupper() {
    printf("\nTesting ft_toupper vs. toupper:\n");
    printf("Custom: %c, Std: %c (Expected: A)\n", ft_toupper('a'), toupper('a'));
}

// Test for ft_tolower
void test_ft_tolower() {
    printf("\nTesting ft_tolower vs. tolower:\n");
    printf("Custom: %c, Std: %c (Expected: a)\n", ft_tolower('A'), tolower('A'));
}

// Test for ft_atoi
void test_ft_atoi() {
    printf("\nTesting ft_atoi vs. atoi:\n");
    printf("Custom: %d, Std: %d (Expected: 123)\n", ft_atoi("123"), atoi("123"));
}

// Test for ft_strdup
void test_ft_strdup() {
    printf("\nTesting ft_strdup vs. strdup:\n");
    char *str_custom = ft_strdup("Hello, World!");
    char *str_std = strdup("Hello, World!");
    printf("Custom: %s, Std: %s (Expected: Hello, World!)\n", str_custom, str_std);
    free(str_custom);
    free (str_std);
}

// Test for ft_calloc
void test_ft_calloc() {
    printf("\nTesting ft_calloc vs. calloc:\n");
    size_t size = 10;
    int *arr_custom = (int *)ft_calloc(size, sizeof(int));
    int *arr_std = (int *)calloc(size, sizeof(int));
    printf("Testing array after calloc:\n");
    for (size_t i = 0; i < size; i++) {
        printf("Custom: %d, Std: %d (Expected: all zeros)\n", arr_custom[i], arr_std[i]); 
    }
    free(arr_custom);
    free(arr_std);
}

// Test for ft_strjoin
void test_ft_strjoin() {
    printf("\nTesting ft_strjoin:\n");
    char *joined_str = ft_strjoin("Hello", " World");
    printf("Joined string: %s (Expected: Hello World)\n", joined_str);
    free(joined_str);
}

// Test for ft_strtrim
void test_ft_strtrim() {
    printf("\nTesting ft_strtrim:\n");
    char *result_custom = ft_strtrim("   Hello, World!   ", " ");
    printf("Trimmed string: %s (Expected: Hello, World!)\n", result_custom);
    free(result_custom);
}

// Test for ft_substr
void test_ft_substr() {
    printf("\nTesting ft_substr:\n");
    char *result_custom = ft_substr("Hello, World!", 7, 5);
    printf("Substring: %s (Expected: World)\n", result_custom);
    free(result_custom);
}

// Test for ft_strsplit
void test_ft_strsplit() {
    printf("\nTesting ft_strsplit:\n");
    char **split_result = ft_split("Hello World", ' ');
    printf("Split result: %s, %s (Expected: Hello, World)\n", split_result[0], split_result[1]); 
    free(split_result[0]);
    free(split_result[1]);
    free(split_result);
}

// Test for ft_striteri
void test_ft_striteri() {
    printf("\nTesting ft_striteri:\n");
    char test_str[] = "Hello";
    ft_striteri(test_str, to_uppercase);
    printf("Resulting string after iteri: %s (Expected: HELLO)\n", test_str);
}


// Test for ft_putchar_fd
void test_ft_putchar_fd() {
    printf("\nTesting ft_putchar_fd:\n");
    printf("Output to stdout: ");
    ft_putchar_fd('H', STDOUT_FILENO);
    printf(" (Expected: H)\n");
}

// Test for ft_putstr_fd
void test_ft_putstr_fd() {
    printf("\nTesting ft_putstr_fd:\n");
    printf("Output to stdout: ");
    ft_putstr_fd("Hello", STDOUT_FILENO);
    printf(" (Expected: Hello)\n");
}

// Test for ft_putendl_fd
void test_ft_putendl_fd() {
    printf("\nTesting ft_putendl_fd:\n");
    printf("Output to stdout: ");
    ft_putendl_fd("Hello", STDOUT_FILENO);
    printf(" (Expected: Hello\\n)\n");
}

// Test for ft_putnbr_fd
void test_ft_putnbr_fd() {
    printf("\nTesting ft_putnbr_fd:\n");
    printf("Output to stdout: ");
    ft_putnbr_fd(123, STDOUT_FILENO);
    printf(" (Expected: 123)\n");
}

// Test for ft_lstnew
void test_ft_lstnew() {
    printf("\nTesting ft_lstnew:\n");
    t_list *node = ft_lstnew("first");
    printf("Node content: %s (Expected: first)\n", (char *)node->content);
    free(node);
}

// Test for ft_lstadd_front
void test_ft_lstadd_front() {
    printf("\nTesting ft_lstadd_front:\n");
    t_list *node1 = ft_lstnew("first");
    t_list *node2 = ft_lstnew("second");
    ft_lstadd_front(&node1, node2);
    printf("First node content: %s (Expected: second)\n", (char *)node1->content);
}

// Test for ft_lstadd_back
void test_ft_lstadd_back() {
    printf("\nTesting ft_lstadd_back:\n");
    t_list *node1 = ft_lstnew("first");
    t_list *node2 = ft_lstnew("second");
    ft_lstadd_back(&node1, node2);
    t_list *last = ft_lstlast(node1);
    printf("Last node content: %s (Expected: second)\n", (char *)last->content);
}

// Test for ft_lstsize
void test_ft_lstsize() {
    printf("\nTesting ft_lstsize:\n");
    t_list *node1 = ft_lstnew("first");
    t_list *node2 = ft_lstnew("second");
    ft_lstadd_back(&node1, node2);
    printf("List size: %d (Expected: 2)\n", ft_lstsize(node1));
}

// Test for ft_lstlast
void test_ft_lstlast() {
    printf("\nTesting ft_lstlast:\n");
    t_list *node1 = ft_lstnew("first");
    t_list *node2 = ft_lstnew("second");
    ft_lstadd_back(&node1, node2);
    t_list *last = ft_lstlast(node1);
    printf("Last node content: %s (Expected: second)\n", (char *)last->content);
}

// Test for ft_lstdelone
void test_ft_lstdelone() {
    printf("\nTesting ft_lstdelone:\n");
    t_list *node = ft_lstnew(strdup("content"));
    ft_lstdelone(node, free); // No output expected, just deletion
    printf("Node deleted without errors.\n");
}

// Test for ft_lstclear
void test_ft_lstclear() {
    printf("\nTesting ft_lstclear:\n");
    t_list *node1 = ft_lstnew(strdup("first"));
    t_list *node2 = ft_lstnew(strdup("second"));
    ft_lstadd_back(&node1, node2);
    ft_lstclear(&node1, free);
    printf("List cleared without errors.\n");
}

// Test for ft_lstiter
void test_ft_lstiter() {
    printf("\nTesting ft_lstiter:\n");
    t_list *node1 = ft_lstnew("first");
    t_list *node2 = ft_lstnew("second");
    ft_lstadd_back(&node1, node2);
    printf("Iterating through list: ");
    ft_lstiter(node1, print_list_content);
    printf("(Expected: first second)\n");
}

// Test for ft_lstmap
void test_ft_lstmap() {
    printf("\nTesting ft_lstmap:\n");
    t_list *node1 = ft_lstnew("first");
    t_list *node2 = ft_lstnew("second");
    ft_lstadd_back(&node1, node2);

    t_list *new_list = ft_lstmap(node1, duplicate_content, free);
    t_list *current = new_list;
    printf("Mapped list content: ");
    while (current) {
        printf("%s ", (char *)current->content);
        current = current->next;
    }
    printf("(Expected: first second)\n");

    ft_lstclear(&new_list, free); // Clean up the created list
}

// Main function to run all tests
int main() {
    test_ft_isalpha();
    test_ft_isdigit();
    test_ft_isalnum();
    test_ft_isascii();
    test_ft_isprint();
    test_ft_strlen();
    test_ft_memset();
    test_ft_bzero();
    test_ft_memcpy();
    test_ft_memmove();
    test_ft_strlcpy();
    test_ft_strlcat();
    test_ft_strchr();
    test_ft_strrchr();
    test_ft_strncmp();
    test_ft_strnstr();
    test_ft_memchr();
    test_ft_memcmp();
    test_ft_toupper();
    test_ft_tolower();
    test_ft_atoi();
    test_ft_strdup();
    test_ft_calloc();
    test_ft_strjoin();
    test_ft_strtrim();
    test_ft_substr();
    test_ft_strsplit();
    test_ft_striteri();
    test_ft_putchar_fd();
    test_ft_putstr_fd();
    test_ft_putendl_fd();
    test_ft_putnbr_fd();
    test_ft_lstnew();
    test_ft_lstadd_front();
    test_ft_lstadd_back();
    test_ft_lstsize();
    test_ft_lstlast();
    test_ft_lstdelone();
    test_ft_lstclear();
    test_ft_lstiter();
    test_ft_lstmap();

    return 0;
}
