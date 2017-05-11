#include "CS299_list.h" 
using namespace std;

//Check if match(the data sent in) is an element of our LLL
//Does not check for multiple matches
bool find(node* head, int match)
{
	cout << "Looking for : " << match << endl; 
	if(head == NULL) 
	{ 
		cout << "no match" << endl;
		return false;
	}
	else if(head->data == match)
	{
		cout << "match" << endl;
		return true;
	}

	node * current = head->next;
	return find(current,match);
}

//displays every other entries data. returns an integer for every entry displayed.
int display_every_other(node * head)
{
	if(head == NULL)
	{
		cout << "Empty list or end of list" << endl;
		return 0;
	}
	
	if(head->next == NULL)
	{
		cout << "entry : " << head->data << endl;
		return 0;
	}

		cout << "entry : " << head->data << endl;
/*	
	if(head->next->next == NULL)
	{
		cout << "next->next is null" << endl;
		node * current = head->next;
		return 1;
	}
*/
	while(head->next != NULL)
	{
		node * current = head->next->next;	
		display_every_other(current);
		return 1;
	}
return 1;
}
