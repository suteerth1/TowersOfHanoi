#include<iostream>
using namespace std;

class HanoiSolve
	{
	private:
		string list;
		void move(string a,string b)
			{
			list +=" |"+a+"->"+b+"| ";
			}
	public:
		//assuming n>=1 
		void hanoi(int n,string source,string spare,string dest)
			{
			if(n==1)
				move(source,dest);
			else
				{
				hanoi(n-1,source,dest,spare);
				move(source,dest);
				hanoi(n-1,spare,source,dest);
				}
			}
		void printList()
			{
				cout << list;
			}
	};
int main()
	{
	cout << "Enter height:";
	int n;
	cin >> n;
	HanoiSolve h;
	h.hanoi(n,"A","B","C");
	h.printList();
	return 0;
	}
