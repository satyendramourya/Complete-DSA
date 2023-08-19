#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free " << value << endl;
    }
};

// printing linked List.
void printLinkedList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Insertions in linkedList.
void addNodeAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void addNodeAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtGivenPos(Node *&tail, Node *&head, int data, int pos)
{

    if (pos == 1)
    {
        addNodeAtHead(head, data);
        return;
    }

    Node *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        addNodeAtTail(tail, data);
        return;
    }

    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

// Deletions in linkedlist
void deleteNode(int pos, Node *&head)
{
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free start node
        temp->next = NULL;
        delete temp;
        return;
    }
    else
    {
        // delet any middle node or last node;
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void deleteNodeByVal(Node *&head, int val)
{
    int count = 1;
    if (count == 1 && head->data == val)
    {
        Node *temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;
        return;
    }

    Node *curr = head;
    Node *prev = NULL;
    while (curr->data != val)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

int main()
{
    Node *head = new Node(10);
    Node *tail = head;

    addNodeAtHead(head, 5);
    addNodeAtHead(head, 8);

    addNodeAtTail(tail, 20);

    insertAtGivenPos(tail, head, 15, 3);
    insertAtGivenPos(tail, head, 4, 1);

    insertAtGivenPos(tail, head, 100, 7);
    printLinkedList(head);

    // deleteNode(1, head);
    // deleteNode(6, head);

    // deleteNodeByVal(head, 10);
    // printLinkedList(head);
    // deleteNodeByVal(head, 100);
    // printLinkedList(head);
    deleteNodeByVal(head, 4);

    printLinkedList(head);

    cout << head->data << " " << tail->data << endl;

    return 0;
}