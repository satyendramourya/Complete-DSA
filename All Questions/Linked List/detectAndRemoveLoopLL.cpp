#include <iostream>
#include <map>

using namespace std;

//    1 --> 2 --> 3 --> 4 --> 5
//                      |     |
//                      |     |
//                      7 --> 6

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

// approach with map -------------------- TC - O(n),   SC-O(n)
bool detectLoop(Node *head)
{
    if (head == NULL)
        return false;

    map<Node *, bool> visited;

    Node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

// 2 Floydi's Cycle detection algorithm.
// slow --> 1 steps,
// fast --> 2 steps.

// detect the cycle;
Node *floydDetectLoop(Node *head)
{

    // linked list is empty;
    if (head == NULL)
    {
        return NULL;
    }

    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (fast == slow)
            return slow;
    }
    return NULL;
}

// detect the cycle beginning Node;
Node *brginNode(Node *head)
{
    Node *fast = floydDetectLoop(head);
    Node *slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

// removing the cycle;
void removeCycle(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    Node *startOfLoop = brginNode(head);
    Node *temp = startOfLoop;

    while (temp->next != temp)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}