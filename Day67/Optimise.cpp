#include <bits/stdc++.h>
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


Node* sortedMerge(Node* head1, Node* head2) {
    if (head1 == nullptr) return head2;
    if (head2 == nullptr) return head1;

    if (head1->data <= head2->data) {
        head1->next = sortedMerge(head1->next, head2);
        return head1;
    } else {
        head2->next = sortedMerge(head1, head2->next);
        return head2;
    }
}


void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() 
{
    int n1, n2, val;
    
    // Creating first linked list
    cout << "Enter the number of elements in first sorted linked list: ";
    cin >> n1;
    Node* head1 = nullptr, *temp = nullptr;
    
    if (n1 > 0) 
    {
        cout << "Enter value for node 1: ";
        cin >> val;
        head1 = new Node(val);
        temp = head1;
        for (int i = 2; i <= n1; i++) {
            cout << "Enter value for node " << i << ": ";
            cin >> val;
            temp->next = new Node(val);
            temp = temp->next;
        }
    }

    // Creating second linked list
    cout << "Enter the number of elements in second sorted linked list: ";
    cin >> n2;
    Node* head2 = nullptr;
    
    if (n2 > 0) {
        cout << "Enter value for node 1: ";
        cin >> val;
        head2 = new Node(val);
        temp = head2;
        for (int i = 2; i <= n2; i++) {
            cout << "Enter value for node " << i << ": ";
            cin >> val;
            temp->next = new Node(val);
            temp = temp->next;
        }
    }

    cout << "List 1: ";
    printList(head1);

    cout << "List 2: ";
    printList(head2);

    // Merging the two sorted lists
    Node* mergedHead = sortedMerge(head1, head2);

    cout << "Merged List: ";
    printList(mergedHead);

    return 0;
}
