#include <iostream>
#include "Operation.h"
#include "Factory.h"
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	COperation* op = CCalculatorFactory::Create('-');
	op->m_nFirst = a;
	op->m_nSecond = b;
	cout << op->GetResult() << endl;
	if (NULL != op)
	{
		delete op;
	}
}