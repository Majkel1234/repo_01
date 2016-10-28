#include <iostream>
#include <conio.h>
using namespace std;

class X{
public:
	X(int xx = 0):x{xx}{}
	X(const X &&T) = delete;
	int x;
};

void fun( X &T){
	cout<<"(jestem w funkcji)"<<endl;
	T.x = 333;
}


int main(){
	//fun(X(123));				*** POPRAWKA WYKONANA *** ABC

	_getch();
}

