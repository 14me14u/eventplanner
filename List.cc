#include <iostream>
using namespace std;

#include "List.h"

//Constructor
List::List(){
  head = NULL;
}

//Destructor
List::~List(){
  Node *currNode, *nextNode;

  currNode = head;

  while (currNode != NULL) {
    nextNode = currNode->next;
    delete currNode->data;
    delete currNode;
    currNode = nextNode;
  }

}


//Add event to list
void List::add(Event* e){

  Node *currNode, *prevNode;
  Node* newNode= new Node();
  newNode->data= e;
  newNode->next=0;

  currNode=head;
  prevNode=0;

  while(currNode!=0){
    //Implement less than function to add the new event in the right order
    if(currNode->data->lessThan(newNode->data)==0)
      break;
    prevNode=currNode;
    currNode=currNode->next;
  }

  if(prevNode==0){
    head=newNode;
  }else{
    prevNode->next=newNode;
  }
  newNode->next=currNode;
}

//Get number of events
int List::getSize(){
  int count=0;
  Node* currNode;
  currNode=head;

  while(currNode!=NULL){
    count++;
    currNode=currNode->next;
  }
  return count;
}

//Print the list
void List::print(){
 Node *currNode=head;

  while(currNode!=0){
    Event* e = currNode->data;
    cout << endl;
    e->print();

    currNode=currNode->next;
  }
}
