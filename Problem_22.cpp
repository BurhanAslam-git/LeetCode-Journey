#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        this->data = val;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void insertAtTail(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }

    void printList() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }


};


Node* mergeList(Node* h1, Node* h2){
    Node* newList = new Node(0);
    Node* newTemp = newList;
    Node* t1 = h1;
    Node* t2 = h2;
    while(t1 != nullptr && t2 != nullptr){
        if(t1->data == t2->data){
            newTemp->next = new Node(t1->data);
            newTemp = newTemp->next;
            t1 = t1->next;
           
            newTemp->next = new Node(t2->data);
            newTemp = newTemp->next;
            t2 = t2->next;
      
        }
        else if(t1->data < t2->data){
                newTemp->next = new Node(t1->data);
                t1 = t1->next;
                newTemp = newTemp->next;
            }
        else{
            newTemp->next = new Node(t2->data);
            t2 = t2->next;
            newTemp = newTemp->next;
        }

    }



    // Remaing elements for the list 1.
    while (t1) {
        newTemp->next = new Node(t1->data);
        t1 = t1->next;
        newTemp = newTemp->next;
    }
    
    // Remaing elements for the list 2.
    while (t2) {
        newTemp->next = new Node(t2->data);
        t2 = t2->next;
        newTemp = newTemp->next;
    }
    
    newTemp->next = nullptr;
    return newList->next;
}

int main() {
    LinkedList list1, list2;
    int n1, n2, val;

    cout << "Enter number of elements in list 1: ";
    cin >> n1;
    cout << "Enter elements of list 1: " << endl;
    for (int i = 0; i < n1; ++i) {
        cin >> val;
        list1.insertAtTail(val);
    }

    cout << "Enter number of elements in list 2: " << endl;
    cin >> n2;
    cout << "Enter elements of list 2: ";
    for (int i = 0; i < n2; ++i) {
        cin >> val;
        list2.insertAtTail(val);
    }

    cout << "List 1: ";
    list1.printList();

    cout << "List 2: ";
    list2.printList();

    // Now you're all set to call your merge function here!
    Node* newhead = mergeList(list1.head, list2.head);

    Node* temp = newhead;
    while(temp != nullptr){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr " << endl;

    return 0;
}
