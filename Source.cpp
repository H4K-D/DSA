#include<iostream>
using namespace std;


class Node {
public:
	int data;
	Node* next;
	Node* prev;

};

class Dlist {
private:
	Node* head;
public:
	Dlist() {
		head->next = NULL;
		head->prev = NULL;
	}
	bool emptylist() {
		if (head == NULL) {
			return true;
		}
		else {
			return false;
		}
	}
	void insert_after(int oldV, int newV) {
		Node* temp = head;
		Node* newdata = new Node;

		newdata->data = newV;
		if (emptylist()) {
			cout << "list empty";
		}

		else {
			while (temp != NULL) {
				if (temp->data == oldV) {
					newdata->next = temp->next;
					newdata->prev = temp;
					temp->next->prev = newdata;
					temp->next = newdata;

				}
				else {
					temp = temp->next;
				}
			}
		}


	}
	void deletenode(int value) {
		Node* temp = head;
		while (temp != NULL) {
			if (temp->data == value) {
				temp->next->prev = temp->prev;
				temp->prev->next = temp->next;
				delete temp;
				return;
			}
			else {
				temp = temp->next;
			}
		}

	}
	void insert_begin(int value) {
		Node* temp = new Node;
		temp->data = value;
		temp->next = head;
		temp->prev = NULL;
		head->prev = temp;
		head = temp;

	}
	void insert_end(int value) {
		Node* temp = head;
		Node* nayanode = new Node;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		nayanode->data = value;
		temp->next = nayanode;
		nayanode->prev = temp;
		nayanode->next = NULL;


	}
	void traverse() {
		Node* temp = head;
		cout << "LIST:" << endl;
		while (temp != NULL) {
			cout << temp->data << endl;
			temp = temp->next;
		}
	}
};