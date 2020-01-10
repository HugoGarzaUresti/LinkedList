#include "Node.h"

template <class T>
class LinkedList {

public:
	LinkedList();
	bool isEmpty();
	int getSize();
	void addFirst(T data);
	void deleteFirst();
	void deleteLast();
	void addLast(T data);


private:
	Node<T> *head;
	int size;
};

template <class T>
LinkedList<T>::LinkedList() {
	head = NULL;
	size = 0;
}

template <class T>
bool LinkedList<T>::isEmpty() {
	return (head == NULL);
}

template <class T>
int LinkedList<T>::getSize(){
	return size;
}

template <class T>
void LinkedList<T>::addFirst(T data) {
	head = new Node<T>(data, head);
	size++;
}

template <class T>
void LinkedList<T>::deleteFirst(){
	if(!this->isEmpty()){
		Node<T> *curr = head;
		head = head->getNext();
		delete curr;
		size--;
	}

}

template <class T>
void LinkedList<T>::addLast(T data){
	if(!this->isEmpty()){
		addFirst();
	}else{
		Node <T> * curr = head;
		while(curr->getNext()!=NULL){
			curr = curr->getNext();
		}
		curr->setNext = (new Node<T>(data));
		size++;
	}
}

template <class T>
void LinkedList<T>::deleteLast(){
	if(size<=1){
		deleteFirst();
	}else{
		Node<T> *curr = head;
		while(curr->getNext()->getNext()!=NULL){
			curr = curr->getNext();
		}
		delete curr->getNext();
		curr->setNext(NULL);
		size--;
	}
}













