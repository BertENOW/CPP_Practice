#include <iostream>
#include <cstdlib>
using namespace std;
class myclass {
	int* p;
	int* o;
public:
	myclass(int i);
	~myclass();
	int getval() { return *p; }
	int geto() { return *o; }
};
myclass::myclass(int i)
{
	cout << "Allocating p\n";
	p = new int;
	o = new int;

	if (!p)
	{
		cout << "Allocation failure.\n";
		exit(1);
	}
	*p = i;
	*o = 15;
	//cout << p << "\n";
}
myclass::~myclass()
{
	cout << "Freeing p \n";
	//delete p;
}
void display(myclass ob)
{
	cout << ob.getval() << '\n';
	cout << ob.geto() << '\n';
}
int main()
{
	myclass a(10);
	display(a);
	return 0;
}
