#include <iostream>

using namespace std;
// config struct data Double-linked-list

struct DataNode {
    int DataNode;
};

struct node {
    node *previous; //
    node *next;//
    DataNode value;
    node(DataNode v) {
        previous = NULL;
        next = NULL;
        value = v;
    }
};

struct DoubleSinglyLinkedList {
    node *head;
    node *tail; 
    int countNode; 

    DoubleSinglyLinkedList() {
        head = NULL;
        tail = NULL;
        countNode = 0;
    }

    bool isNull () {
        return ( countNode == 0 || head == NULL);
    }

    int lengthStruct () {
        return countNode;
    }

    void  makeDataStruct(node *Pnode) { // tạo mới cấu trúc với 1 node trong struct 
        if (Pnode == NULL) 
            exit(0);
        head = Pnode;
        Pnode->previous = NULL;
        Pnode->next = NULL;
        countNode++;
    }
// add node in first struct
    void addFirst (node *pNode) {
        if (pNode == NULL) {
            makeDataStruct(pNode);
            countNode++;
        } 

        head->previous = pNode;
        pNode->next = head;
        head = pNode;
        pNode->previous = NULL;
        countNode++;
    }

    void addLassNode(node *pNodeAddLas) {
        if (head == NULL) {
            head = pNodeAddLas;
            tail = pNodeAddLas;
            countNode++;
            return;
        }

        tail->next = pNodeAddLas;
        pNodeAddLas->previous = tail;
        tail = pNodeAddLas;
        countNode++;
    }

    // delete 
        // del node first
    void delNodeFirst() {
        if(head == NULL) {
            return;
        }

        head->next = NULL;
        head = head->next;
        node *delPre = head->previous;
        head->previous = NULL;
        delete delPre;
        countNode--;
    }
    
        // del node last
    void delNodeLast() {
        if (head == NULL) {
            return;
        }
        node *del = tail;
        tail = tail->previous;
        tail->next = NULL;
        delete del;
        countNode--;

    }

    void display () {
        node * current = head;
        while( current != NULL ) {
            cout << "value: " << current->value.DataNode;
            current= current->next;
        }
    }

};