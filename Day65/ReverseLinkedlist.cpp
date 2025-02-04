#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int new_data)
    {
        data = new_data;
        next = nullptr;
    }
};

Node *reverse(Node *head)
{
     Node *curr = head, *prev = nullptr, *next = nullptr;
    while(curr != nullptr)
    {
        next = curr-> next;
        
        curr->next = prev;
        
        prev = curr;
        curr = next;
    }
    return prev;
}

void display(Node *head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    int n, value;
    cout << "Enter the number of elements: ";
    cin >> n;

    Node *head = nullptr, *tail = nullptr;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        Node *newNode = new Node(value);
        if (!head)
            head = tail = newNode;
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout << "Original list: ";
    display(head);

    head = reverse(head);

    cout << "Reversed list: ";
    display(head);

    return 0;
}