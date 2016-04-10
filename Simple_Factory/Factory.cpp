#include "Factory.h"
#include "Operation.h"

COperation*::CCalculatorFactory::Create(char cOperator)
{
	COperation* oper;
	switch (cOperator)
	{
	case '+':
		oper = new CAddOperation();
		break;
	case '-':
		oper = new CSubOperation();
		break;
	default:
		oper = new CAddOperation();
		break;
	}

	return oper;
}