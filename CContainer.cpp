#include "CContainer.h"


//M�thodes de CNode
CContainer::CNode::CNode() :
	m_pNext(nullptr),
	m_pPrev(nullptr),
	m_Elem(nullptr)
{
	//Rien � faire
}

CContainer::CNode::~CNode()
{
}




//M�thodes de CContainer
CContainer::CContainer() :
	m_pHead(nullptr),
	m_pTail(nullptr),
	m_nodeCard(0)
{
}

CContainer::~CContainer()
{
}

bool CContainer::AddElem(void * pElem)
{

	return false;
}
