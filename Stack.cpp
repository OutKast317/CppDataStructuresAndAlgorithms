//Stack (LIFO)
//LIFO means nout sone mha input tae number ka first koh yout p a yin display myee

#include<iostream>
using namespace std;
//build a structure for node
struct node {
int data;
node* next;
};

node *first, *last;
//first points to the last added input/node
//last points to the first added input/node
void createList(int);
void traverseList();

int main(){
int a;
first = NULL;
last = NULL;
cout << "Enter a number: ";
cin >> a;
while (a != 0){
    createList(a);
    cout << "Enter a number: ";
    cin >> a;
    }
traverseList();
return 0;
}

void createList(int a){
last = new node;
last -> data = a;
last -> next = first; //last koh first phyit ag lok tae process
//sets next pointer of new node to first
first = last;//therefore last will become the first to appear
}

//display
void traverseList(){
last = first;//first will become the last to appear
while (last != NULL ){
    cout<< last -> data << endl;
    last = last -> next;
}
}
