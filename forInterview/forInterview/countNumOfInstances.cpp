#pragma once
#ifndef COUNT_NUM_OF_INSTANCES_H
#define COUNT_NUM_OF_INSTANCES_H
#include <iostream>
#include "declarations.h";

Node::Node() {
	count++;
	cout << "Instances counter after add: " << count << endl;

}

Node::~Node() {
	count--;
	cout << "Instances counter after delete: " << count << endl;
}

int Node::count = 0;

#endif