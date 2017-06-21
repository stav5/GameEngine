#pragma once


template <class NodeType>
class Node
{
private:

	NodeType* pData = NULL;
	Node<NodeType>* pNext = NULL;
	Node<NodeType>* pPrev = NULL;	

public:
	Node(NodeType* data)
	{
		SetData(data);
	}

	Node()
	{
	}

	~Node()
	{
		if(pData)
			delete pData;
	
		if(pNext)
			delete pNext;
	}
	
	
	void SetData(NodeType* data)
	{
		pData = data;
	}

	void SetNext(Node* pNextNode)
	{
		pNext = pNextNode;
	}

	void SetPrev(Node* pPrevNode)
	{
		pPrev = pPrevNode;
	}	
	
	NodeType* GetData()
	{
		return pData;
	}
	
	Node<NodeType>* GetNext()
	{
		return pNext;
	}

	Node<NodeType>* GetPrev()
	{
		return pPrev;
	}

};
