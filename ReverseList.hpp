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
        if(head == nullptr){
            return;
        }
        //if list contains only 1 node
        if(head->next == nullptr){
            return;
        }    
        
        while(temp != nullptr){
            count++;
            temp = temp->next;
        }
        
        temp = head;
        for(int i = count; i > 0; i--){
            for(int j = 0; j < i; j++){
                temp = temp->next;
            }
            list.addHead(temp->data);
        }

        return list;

    }

    Node* head = nullptr;
};
