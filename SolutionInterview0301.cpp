#include<iostream>
#include<queue>
using namespace std;

/*
����һ���������ֻ��һ��������ʵ������ջ��

��Ӧ��ʵ��push(stackNum, value)��pop(stackNum)��isEmpty(stackNum)��peek(stackNum)������
stackNum��ʾջ�±꣬value��ʾѹ���ֵ��

���캯���ᴫ��һ��stackSize����������ÿ��ջ�Ĵ�С��

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
