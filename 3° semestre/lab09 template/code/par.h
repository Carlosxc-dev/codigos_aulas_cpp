#ifndef PAR_H
#define PAR_H

#include <iostream>
using namespace std;

template<typename T, typename A>
class Par {
	private:
		T primeiro;
		A segundo;
	public:
		Par(T p, A s) : primeiro{p}, segundo{s} { }
		~Par() {}
		void imprime() {
			cout << "(" << primeiro << ", " << segundo << ")";
		}
};

#endif