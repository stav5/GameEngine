#pragma once

#include <Node.h>
#include <stdio.h>


template <class NodeDataType>
class LinkedList
{

typedef Node<NodeDataType> node;

private:
	
	node* pHead = NULL;
	node* pTail = NULL;

public:
	
	~LinkedList()
	{
		if(pTail != NULL)
		{
			while(pTail->GetPrev())
			{
				Pop();
				printf("test");
			}
			
			Pop();
		}
	}

	void Add(NodeDataType* pNodeTypeData)
	{
		if(pHead)
		{
			pTail->SetNext(new node(pNodeTypeData));
			pTail->GetNext()->SetPrev(pTail);
			pTail = pTail->GetNext();
		}
		else
		{
			printf("phead not initialized yet\n");
			pHead = new node(pNodeTypeData);
			pTail = pHead;		
		}				
	}

	void Pop()
	{
		printf("POP\n");

		if(pTail == NULL || pHead == NULL)
			return;

		if(pTail->GetPrev() == NULL)
		{
			delete pTail;
			pTail = NULL;
			pHead = NULL;
			return;
		}
		
		pTail = pTail->GetPrev();
		delete pTail->GetNext();
		//pTail->SetNext(NULL);
	}

	void Insert(int index);
	void Remove(int index);

	NodeDataType* Get(int index)
	{
		node* pNode = pHead;

		for(int i = 0; i < index; i++)
		{
			if(pNode->GetNext() != NULL)
				pNode = pNode->GetNext();
		}

		return pNode->GetData();
	}
};
