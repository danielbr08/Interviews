#pragma once
#ifndef SINGLETON_H
#define SINGLETON_H
#include "iostream";
#include "declarations.h";
using namespace std;

/* Null, because instance will be initialized on demand. */
Singleton* Singleton::instance = 0;

Singleton* Singleton::getInstance()
{
	if (instance == 0)
	{
		instance = new Singleton();
	}
	//counter++;

	return instance;
}

Singleton::Singleton()
{}
#endif