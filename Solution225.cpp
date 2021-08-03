#include<iostream>
#include<queue>
using namespace std;

/*
请你仅使用两个队列实现一个后入先出（LIFO）的栈，
并支持普通栈的全部四种操作（push、top、pop 和 empty）。
*/
namespace Solution225 {
	class MyStack {
	private:
		queue<int> q1, q2;

	public:
		/** Initialize your data structure here. */
		MyStack() :q1(), q2() {

		}

		/** Push element x onto stack. */
		void push(int x) {
			if (q1.empty()) {
				q1.push(x);
				while (!q2.empty())
				{
					q1.push(q2.front());
					q2.pop();
				}
			}
			else {
				q2.push(x);
				while (!q1.empty())
				{
					q2.push(q1.front());
					q1.pop();
				}
			}
		}

		/** Removes the element on top of the stack and returns that element. */
		int pop() {
			int ans = top();
			(q1.empty()) ? q2.pop() : q1.pop();
			return ans;
		}

		/** Get the top element. */
		int top() {
			return (q1.empty()) ? q2.front() : q1.front();
		}

		/** Returns whether the stack is empty. */
		bool empty() {
			return q1.empty() && q2.empty();
		}
	};
}


