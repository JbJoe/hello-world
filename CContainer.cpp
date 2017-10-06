#include "CContainer.h"


//Méthodes de CNode
CContainer::CNode::CNode() :
	m_pNext(nullptr),
	m_pPrev(nullptr),
	m_Elem(nullptr)
{
	//Rien à faire
}

CContainer::CNode::~CNode()
{
}




//Méthodes de CContainer
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
