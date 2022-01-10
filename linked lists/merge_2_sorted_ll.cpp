#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
SinglyLinkedListNode*p1=head1;
SinglyLinkedListNode*p2=head2;
SinglyLinkedListNode*dummy=new SinglyLinkedListNode(-1);
SinglyLinkedListNode*p3=dummy;
while(p1!=NULL && p2!=NULL)
{
    if(p1->data<p2->data)
    {
        p3->next=p1;
        p1=p1->next;
    }
    else {
    p3->next=p2;
    p2=p2->next;
    }
    p3=p3->next;
}
while(p1!=NULL)
{
    p3->next=p1;
    p1=p1->next;
    p3=p3->next;
}
while(p2!=NULL)
{
    p3->next=p2;
    p2=p2->next;
    p3=p3->next;
}
return dummy->next;
}

int main()
