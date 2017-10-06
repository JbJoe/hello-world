#include "appli.h"

using namespace std;

int main(int argc, char*argv[])
{
	cout << "-------ENTER APP--------" << endl;

	CContainer* pCont;

	pCont = new CContainer;

	CElem Elem(1, 256);

	Elem.Print;



	delete pCont;

	cout << "-------EXIT APP--------" << endl;
	return EXIT_SUCCESS;
}