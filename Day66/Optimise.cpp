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

Node* rotate(Node* head, int k)
{
    if(k ==0 || head == nullptr)
    {
        return head;
    }
    Node *curr = head;
    int len = 1;
    
    while(curr->next != nullptr)
    {
        curr = curr->next;
        len += 1;
    }
    
    k %= len;
    
    if(k == 0)
    {
        return head;
    }
    curr->next = head;
    curr = head;
    for(int i = 1; i<k; i++)
    {
        curr = curr->next;
    }
    head = curr->next;
    curr->next = nullptr;
    return head;
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

    int k;
    cin >> k;

    head = rotate(head,k);

    cout << "Reversed list: ";
    display(head);

    return 0;
}