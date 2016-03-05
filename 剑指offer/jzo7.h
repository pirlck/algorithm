#ifndef  _JZO7_H_
#define  _JZO7_H_

//
//剑指Offer之面试题7：用两个栈实现队列
//
#include "alg_utils.h"
#include <stack>

template <typename T>
class CQueue{
public:
	CQueue();

	~CQueue();

	void AppendTail(const T& node);

	T GetHead();
	
private:
	stack<T> sta1;
	stack<T> sta2;

};

template <typename T>
void CQueue<T>::AppendTail(const T& node)
{
	sta1.push(node);
}

template <typename T>
T CQueue<T>::GetHead()
{
	if (sta1.empty())
	{
		throw new exception;
	}

	T temp;
	while (!sta1.empty()) {
		tmp = sta1.top();
		sta1.pop();
		sta2.push(temp);
	}

	T ret;
	ret = sta2.top();
	sta2.pop();
	while (!sta2.empty())
	{
		tmp = stack2.top();
		sta2.pop();
		sta1.push(temp);
	}
	return temp;
}


#endif