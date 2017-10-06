class CContainer
{
	class CNode
	{
	private:
		CNode*m_pNext;
		CNode*m_pPrev;
		void*m_Elem;

	public:
		CNode();
		~CNode();
	};

private:
	CNode* m_pHead;
	CNode* m_pTail;
	int m_nodeCard;

public:
	CContainer();
	~CContainer();

	bool AddElem(void* pElem);
};