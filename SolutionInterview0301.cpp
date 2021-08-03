#include<iostream>
#include<queue>
using namespace std;

/*
三合一。描述如何只用一个数组来实现三个栈。

你应该实现push(stackNum, value)、pop(stackNum)、isEmpty(stackNum)、peek(stackNum)方法。
stackNum表示栈下标，value表示压入的值。

构造函数会传入一个stackSize参数，代表每个栈的大小。

*/
namespace SolutionInterview0301 {

	class TripleInOne {

	private:
		int* stackArr;
		int p1, p2, p3;
	public:
		TripleInOne(int stackSize) :p1(0), p2(stackSize), p3(2 * stackSize) {
			stackArr = new int[stackSize * 3];
		}

		void push(int stackNum, int value) {

		}

		int pop(int stackNum) {

		}

		int peek(int stackNum) {

		}

		bool isEmpty(int stackNum) {

		}
	};
}
