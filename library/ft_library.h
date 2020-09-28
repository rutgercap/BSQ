#	ifndef FT_H
#	define FT_H

typedef enum
{
	FALSE,
	TRUE
}	t_bool;

extern	int		ft_strlen(char *str);

extern	void	ft_putchar(char c);

extern	void	ft_putstr(char *str);

extern 	int		ft_str_is_alpha(char *str);

extern	int		ft_str_is_numeric(char *str);

extern	char	*compare(char *str, char *to_find, int counter_1);

extern	void	ft_swap(int *a, int *b);

extern	void	ft_putnbr(int nb);

#	define SUCCESS	0

#	endif
