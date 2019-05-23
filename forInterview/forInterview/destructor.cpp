#pragma once
#ifndef DESTRUCTOR_H
#define DESTRUCTOR_H
#include <iostream>
#include "declarations.h";
using namespace std;

Base::Base() {
	cout << "Base created" << endl;
}
Base::~Base() {
	cout << "Base distructor" << endl;
	delete a;
}

void Base:: print(){
	cout << "Base" << endl;
}

Derived::Derived() {
	cout << "Derived created" << endl;
}
Derived::~Derived() {
	cout << "Derived distructor" << endl;
}
void Derived::print() {
	cout << "Derived" << endl;
}
#endif