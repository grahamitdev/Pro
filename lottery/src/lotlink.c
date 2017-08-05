/*
* Copyright(c)Ziyi.Gao
* 文 件 名：lotlink.c
* 描    述：实现操作链表的函数，对外提供：文件读取保存、后插节点、返回前驱节点、删除节点、释放所有节点、链表排序
* 作    者：Ziyi.Gao
* 创建日期：2017-8-5
* 完成日期：
* 当前版本：1.0
*/
#include "lotlink.h"
#include <stdio.h>
#include <stdlib.h>

/*
* #include "lotlink.h"
* 声 明：
* 功 能：
* 接 收：
* 返 回：
*/
void load_data(void)
{	
	printf("加载成功\n");
}

/*
* #include "lotlink.h"
* 声 明：
* 功 能：保存整条链表节点数据域到文件中
* 接 收：
* 返 回：int(1:保存成功 0:保存失败)
*/
void save_data(void)
{
	printf("保存完毕\n");		
}
#if 0
/*
* #include "lotlink.h"
* 声 明：
* 功 能：创建新节点
* 接 收：
* 返 回：
*/
BuyerLink *create_node(Buyer buyer)
{
	BuyerLink *newNode = (BuyerLink *)calloc(1,sizeof(BuyerLink));
	newNode -> data = buyer.data;
	newNode -> next = NULL;
	return newNode;
}

/*
* #include "lotlink.h"
* 声 明：
* 功 能：节点后插
* 接 收：
* 返 回：
*/
void insert_after(BuyerLink *head,Buyer buyer)
{
	if(NULL == head)
	{
		printf("头节点为空！\n");
		return;
	}
	BuyerLink *newNode = create_node(buyer);
	while(NULL == head)
	{
		head = head -> next;
	}
	head -> next = newNode;
}

/*
* #include "lotlink.h"
* 声 明：
* 功 能：返回目标节点的前驱节点,自动区分定位条件
* 接 收：
* 返 回：
*/
Buyer *select_front_node(BuyerLink *head)
{
	if(NULL == head)
	{
		printf("头节点为空\n");
		return;
	}
	BuyerLink *pre = head;
	head = head -> next;
	while(NULL != head)
	{
		//
		return pre;
	}
	return NULL;	
}

/*
* #include "lotlink.h"
* 声 明：
* 功 能：从链表中删除***的节点
* 接 收：
* 返 回：int（1:删除成功 0:删除失败）
*/
void delete_node(BuyLink *head)
{
	if(NULL == head)
	{
		printf("头节点为空\n");
		return;
	}
	BuyLink *pre = select_front_node(head);
	if(NULL == pre)
	{
		printf("不存在\n");
		return;
	}
	BuyerLink *del = pre -> next;
	pre -> next = del -> next;
	free(del);
	del = NULL;
	printf("删除成功\n");
}

/*
* #include "lotlink.h"
* 声 明：
* 功 能：释放链表中所有节点空间
* 接 收：头指针
* 返 回：int (1:释放完毕 0:释放失败)
*/
void free_all_node(BuyerLink *head)
{
	if(NULL == head)
	{
		printf("头节点为空\n");
		return;
	}
	while(NULL != head)
	{
		pre = head -> next;
		free(head);
		head = pre;
	}
}

/*
* #include "lotlink.h"
* 声 明：
* 功 能：根据**对链表中的数据域进行排序
* 接 收：头指针
* 返 回：int (1:排序成功 0:排序失败)
*/
void sort_node(BuyerLink *head)
{
	if(NULL == head)
	{
		printf("头节点为空\n");
	}
	int length = 0;
	int i = 0,j = 0;
	BuyerLink *save = head;
	head = head -> next;
	while(NULL != head)
	{
		++length;
		head = head -> next;
	}
	for(i = 0;i < length - 1;++i)
	{
		head = head -> next;
		for(j = 0;j < length - 1 - i;++j)
		{
			//排序条件
			head = head -> next;
		}
	}
	printf("排序成功,请前往查看\n");
}
#endif