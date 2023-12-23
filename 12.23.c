#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

void Listinsert(struct ListNode* head, int index, int val)
{
    int a = 0;
    struct ListNode* p = (struct ListNode*)malloc(sizeof(struct ListNode*));
    while (head->next)
    {
        if (index == 0)
        {
            ;
        }
        if (a == index)
        {
            p->val = head->val;
            p->next = head->next;
            head->next = p;
            head->val = val;
            return;
        }
        a++;
        head = head->next;
    }
}
int main()
{
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode*));
    head->next = NULL;
    struct ListNode* li = head;
    head->val = 0;
    for (int a = 1; a < 9; a++)
    {
        if (a == 1)
        {
            struct ListNode* p = (struct ListNode*)malloc(sizeof(struct ListNode*));
            p->val = head->val;
            head->val = a;
            head->next = p;
            p->next = NULL;
        }
        else
        {
            struct ListNode* p = (struct ListNode*)malloc(sizeof(struct ListNode*));
            p->next = head->next;
            p->val = head->val;
            head->val = a;
            head->next = p;
        }
    }
    Listinsert(head,1,1);
    for (int a = 0; a < 10; a++)
    {
        printf("%d ", head->val);
        head = head->next;
    }
    return 0;
}
//int getValue(struct ListNode* head, int index);
//
//int addAtIndex(struct ListNode* head, int index, int val);
//
//int deleteAtIndex(struct ListNode* head, int index);
//
//void reverseList(struct ListNode* head);
//
//void reverseIndex(struct ListNode* head, int left, int right);
//
//void printList(struct ListNode* head);
//
//void freeList(struct ListNode* head);
//int getValue(struct ListNode* head, int index)
//{
//    int a = 0;
//    while (head->next)
//    {
//        if (a == index)
//        {
//			return head->val;
//        }
//        a++;
//        head = head->next;
//    }
//	return 0;
//}
//int addAtIndex(struct ListNode* head, int index, int val)
//{
//    int a = 0;
//    struct ListNode* p = (struct ListNode*)malloc(sizeof(struct ListNode*));
//	if (index == 0)
//	{
//		p->val = head->val;
//		head->val = val;
//		if (head->next)
//		{
//			p->next = head->next;
//		}
//		else
//			p->next = NULL;
//		head->next = p;
//		return 1;
//	}
//    while (head->next)
//    {
//        if (a == index)
//        {
//            p->val = head->val;
//            head->val = val;
//            p->next = head->next;
//            head->next = p;
//            return 1;
//        }
//        a++;
//        head = head->next;
//    }
//    if (a == index)
//    {
//        p->val = head->val;
//        head->val = val;
//        head->next = p;
//        return 1;
//    }
//    else {
//        return 0;
//    }
//}
//void printList(struct ListNode* head)
//{
//	while (head->next)
//	{
//		printf("%d -> ",head->val);
//		head = head->next;
//	}
//	printf(" null", head->val);
//
//}
//void freeList(struct ListNode* head)
//{
//	;
//}
//int main() {
//	//head指向的节点为头节点，不包含数据信息，不计入链表下标 
//	//head->next指向链表的第一个节点，该节点的下标为0 
//	struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
//	head->next = NULL;
//
//	int n;
//	scanf("%d", &n);
//
//	while (n--) {
//		char s[20];
//		scanf("%s", s);
//
//
//		if (strcmp(s, "getValue") == 0) {
//			int index;
//			scanf("%d", &index);
//
//			int res = getValue(head, index);
//			if (res == 0) {
//				printf("getValue: fail\n");
//			}
//			else {
//				printf("getValue: get %d\n", res);
//			}
//		}
//		else if (strcmp(s, "addAtIndex") == 0) {
//			int index, val;
//			scanf("%d%d", &index, &val);
//
//			int res = addAtIndex(head, index, val);
//			if (res == 1) {
//				printf("addAtIndex: add %d at %d\n", val, index);
//			}
//			else {
//				printf("addAtIndex: fail\n");
//			}
//		}
//		//else if (strcmp(s, "deleteAtIndex") == 0) {
//		//	int index;
//		//	scanf("%d", &index);
//
//		//	int res = deleteAtIndex(head, index);
//		//	if (res == 0) {
//		//		printf("deleteAtIndex: fail\n");
//		//	}
//		//	else {
//		//		printf("deletaAtIndex: delete %d at %d\n", res, index);
//		//	}
//		//}
//		//else if (strcmp(s, "reverseList") == 0) {
//		//	reverseList(head);
//		//	printList(head->next);
//		//}
//		//else if (strcmp(s, "reverseIndex") == 0) {
//		//	int left, right;
//		//	scanf("%d%d", &left, &right);
//
//		//	reverseIndex(head, left, right);
//		//	printList(head->next);
//		//}
//	}
//
//	printf("\n");
//	printList(head->next);
//
//	freeList(head->next);
//	head->next = NULL;
//	free(head);
//
//	return 0;
//}