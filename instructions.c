#include "push_swap.h"

int swap(t_list *stack)
{
    t_list  *temp;
    t_list  *temp2;
    int     tmp_value;

    if(ft_lstsize(stack) <= 1)
        return (-1);
    
    temp = stack;
    temp2 = stack->next;

    if (!temp || !temp2)
        return (ft_puterror());

    tmp_value = temp->num;
    temp->num = temp2->num;
    temp2->num = tmp_value;

    return (0);
}

int sa (t_list *a )
{
    if(swap(a) == -1)
        return (-1);
    ft_putend("sa",2);
    return (0);
}

int sb (t_list *b )
{
    if(swap(b) == -1)
        return (-1);
    ft_putend("sb",2);
    return (0);
}

int ss(t_list *a, t_list *b)
{
    if(ft_lstsize(a) <=1 || ft_lstsize(b) <= 1)
        return (ft_puterror()); 
    swap(a);
    swap(b);
    ft_putend("ss",2);
    return (0);
}

int push (t_list *a, t_list *b)
{
    t_list tmp;
    if(ft_lstsize(b) == 0)
        ft_puterror();

  /*  if(!a)
    {
        a=
    }
*/
    return (0);
}

int pa(t_list *a, t_list *b)
{
    if(push(a,b) == -1)
        return(ft_puterror());
    ft_putend("pa",2);
    return (0);
}

int pb(t_list *b, t_list *a)
{
    if(push(b,a) == -1)
        return(ft_puterror());
    ft_putend("pb",2);
    return (0);
}


//

int rotate(t_list *a)
{

    return (0);
}

int ra(t_list *a)
{
    if(rotate(a) == -1)
        return(ft_puterror());
    ft_putend("ra",2);
    return (0);
}

int rb(t_list *b)
{
    if(rotate(b) == -1)
        return(ft_puterror());
    ft_putend("rb",2);
    return (0);
}

int rr(t_list *a, t_list *b)
{
    if(rotate(a) == -1 || rotate(b) == -1)
        return(ft_puterror());
    ft_putend("rr",2);
    return (0);
}


//

int rotatereverse(t_list *a)
{

    return(0);
}

int rra(t_list *a)
{
    if(rotatereverse(a) == -1)
        return(ft_puterror());
    ft_putend("rra",3);
    return (0);
}

int rrb(t_list *b)
{
    if(rotatereverse(b) == -1)
        return(ft_puterror());
    ft_putend("rrb",3);
    return (0);
}

int rrr(t_list *a,t_list *b)
{
    if(rotatereverse(a) == -1 || rotatereverse(b))
        return(ft_puterror());
    ft_putend("rrr",3);
    return (0);
}