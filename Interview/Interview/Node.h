#ifndef NODE_H
#define NODE_H

class Node
{
public:
	int data;
	Node* next;
	Node();
	Node(int);
	~Node();
};

class List
{
public:
	Node* head;
	List();

	void printList();
	void add(Node* nodeToAdd);
	void _delete(Node* nodeToDelete);
	bool isRoundedList();
	Node* getMiddleList();



};
#endif
