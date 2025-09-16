#include <iostream>
using namespace std;
class demo{

	public:
			int a;
		demo(int a)
		{
			this->a=a;
		}
demo(){}
		demo max(demo d2)
		{
			if (a>d2.a)
			{
				return *this;
			}
			else{
				return d2;
			}
		}
		void disp()
		{
			cout<<"\nA: "<<a;
		}
};
int main()
{
	demo d1(1000),d2(200),d3;
	d1.disp();
	d3=d1.max(d2);
	d2.disp();
	d3.disp();
}