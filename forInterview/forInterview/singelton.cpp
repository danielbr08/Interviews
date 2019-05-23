//#include "iostream";
//using namespace std;
//
//class Singleton
//{
//private:
//	/* Here will be the instance stored. */
//	static Singleton* instance;
//
//	/* Private constructor to prevent instancing. */
//	Singleton();
//
//public:
//	static int counter;
//	/* Static access method. */
//	static Singleton* getInstance();
//};
//
///* Null, because instance will be initialized on demand. */
//Singleton* Singleton::instance = 0;
//
//Singleton* Singleton::getInstance()
//{
//	if (instance == 0)
//	{
//		instance = new Singleton();
//	}
//	counter++;
//
//	return instance;
//}
//
//Singleton::Singleton()
//{}