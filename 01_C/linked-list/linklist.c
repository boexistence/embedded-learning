#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct LinkNode{//定义链表
    int data;
    struct LinkNode *next;
};

/*
显示链表中所有节点号和节点数据
*/
void DisplayNode(struct LinkNode *head){
    struct LinkNode *pCurrent=head;
    int i=1;
    while(pCurrent!=NULL){
        printf("第%d个节点数据是%d\n",i,pCurrent->data);
        i++;
        pCurrent=pCurrent->next;
    }
}

/*
新建一个节点并将其添加至链表末尾，返回添加节点后的链表的头指针
使用该函数后记得使用DeleteMentory函数释放内存
*/
struct LinkNode *AppendNode(struct LinkNode *head){
    struct LinkNode *p=NULL,*pr=head;
    p=(struct LinkNode *)malloc(sizeof(struct LinkNode));
    if(p==NULL){
        printf("没有足够的内存分配!\n");
    }
    if(head==NULL){
        head=p;
    }
    else{
        while(pr->next!=NULL){
            pr=pr->next;
        }
        pr->next=p;
    }
    int data;
    printf("请输入你的数据:\n");
    scanf("%d",&data);
    p->data=data;
    p->next=NULL;
    return head;
}

/*
释放链表中所有节点占用的内存
*/
void DeleteMentory(struct LinkNode *head){
    struct LinkNode *p=head,*pr=NULL;
    while(p!=NULL){
        pr=p;
        p=p->next;
        free(pr);
    }
}

/*
从head指向的链表中删除一个节点，返回删除节点后的链表的头指针
*/
struct LinkNode *DeleteNode(struct LinkNode *head,int nodeData){
    struct LinkNode *p=head,*pr=NULL;
    if(head==NULL){
        printf("这个链表是空的！");
        return head;
    }
    while(p->data!=nodeData&&p->next!=NULL){
        pr=p;
        p=p->next;
    }
    if(p->data==nodeData){
        if(p==head){
            head=p->next;
        }
        else{
            pr->next=p->next;
        }
        free(p);
    }
    else{
        printf("这个数据没有找到！");
    }
    return head;
}

/*
在以升序排序的链表中插入一个节点，返回插入节点后的链表头指针
*/
struct LinkNode *InsertNode(struct LinkNode *head,int nodeData){
    struct LinkNode *pr=head,*p=head,*temp=NULL;
    p=(struct LinkNode *)malloc(sizeof(struct LinkNode));
    if(p==NULL){
        printf("内存不够！");
        exit(0);
    }
    p->next=NULL;
    p->data=nodeData;
    if(head==NULL){
        head=p;
    }
    else{
        while(pr->data<nodeData&&pr->next!=NULL){
            temp=pr;
            pr=pr->next;
        }  
        if(pr->data>=nodeData){
            if(pr==head){
                p->next=head;
                head=p;
            }
            else{
                p->next=pr;
                temp->next=p;  
            }
        }
        else{
            pr->next=p;
        }
    }
    return head;
}