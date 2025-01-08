/*Write a program to Create a linked list which
continuously stores the user input data
into dynamic memory as First In First Out structure
until the input data ‘0’. Create the two functions.
The first one create a function that take a number
with int type and store this number into a new node
as a structure of type node. The second one is to display
data of Linked List.*/

#include<iostream>
using namespace std;
struct node {
int data;
node* next;
};

node *first, *last;

void storeInput(int);
void displayList();

int main(){
int a;
first = NULL;
last = NULL;
cout << "Enter a number: ";
cin >> a;
while (a != 0){
    storeInput(a);
    cout << "Enter a number: ";
    cin >> a;
}
displayList();
return 0;
}

void storeInput(int a){
    node* newNode = new node; //memory mhr tin poh new node build
    newNode -> data = a; //a koh data(a member of new node) mhr assign lok
    newNode -> next = NULL; // new pointer koh NULL a phyit set lok
    if (first == NULL) //linked list ka NULL phyit yin first will be set to new node
        {
        first = newNode;
        }
    else {
        last -> next = newNode;
        }
        last = newNode;
}

void displayList(){
node *current = first; // current becomes the first input of linked list
while (current != NULL){
    cout<< current -> data << endl;
    current = current -> next;
}
}
