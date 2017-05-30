#include "CS299_list.h"

//Place your name here in comments:
//
//
//
int main()
{
    //The following code builds the linear linked list
    node * head = NULL;
    build(head);
    display_all(head);

    //PLEASE PUT YOUR CODE HERE to call the functions
	int match = 41;
	cout << "searching for a match for the number : " << match << endl << endl;
	find(head,match);

	cout << "Displaying every other entry in the list" << endl << endl;
	display_every_other(head);

	cout << "Displaying all entries in the list" << endl << endl;
    display_all(head);

	cout << "Finding and displaying the entires in the list" << endl << endl;
    getAverage(head,0, 0);
    destroy(head);    

    return 0;
}
