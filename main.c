
#include "ts.h"


// create new node
// add node to the front of list
// add node to the back of the list
// delete node
// get last node
// clear list
int main(void)
{
    t_list *head;
    t_list *nnnode;
    int u = 0;
    int f = 1;
    head = ft_lstnew("this is the Head Node!");

    //printf("the result:: %s.\n", (char *)head->content);
    t_list *new = ft_lstnew("this is the new node.");
    ft_lstadd_front(&head, new);

    int i = 0;
    // t_list *tmp = head;
    // while (tmp)
    // {

    //     printf("(%d):the result:: %s.\n",i, (char *)tmp->content);
    //     tmp = tmp->next;
    //     i++;
    // }
    // printf("---------()------------\n");

// char *restr()
// {
//     char *ss;

// }

char *strs[50];
size_t b = 165411;
for(int k = 0 ; k < 50; k++)
{
    strs[k] = ft_itoa(b);
    // printf("itoi return : %s\n", strs[k]);
    b += 659;
}
    int r = 0;
    while (r < 50)
    {

        nnnode = ft_lstnew(strs[r]);
        ft_lstadd_back(&head, nnnode);
        r++;
    }
    
    // i = 0;
    
        while (head)
    {

        printf("(%.2d) : the result : %s\n",i, (char *)head->content);
        head = head->next;
        i++;
    }
    // char *p = "";

    // int i = (int)&p;
    // char *str = ft_itoa(i);
    // printf("res::   %s.. %p\n", str, p);
    
}

