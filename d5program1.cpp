#include <iostream>


using namespace std;
class Mammals{
	public:
		void s1() {
			cout << "I am mammal" << endl;
		}
};
class MarineAnimals {
	public:
		void s2() {
			cout << "I am a marine animal" << endl;
		}
};
class BlueWhale : public Mammals, public MarineAnimals {
	public:
		void s3() {
			cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
		}
};


int main()
{
	Mammals se;
	MarineAnimals lm;
	BlueWhale iy;

	se.s1();
	lm.s2();
	iy.s3();
	iy.s1();
	iy.s2();
	return 0;
}