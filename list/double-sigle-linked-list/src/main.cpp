#include "../header/header.h"

int main() {
    DoubleSinglyLinkedList test ;
    // make node test
    DataNode dataNode1;
    DataNode dataNode2;
    
    dataNode1.DataNode = 1;
    dataNode2.DataNode = 2;

     //----------
    node * node1 = new node( dataNode1);
    node *node2 = new node( dataNode2);

    test.makeDataStruct(node1);
    test.addFirst(node2);
    test.display();
    return 0;
}