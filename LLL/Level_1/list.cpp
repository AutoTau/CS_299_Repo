#include "CS299_list.h"
/*
//finds the data member's numbers that
//don't match the first data member's number
//and displays them as a list of numbers
int displayNoMatch(node *  &head)
{
    node * current = new node;
    current = head;
    
    if(head == NULL)
    {
        return 0;
    }
    cout << endl << "the list of numbers that don't match the first: ";

    while(current->next != NULL)
    {
       if(head->data == current->data)
       {
           current = current->next;
       }
       else if(current->next == NULL && current->next->data != head->data)
       {
           cout << " -> " << current->next->data;
           current = current->next;
       }
       else
       {
           cout << " -> " << current->data;
           current = current->next;
       }
    }

    if(current->data != head->data){
        cout << " -> " << current->data;
    }
   
    current = NULL;
    delete current;

    return 0;
}



//finds all of the data members
//inside the node that are larger than the last
//data member, and then it adds them 
//together and stores them in a new node 
//which is placed at the end of the list
int largerThanLast (node * &head){

    node * current = head;
    node * lastNode;
    node * sum = new node;
    int mySum = 0; 


    if(!head)
    {
        return 0;
    }

    while(current->next != NULL)
    {
        current = current->next;
    }

    lastNode = current;
    current = head;

    while(current->next != NULL)
    {
        if(current->data > lastNode->data)
        {
            sum->data += current->data;
            current = current->next;
        }
        else
        {
            current = current->next;
        }
    }                    

    lastNode->next = sum;
    mySum = sum->data;

    return mySum;
}

//finds the last two nodes data
//and checks to see if they accure 
//in the rest of the list more than once
bool find_last_two(node * &head)
{
    node * current = head;
    node * pointer_one;
    node * pointer_two;

    if(!head) return 0;

    while(current->next != NULL)
    {
        if(current->next->next == NULL && current->next != NULL)
        {
            pointer_one = current;
            pointer_two = current->next;
            current = current->next;
        }
        else
        {
            current = current->next;
        }
    }

    current = head;

    while(current->next != NULL)
    {
        if(current->data == pointer_one->data || current->data == pointer_two->data)
        {
            return true;
        }
        else
        {
            current = current->next;
        }
    }

    return false;

}
*/
int mydisplay_all(node * head)
{
	
//	node * current = new node;
	node * current = head;

	//check for special cases
	if(!head)
		return 0;

	//traversal
	cout << "This data doesn't match the first node's data : " << endl;	
		
	while(current->next != NULL)
	{

		if(current->data == head->data)
	    {
	    	current = current->next;
	    }
		else if(current->next == NULL && current->next->data != head->data)			
		{
			cout << current->data << endl;	
			current = current->next;
		}
		else
		{
			cout << current->data << endl;
			current = current->next;
		}
	}
	
	if(current->next == NULL && current->data != head->data)
	{
		cout << "last entry, and this data does not match the first node's data. the data contained is: " << endl << current->data << endl;
	}
	
//	current = nullptr;
//	delete current;
//	current = nullptr;

return 0;

}

int retSum(node * head)
{
	node * current = head;
	int tempData = 0;	
	int sumUp = 0;
	int tempSum = 0;
	if(!head)
		return 0;

	while(current->next != NULL)
	{
		current = current->next;
		
		if(current->next == NULL)
		{
			tempData = current->data;
			cout << "The last node's data is : " << tempData << endl;
		}

	}

	current = head;

	while(current->next != NULL)
	{

		if(current->data > tempData)
		{
			tempSum = current->data;			
			sumUp = tempSum + sumUp;
			
		}
		current = current->next;
		
	}
	cout << "Sum is : " << sumUp << endl;
return sumUp;
}

bool findLastTwo(node * head)
{

	node * current = head;
	int	SecLast = 0;
	int last = 0;

	while(current->next->next != NULL)
	{
		current = current->next;

		if(current->next->next == NULL)
		{
			last = current->next->data;
			SecLast = current->data;
			cout << "sec last : " << SecLast << endl;
			cout << "Last : " << last << endl;
		}

	}

return true;
}
