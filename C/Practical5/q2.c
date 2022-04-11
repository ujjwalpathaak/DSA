#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node *node;

void printLL(node head)
{
    node temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
// reverse
node reverse(node list1node1, node list2node1)
{
    node dummynode = (node)malloc(sizeof(node));
    node ptr1 = list1node1;
    node ptr2 = list2node1;
    node ptr3 = dummynode;
    
    while (ptr1 != NULL || ptr2 != NULL)
    {
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;

        ptr3->next = ptr2;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;       
    }
    return dummynode->next;
}

node common(node list1node1, node list2node2)
{
    node ptr1 = list1node1;
    node ptr2 = list2node2;
   
    while (ptr1 != NULL)
    {
        if(ptr1->data == ptr2->data)
        {
            printf("%d ", ptr1->data);

            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        else
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        
    }
    printf("\n");
    return list1node1;
}
int main()
{

    node list1node1 = (node)malloc(sizeof(node));
    node list1node2 = (node)malloc(sizeof(node));
    node list1node3 = (node)malloc(sizeof(node));
    node list1node4 = (node)malloc(sizeof(node));
    node list1node5 = (node)malloc(sizeof(node));
    node list1node6 = (node)malloc(sizeof(node));

    list1node1->data = 1;
    list1node2->data = 2;
    list1node3->data = 3;
    list1node4->data = 4;
    list1node5->data = 5;
    list1node6->data = 6;

    list1node1->next = list1node2;
    list1node2->next = list1node3;
    list1node3->next = list1node4;
    list1node4->next = list1node5;
    list1node5->next = list1node6;
    list1node6->next = NULL;

    node list2node1 = (node)malloc(sizeof(node));
    node list2node2 = (node)malloc(sizeof(node));
    node list2node3 = (node)malloc(sizeof(node));
    node list2node4 = (node)malloc(sizeof(node));
    node list2node5 = (node)malloc(sizeof(node));
    node list2node6 = (node)malloc(sizeof(node));

    list2node1->data = 7;
    list2node2->data = 8;
    list2node3->data = 9;
    list2node4->data = 10;
    list2node5->data = 11;
    list2node6->data = 12;

    list2node1->next = list2node2;
    list2node2->next = list2node3;
    list2node3->next = list2node4;
    list2node4->next = list2node5;
    list2node5->next = list2node6;
    list2node6->next = NULL;

    printf("A: ");
    printLL(list1node1);

    printf("B: ");
    printLL(list2node1);

    list1node1 = reverse(list1node1, list2node1);

     printLL(list1node1);

  /*   list1node1 = common(list1node1, list2node1);
    printLL(list2node1); */
    return 0;
}