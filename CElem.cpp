#include "CElem.h"
#include <iostream>
using namespace std;

CElem::CElem() :
	m_nID(0),
	m_nStatus(0)
{
}

CElem::CElem(int nID, int nStatus) :
	m_nID(nID),
	m_nStatus(nStatus)
{

}

CElem::~CElem()
{
}

void CElem::Print()
{
	cout << "ID : "<< m_nID  << endl;
	cout << "Status : " << m_nStatus << endl;
}
