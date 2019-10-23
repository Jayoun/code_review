#ifndef PROJECT1_PRIORITYQUEUE_H_
#define PROJECT1_PRIORITYQUEUE_H_

#include <queue>

// TemplatePriorityQueue class supports Priority Queue for template.
// Example:
//     templatePriorityQueue<int> expTarget;
//     expTarget.Push(1);
//     expTarget.Push(4);
//     ...
//     expTarget.Pop();
//     expTarget.Pop();
//     ...


template <typename T> 
class TemplatePriorityQueue {
	public:
		TemplatePriorityQueue();
		~TemplatePriorityQueue();
		bool Empty() const;
		const T& Top() const;
		int Size();
		void Push(const T&);
		void Pop();

	private:
		std::priority_queue<T> storage;
};


#endif  // PROJECT1_PRIORITYQUEUE_H_
