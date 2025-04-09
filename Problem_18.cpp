#include<iostream>
#include<string>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

Node* takeInput() {
    Node* head = nullptr;
    Node* tail = nullptr;
    int val;
    cout << "Enter elements (-1 to end): ";
    while (cin >> val && val != -1) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        }
         else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

Node* addTwoNumber(Node* head1, Node* head2) {
    // Node* temp = head1;
    // string s1 = "", s2 = "";
    // while(temp != nullptr){
    //     s1 += (temp->data + '0');
    //     temp = temp->next;
    // }
    // Node* temp2 = head2;
    // while(temp2 != nullptr){
    //     s2 += (temp2->data + '0');
    //     temp2 = temp2->next;
    // }

    // string r1 = "", r2 = "";
    // int i = s1.length() - 1;
    // int j = s2.length() - 1;
    
    // while(i >= 0){
    //     r1 += s1[i--];
    // }
    // while(j >= 0){
    //     r2 += s2[j--];
    // }
    

    // long long n1 = stoi(r1);
    // long long n2 = stoi(r2);
    // cout << "Reversed r1 is : " << n1  << endl;
    // cout << "Reversed r2 is : " << n2 << endl;

    // long long newNum = n1 + n2;
    // string final = to_string(newNum);

    // Node* newhead = new Node(final.back() - '0');
    // Node* current = newhead;

    // int k = final.length() - 2;
    // while(k >= 0){
    //     current->next = new Node(final[k] - '0');
    //     current = current->next;
    //     --k;
    // }
    // return newhead;


    // 2nd Approch(Optimal)
    Node* dummy = new Node(0);
    Node* current = dummy;
    int sum = 0, carry = 0;
    while(head1 || head2 || carry != 0){
        sum = carry;
        if(head1){
            sum += head1->data;
            head1 = head1->next;
        }
        if(head2){
            sum += head2->data;
            head2 = head2->next;
        }
        carry = sum / 10;
        sum = sum % 10;
        current->next = new Node(sum);
        current = current->next;
    }
    Node* result = dummy->next;
    return result;

}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    cout << "Enter first linked list:\n";
    Node* head1 = takeInput();

    cout << "Enter second linked list:\n";
    Node* head2 = takeInput();

    Node* result = addTwoNumber(head1, head2);

    cout << "Resultant linked list:\n";
    printList(result);

    return 0;
}
