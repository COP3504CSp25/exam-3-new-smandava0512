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

    int* getStats() const{
        int* results = new int[3];

        //min
        results[0] = 0;
        //max
        results[1] = 0;
        //mean
        results[2] = 0;

        if(head == nullptr){
            return &results[0];
        }

        int min = head->data;
        int max = 0;
        int count = 0;
        int sum = 0;

        Node *temp = head;

        while(temp != nullptr){

            if(temp->data > max){
                max = temp->data;
            }
            if(temp->data < min){
                min = temp->data;
            }
            count++;
            sum += temp->data;
            
            temp = temp->next;
        }

        //min
        results[0] = min;
        results[1] = max;
        results[2] = sum/count;

        return &results[0];       

    }
    

private:
    Node* head = nullptr;
};
