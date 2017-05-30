#include "CS299_list.h" 
using namespace std;

//Check if match(the data sent in) is an element of our LLL
//Does not check for multiple matches
bool find(node* head, int match)
{
	if(head == NULL) 
	{ 
		cout << "no match for : " << match << endl;
		return false;
	}
	else if(head->data == match)
	{
		cout << "match for : " << match <<  endl;
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
	
	while(head->next != NULL)
	{
		node * current = head->next->next;	
		display_every_other(current);
		return 1;
	}
return 1;
}

//Calculate average, dividing the sum of all entries by the number of entries.
int returnAverage(int num, int numofNum)
{
	int average = (num/numofNum);
	cout << "Average is : " << average << endl;
	return average;

}

//Add up all the entries in the LLL.
int getAverage(node * head, int num, int numofNum)
{
	
	if(head == NULL)
	{
		cout << "End of list" << endl;
		returnAverage(num, numofNum);	
		return 0;
	}
		
	num = num + head->data;
	node * current = head->next;
	numofNum++;
	return getAverage(current,num, numofNum);

}
