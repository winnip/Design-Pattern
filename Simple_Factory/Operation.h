
// ����
class COperation
{
public:
	int m_nFirst;
	int m_nSecond;
	virtual double GetResult() = 0;
};

// �ӷ���
class CAddOperation : public COperation
{
public:
	virtual double GetResult()
	{
		return m_nFirst + m_nSecond;
	}
};

// ������
class CSubOperation : public COperation
{
	virtual double GetResult()
	{
		return m_nFirst - m_nSecond;
	}
};