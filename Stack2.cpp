/*Write a program to create a linked list which continuously
stores the user input data  into dynamic memory as
Last In First Out structure until the input data ‘0’.
Create the two functions.*/

#include<iostream>
using namespace std;

struct node{
int data;
node* next;
};

node* first, *last;

void storeInput(int);
void displayInput();

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
displayInput();
return 0;
}

void storeInput(int a){
last = new node;
last -> data = a;
last -> next = first;
first = last;
}

void displayInput(){
last = first;
while (last != NULL){
    cout << last -> data << ' ';
    last = last -> next;
}
}
