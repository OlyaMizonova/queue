#pragma once

template<class T>
struct TNode {
	T val;
	TNode<T>* pNext;
};

template <class T>
class TListQueue {
public:
	TListQueue<T>() {
		pFirst = nullptr;
		pLast = nullptr;
	}
	~TListQueue() {
		while(!is_empty()) {
			pop();
		}
	}
	bool is_empty() {
		return pFirst==nullptr;
	}
	T pop() {
		if (is_empty()) {
			throw "empty queue";
		}
		TNode<T>* p = pFirst;
		T el = pFirst->val;
		pFirst = pFirst->pNext;
		delete p;
		return el;
	}
	T front() {
		if (is_empty()) {
			throw "empty queue";
		}
		return pFirst->val;
	}
	T back() {
		if (is_empty()) {
			throw "empty queue";
		}
		return pLast->val;
	}
	void push(T el) {
		if (is_empty()) {
			TNode<T>* newElem = new TNode<T>;
			pFirst = newElem;
			pLast = newElem;
			newElem->val = el;
			newElem->pNext = nullptr;
		}
		else {
			TNode<T>* newElem = new TNode<T>;
			pLast->pNext = newElem;
			newElem->val = el;
			newElem->pNext = nullptr;
		}
	}
private:
	TNode<T>* pFirst;
	TNode<T>* pLast;
};