#pragma once

template<class T>
struct TNode {
	T val;
	TNode<T>* pNext;
	TNode() { pNext = nullptr; }
};

template <class T>
class TListQueue {
public:
	TListQueue() {
		pFirst = nullptr;
		pLast = nullptr;
	}
	TListQueue(const TListQueue& q) {
		TNode<T>* tmp = q.pFirst; 
		TNode<T>*ourQueuePtr;
		pFirst = pLast = nullptr;
		while (tmp != nullptr) {
			ourQueuePtr = new TNode<T>;
			ourQueuePtr->val = tmp->val;
			if (pFirst == nullptr) {
				pFirst = ourQueuePtr; pLast = ourQueuePtr;
			}
			else {
				pLast->pNext = ourQueuePtr;
				pLast = ourQueuePtr;
			}
			tmp = tmp->pNext;
		}
	}
	~TListQueue() {
		while(!is_empty()) {
			pop();
		}
	}

	bool is_empty() {
		return pFirst==nullptr;
	}
	bool is_full() {
		TNode<T>* p = new TNode<T>;
		bool res = (p == nullptr);
		if (!res) { delete p; }
		return res;
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
		if (is_full()) {
			throw "full queue";
		}
		TNode<T>* newElem = new TNode<T>;
		if (is_empty()) {
			pFirst = newElem;
			pLast = newElem;
		}
		else {
			pLast->pNext = newElem;
			pLast = newElem;
		}
		newElem->val = el;
		//newElem->pNext = nullptr;
	}
	T pop() {
		if (is_empty()) {
			throw "empty queue";
		}
		TNode<T>* p = pFirst;
		T el = pFirst->val;
		pFirst = pFirst->pNext;
		if (pFirst == nullptr) {
			pLast = nullptr;
		}
		delete p;
		return el;
	}

	TListQueue<T>& operator=(const TListQueue<T>&q) {
		while (!is_empty()) {
			pop();
		}
		TNode<T>* tmp = q.pFirst;
		while (tmp != nullptr) {
			T el = tmp->val;
			push(el);
			tmp = tmp->pNext;
		}
		return *this;
	}

	bool operator==(const TListQueue<T>& q) {
		/*if (is_empty() || q.is_empty()) {
			if (is_empty() && q.is_empty()) {
				return true;
			}
			return false;
		}*/
		TNode<T>* pRight = q.pFirst, *pLeft = pFirst;
		while (pRight != nullptr || pLeft != nullptr) {
			if (pRight->val != pLeft->val) {
				return false;
			}
			pRight = pRight->pNext;
			pLeft = pLeft->pNext;
		}
		if ((pRight==nullptr&&pLeft!=nullptr)
			||(pLeft==nullptr&&pRight!=nullptr)) {
			return false;
		}
		return true;
	}
	bool operator!=(const TListQueue<T>& q) {
		/*if (is_empty() || q.is_empty()) {
			if (is_empty() && q.is_empty()) {
				return false;
			}
			return true;
		}*/
		TNode<T>* pRight = q.pFirst, *pLeft = pFirst;
		while (pRight != nullptr || pLeft != nullptr) {
			if (pRight->val != pLeft->val) {
				return true;
			}
			pRight = pRight->pNext;
			pLeft = pLeft->pNext;
		}
		if ((pRight == nullptr && pLeft != nullptr)
			|| (pLeft == nullptr && pRight != nullptr)) {
			return true;
		}
		return false;
	}
private:
	TNode<T>* pFirst;
	TNode<T>* pLast;
};