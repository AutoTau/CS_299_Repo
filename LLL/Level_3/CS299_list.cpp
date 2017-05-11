#include "CS299_list.h"

//private functions
bool list::remove_last_two(node * & head)
    {
        if(!head || !head->next || !head->next->next) return 0;

        if(head->next->next != NULL)
        {
            remove_last_two(head->next);
        }
        else
        {
            if((head->next->data + head->next->next->data) <= this->head->data)
            {
                return 0;
            }
            else
            {
                head = tail;
                delete head->next->next;
                head->next->next = NULL;
                delete head->next;
                head->next = NULL;
                return true;
            }
        }
        return 0;
    }


float list::average(node * head, int & sum)
{
    if(!head) return 0;
}

//public wrapper functions
void list::remove_last_two()
{
    remove_last_two(head);
}







