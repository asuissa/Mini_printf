/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuissa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:42:21 by asuissa           #+#    #+#             */
/*   Updated: 2019/04/07 15:48:12 by asuissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <wchar.h>
# define BUFF_SIZE 1000

/*
** int min/max
*/

# define INT_MAX 2147483647
# define INT_MIN -2147483648

# define ERROR 0
# define SUCCESS 1

/*
** Code Couleur
*/

# define BLACK "\033[30m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[35m"
# define EOC "\033[0m"
# define CLEAR "\e[1;1H\e[2J"

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_init_gnl
{
	int				r;
	char			buffer[BUFF_SIZE + 1];
	char			*c;
	t_list			*tmp;
	size_t			b;
}					t_init_gnl;

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *s);
size_t				ft_strclen(const char *s, char c);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_strnchr(const char *s, int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack, const char *needle,
								size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
long				ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strfjoin(char **s1, char *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(long long n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(long n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *lnew);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
char				*ft_strlowcase(char *str);
char				*ft_strcapitalize(char *str);
void				ft_swap(int *a, int *b);
char				*ft_strrev(char *str);
void				ft_print_words_tables(char **tab);
void				ft_foreach(int *tab, int length, void (*f)(int));
int					ft_any(char **tab, int (*f)(char*));
int					ft_count_if(char **tab, int (*f)(char*));
void				ft_sort_wordtab(char **tab);
char				*ft_strfjoin(char **s1, char *s2);
int					get_next_line(const int fd, char **line);
void				ft_putnbr_base(long n, char *base);
long				ft_atoi_base(char *str, char *base);
char				*ft_itoa_base(long long nb, char *base);
char				*ft_strmultijoinfree(unsigned int nb, ...);
char				*ft_strf2join(char *s1, char *s2);
char				*ft_memfjoin(void *s1, size_t ts1, void *s2, size_t ts2);
int					ft_atoi_int(const char *str);

/*
** ft_printf mini
*/

int					ft_printf(const char *format, ...);
char				*del_pourcent(char *str);
int					nb_pourcent(char *str);
int					real_job(char *str, va_list ap);
int					ft_wcharlen(wchar_t wchar);
size_t				ft_wbytelen(wchar_t *ws);
size_t				ft_wstrlen(wchar_t *ws);
int					ft_putwchar_in_char(wchar_t wchar, char *fresh, int i);
char				*ft_transform_wchar(wchar_t *ws);

int					spec_w(va_list ap, char *out);
int					spec_y(va_list ap, char *out);
int					spec_b(va_list ap, char *out);

int					spec_gx(va_list ap, char *out);
int					spec_x(va_list ap, char *out);
int					spec_u(va_list ap, char *out);
int					spec_o(va_list ap, char *out);
int					spec_c(va_list ap, char *out);
int					spec_d(va_list ap, char *out);
int					spec_p(va_list ap, char *out);
int					spec_s(va_list ap, char *out);
int					spec_gc(va_list ap, char *out);
int					spec_gs(va_list ap, char *out);

#endif
