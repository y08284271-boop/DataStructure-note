#include <iostream>
#include <cstdlib> 

using namespace std;


struct ListNode{
	int val;
	struct ListNode* next;
}; 


// //迭代法
// struct ListNode* reverseList(struct ListNode* head ) {
// 	struct ListNode* prev=NULL;
// 	struct ListNode* curr=head;
// 	while(curr){
// 		struct ListNode* next=curr->next;
// 		curr->next=prev;
// 		prev=curr;
// 		curr=next;
// 	}
// 	return prev;
// }


//递归法
struct ListNode* reverseList(struct ListNode*head){
	if(head==NULL||head->next==NULL){
		return head;
	}
	struct ListNode* ret=reverseList(head->next);
	head->next->next=head;
	head->next=NULL;
	return ret;
	
}

//创建链表
struct ListNode* createList() {
	int value;
	struct ListNode* head=NULL;
	struct ListNode* tail=NULL;
	
	
	while(cin>>value&&value!=-1){
		struct ListNode*newNode=(struct ListNode*)malloc(sizeof(struct ListNode));
		newNode->val=value;
		newNode->next=NULL;
		if(head==NULL){
			head=newNode;
			tail=newNode;
		
		}else{
		tail->next=newNode;
		tail=newNode;
		}
	}
	return head;
}

void printList(struct ListNode* head){
	struct ListNode* curr=head;
	while(curr){
		cout<<curr->val<<" ";
		curr=curr->next;
	}
	cout<<endl;
}

int main() {
	struct ListNode* head=createList();
	printList(head);
	head = reverseList(head);
	printList(head);
	return 0;
}
