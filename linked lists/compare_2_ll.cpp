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

// Complete the compare_lists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
SinglyLinkedListNode*temp1=head1;
SinglyLinkedListNode*temp2=head2;
int flag=1;
int c1=0,c2=0;
if((head1==NULL && head2!=NULL)|| (head1!=NULL && head2==NULL))
return false;
else  if(head1==NULL && head2==NULL)
return true;
while(temp1!=NULL)
{
    temp1=temp1->next;
    c1++;
}
while(temp2!=NULL)
{
    temp2=temp2->next;
    c2++;
}
temp1=head1;
temp2=head2;
if(c1!=c2)
return false;
while(temp1!=NULL && temp2!=NULL){
    if(temp1->data!=temp2->data)
    return false;
    temp1=temp1->next;
    temp2=temp2->next;
}
return true;

}

int main()
