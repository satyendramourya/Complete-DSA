#include <iostream>
#include <map>

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

Node *kReverse(Node *head, int k)
{
    // base case
    if (head == NULL)
    {
        return NULL;
    }

    // step 1 : reverse first k Nodes;
    Node *next = NULL;
    Node *prev = NULL;
    Node *curr = head;
    int count = 0;

    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;

        count++;
    }

    // step 2: recursion sb smbhallega;
    if (head != NULL)
    {
        head->next = kReverse(next, k);
    }

    // step 3: return head of reversed list;
    return prev;
}