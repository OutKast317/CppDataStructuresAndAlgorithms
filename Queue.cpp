//queue(FIFO)
#include<iostream>
using namespace std;

//we need to build a structure to make a linked list
//each node contains an integer and a pointer
struct node {
int data;
node* next;
};

node *first, *last, *current;

void createList(int);
void traverseList();
void releaseList();

//first ka linked list htl ka first node koh point pay
//last ka linked list htl ka last node koh point pay
//current is used to traverse the linked list.

int main(){
int num;
first = NULL;
last = NULL;
current = NULL;
cout<<"Enter a number: ";
cin>>num;
while (num != 0){
    createList(num);
    cout<<"Enter a number: ";//program will only ends when u enter 0
    cin>>num;
}
traverseList();
releaseList();
return 0;
}

void createList(int num){
current = new node;
current -> data = num;
current -> next = NULL;//next pointer is for new node
//linked list ka empty(Null) phyit yin first will be set to new node
if (first == NULL)
    first = current;
//or it will set to the end of linked list(last)
//therefore current becomes last
else
    last -> next = current;
    last = current;
}

//current koh first a phyit set lok chinn
//to start at the beginning of the linked list
//and also display
void traverseList(){
current = first;
while (current != NULL)
{
    cout << current -> data <<endl;
    current = current -> next; // moves to the next node
}
}
//current yae memory koh delete chinn
void releaseList(){
while (first != NULL){
    current = first;
    first = first -> next;
    //cout<< current;pointer address thi chin yin comment delete lik
    delete current;
}
}

//uses dynamic memory for nodes
