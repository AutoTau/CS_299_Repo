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

//int displayNoMatch(node *  &head);
//int largerThanLast(node * &head);
//bool find_last_two(node * &head);
int mydisplay_all(node * head);
int retSum(node * head);
bool findLastTwo(node * head);
