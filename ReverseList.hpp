#pragma once

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:

    void addHead(const int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
    
    LinkedList reverseList() const {
        
        LinkedList list;
        
        Node* temp = head;
        int count = 0;
        
        //if list is empty
        if(this->head == nullptr){
            return *this;
        }
        //if list contains only 1 node
        if(this->head->next == nullptr){
            return *this;
        }    

        //get count of number of nodes
        while(temp != nullptr){
            count++;
            temp = temp->next;
        }
        
        //set temp to beginning of original linked list
        temp = head;

        //starting from count number of times to decrementing to one, adds a head to list
        for(int i = count; i > 0; i--){
            //iterates through list i number of times
            for(int j = 0; j < i; j++){
                temp = temp->next;
            }
            //adds ith node to new list
            list.addHead(temp->data);
            //resets iterator to first node
            temp = head;
        }

        return list;

    }

    Node* head = nullptr;
};
