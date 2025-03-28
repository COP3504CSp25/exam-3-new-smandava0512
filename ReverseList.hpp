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
        
        //creates list object to be returned
        LinkedList list;
        

        //node pointer temp to iterate
        Node* temp = head;
        //counter variable set to 0
        int count = 0;
        
        // ========== WORKS =========== //
        //if list is empty
        if(this->head == nullptr){
            return *this;
        }
        // ========== WORKS =========== //
        //if list contains only 1 node
        if(this->head->next == nullptr){
            return *this;
        }    

        // ========== WORKS =========== //
        //get count of number of nodes
        while(temp != nullptr){
            count++;
            temp = temp->next;
        }
        
        //set temp to beginning of original linked list
        temp = head;

        //starting from count number of times to decrementing to one, adds a head to list
        for(int i = count; i > 1; i--){
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
