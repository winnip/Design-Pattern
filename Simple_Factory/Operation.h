
// 基类
class COperation
{
public:
	int m_nFirst;
	int m_nSecond;
	virtual double GetResult() = 0;
};

// 加法类
class CAddOperation : public COperation
{
public:
	virtual double GetResult()
	{
		return m_nFirst + m_nSecond;
	}
};

// 减法类
class CSubOperation : public COperation
{
	virtual double GetResult()
	{
		return m_nFirst - m_nSecond;
	}
};