i#include <iostream>
using namespace std;
class Fruit
{
    public:
    	void set_amount(int n) 
    	{
    		amount_fruit = n;
    	}
    	int get_amount() 
    	{
    		return amount_fruit;
    	}
    protected:
    	int amount_fruit{ 0 };
};
class Apples :public Fruit
{
public:
};
class Mangoes :public Fruit
{
public:
};
int main()
{
	Apples apple;
	Mangoes mango;
	int numb_fruit;
	cout << "Enter the number of apples: ";
	cin >> numb_fruit;
	apple.set_amount(numb_fruit);
	cout << "Enter the number of mangoes: ";
	cin >> numb_fruit;
	mango.set_amount(numb_fruit);
	cout << "Quanity of apples in the basket " << apple.get_amount() << endl;
	cout << "Quanity mangoes in the basket " << mango.get_amount() << endl;
	cout << "The total number of fruits in the basket " << apple.get_amount() + mango.get_amount() << endl;
	return 0;
}