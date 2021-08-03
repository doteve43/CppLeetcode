#include<iostream>
#include<stack>
using namespace std;

namespace Solution232 {
	class MyQueue {
	private:
		stack<int> stack, cache;

	public:
		/** Initialize your data structure here. */
		MyQueue() :stack(), cache() {

		}

		/** Push element x to the back of queue. */
		void push(int x) {
			stack.push(x);
		}

		/** Removes the element from in front of queue and returns that element. */
		int pop() {
			if (cache.size() == 0) {
				while (stack.size() != 0) {
					cache.push(stack.top());
					stack.pop();
				}
			}
			int ans = cache.top();
			cache.pop();
			return ans;
		}

		/** Get the front element. */
		int peek() {
			if (cache.size() == 0) {
				while (stack.size() != 0) {
					cache.push(stack.top());
					stack.pop();
				}
			}
			return cache.top();
		}

		/** Returns whether the queue is empty. */
		bool empty() {
			return stack.empty() && cache.empty();
		}
	};
}

