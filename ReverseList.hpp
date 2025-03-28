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
        //int count = 0;
        
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
            //count++;
            list.addHead(temp->data);
            temp = temp->next;
        }
        
        // ========== WORKS =========== //
        //set temp to beginning of original linked list
        //temp = head;

        
        
        // for(int i = 0; i < count; i++){
        //     //iterates through list i number of times (iterates 9 times, then 8)
        //     for(int j = count - i; j > 0; j--){
        //         temp = temp->next;
        //     }
        //     //adds ith node to new list
            

        // }

        return list;

    }

    Node* head = nullptr;
};
