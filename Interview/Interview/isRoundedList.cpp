//#include <iostream>
//#include "Node.h"
//
//List::List() {}
//
//void List::printList()
//{
//	int counter = 0;
//	Node* currentNode = head;
//	while(currentNode != NULL && counter++ < 10)
//	{
//		std::cout << currentNode << std::endl;
//		currentNode = currentNode->next;
//	}
//}
//
//void List::add(Node* nodeToAdd)
//{
//	Node* currentNode = head;
//	while (currentNode->next != NULL)
//		currentNode = currentNode->next;
//	currentNode->next = nodeToAdd;
//	nodeToAdd->next = NULL;
//}
//
//void List::_delete(Node* nodeToDelete)
//{
//	Node* currentNode = head;
//	if (nodeToDelete == head)
//	{
//		head = head->next;
//		nodeToDelete = NULL;
//		return;
//	}
//
//	while (currentNode != NULL && currentNode->next != nodeToDelete)
//		currentNode = currentNode->next;
//
//	currentNode->next = currentNode->next->next;
//	nodeToDelete = NULL;
//}
//
//bool List::isRoundedList()
//{
//	bool isFirstTime = true;
//	Node* ptr1, *ptr2;
//	ptr1 = head;
//	ptr2 = ptr1;
//
//	//ptr2 = ptr2->next;
//	//ptr1 = ptr1->next->next;//Leader pointer
//	while (ptr1 != ptr2 || isFirstTime)
//	{
//		isFirstTime = false;
//		ptr2 = ptr2->next;
//		ptr1 = ptr1->next;
//		if (ptr1->next == NULL)
//			return false;
//		ptr1 = ptr1->next;
//		if (ptr1->next == NULL)
//			return false;
//	}
//	return true;
//}
//
//Node* List::getMiddleList()
//{
//	Node* ptr1, *ptr2;
//	ptr1 = head;
//	ptr2 = ptr1;
//
//	//ptr2 = ptr2->next;
//	//ptr1 = ptr1->next->next;//Leader pointer
//	while (ptr1 != NULL)
//	{
//		ptr2 = ptr2->next;
//		ptr1 = ptr1->next;
//		if (ptr1->next == NULL)
//			return ptr2;
//		ptr1 = ptr1->next;
//	}
//	return ptr2;
//}
//
////int main()
////{
////}