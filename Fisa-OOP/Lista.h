#pragma once
#include"Node.h"

template<typename T>
class Lista
{
private:
	Node<T>* head;
public:
	Lista() {
		this->head = NULL;
	}
	void addEnd(T valNode) {
		Node<T>* node = new Node<T>(valNode, nullptr);
		node->setData(valNode);
		if (!head) {
			head = node;
		}
		else {
			Node<T>* aux = head;
			while (aux->getNext()) {
				aux = aux->getNext();

			}
			aux->setNext(node);
		}



	}
	void addStart(T val) {
		Node<T>* aux = new Node<T>(val, nullptr);
		aux->setData(val);
		aux->setNext(head);
		head = aux;

	}
	void deleteNode(int poz) {
		if (!head) {
			return;
		}
		if (poz == 0) {
			Node<T>* aux = head;
			head = head->getNext();
			delete aux;
			return;

		}
		Node<T>* p = head;
		int i = 0;
		while (p != NULL && i < poz - 1) {
			p = p->getNext();
			i++;


		}
		Node<T>* sters = p->getNext();
		p->setNext(sters->getNext());
		delete sters;


	}
	void afisareNode() {
		Node<T>* aux = head;
		while (aux) {
			aux->getData()->afisare();
			aux = aux->getNext();

		}
	}
	void adaugaPoz(int poz, T val) {
		Node<T>* node = new Node<T>(val, nullptr);
		node->setData(val);
		if (poz == 0) {
			node->setNext(head);
			head = node;
			return;
		}
		Node<T>* aux = head;
		int i = 0;
		while (aux != NULL && i < poz - 1) {
			aux = aux->getNext();
			i++;

		}
		node->setNext(aux->getNext());
		aux->setNext(node);



	}
	void deleteStart() {
		if (!head) {
			return;
		}
		Node<T>* aux = head;
		head = head->getNext();
		delete aux;


	}
	void deleteEnd() {
		if (!head) {
			return;
		}
		Node<T>* aux = head;
		while (aux->getNext()->getNext() != NULL) {
			aux = aux->getNext();


		}
		delete aux->getNext();
		aux->setNext(NULL);



	}
	Node<T>* getHead() {
		return head;
	}

};
