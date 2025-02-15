/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:50:03 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/14 20:56:13 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_H
# define PUSH_H

# include <stdlib.h>
# include "Printf/ft_printf.h"
# include <unistd.h>

typedef struct s_list
{
	long			number;
	int				index;
	struct s_list	*next;
}	t_list;

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_pa(t_list **stack_a, t_list **stack_b);
void	ft_pb(t_list **stack_a, t_list **stack_b);
void	ft_ra(t_list **stack_a);
void	ft_rb(t_list **stack_b);
void	ft_rr(t_list **stack_a, t_list **stack_b);
void	ft_rra(t_list **stack_a);
void	ft_rrb(t_list **stack_b);
void	ft_rrr(t_list **stack_a, t_list **stack_b);
void	ft_sa(t_list **stack);
void	ft_sb(t_list **stack);
void	free_list(t_list *lst);
void	move_to_top(t_list **stack, long value);
void	ft_ss(t_list **stack_a, t_list **stack_b);
void	build_stack_from_args(t_list **stack, int argc, char **argv);
void	algorithm(t_list **stack_a, t_list **stack_b, int size, int *array);
void	find_un_min(t_list **stack, long *min1);
void	find_two_min(t_list **stack, long *min1, long *min2);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
int		*array_of_list(t_list **stack, int size);
int		ft_isdigit(int c);
int		algorithm_error(int argc, char **argv);
int		safe_create_node_array(t_list **stack, int *array, int size);
int		is_list_sorted(t_list **stack, int *array, int size);
int		ft_list_size(t_list *static_a);
int		algorithm_safe_node(t_list **stack_a, t_list **stack_b);
int		check_min_max(char **numbers);
int		has_duplicate_numbers(t_list **stack);
long	ft_atol(const char *nptr);
size_t	ft_strlen(const char *s);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);

#endif