/*Is Linked List Length Even?

Given a linked list, your task is to complete the function isLengthEven() which contains the head of the linked list, and check whether the length of the linked list is even or not. Return true if it is even, otherwise false.

Examples:

Input: Linked list: 12->52->10->47->95->0
Output: true
Explanation: The length of the linked list is 6 which is even, hence returned true.
Input: Linked list: 9->4->3
Output: false
Explanation: The length of the linked list is 3 which is odd, hence returned false.
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

bool isLengthEven(struct Node **head) {
    struct Node *temp = *head;
    int count = 0;
    
    while (temp != nullptr) {
        temp = temp->next;
        count++;
    }
    
    return (count % 2 == 0);
}

int main() {
    // Creating a linked list: 1 -> 2 -> 3 -> 4
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    
    if (isLengthEven(&head))
        cout << "Even Length" << endl;
    else
        cout << "Odd Length" << endl;

    return 0;
}
