#include "CS299_list.h"

//Place your name here in comments:
//
//
//
int main()
{
    
    //This code sets up the list
    node * head = NULL;
    build(head);
    display_all(head);


    //PLEASE PUT YOUR CODE HERE to call the functions for lab
//    displayNoMatch(head);
	mydisplay_all(head);
	retSum(head);
	findLastTwo(head);

/* 
   int mySum = largerThanLast(head); 

    cout << endl 
         << "the sum of all the numbers larger that the last number is: "
         << mySum;
   
    if(find_last_two(head))
    {
        cout << endl << "One of the last two integers appears twice." << endl;
    }
    else
    { 
        cout << endl << "The last two integers only appear once. Darn." << endl;
    }
    

    display_all(head);
    destroy(head);    

    return 0;
*/
}
