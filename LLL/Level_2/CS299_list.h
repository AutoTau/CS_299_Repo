//list.h
#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;


//The data structure is a linear linked list of integers
struct node
{
    int data;
    node * next;
};

//These functions are already written and used by main
void build(node * & head);      //supplied
void display_all(node * head);  //supplied
void destroy(node * &head);     //supplied


/* *****************YOUR TURN! ******************************** */
/* PLACE YOUR PROTOTYPE HERE */


//Checks if the requested data is a linear linked list
bool find(node * head, int match);

//Displays every other node in the list, starting at the first entry.
int display_every_other(node * head);

//Calculates the average of the numbers in the list, recurisivly.
int getAverage(node * head, int num, int numofNum);

//returns and displays the average of all entries in the list.
int returnAverage(int num, int numofNum);

