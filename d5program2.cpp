#include <iostream>

using namespace std;



class Fruit

{

public:

  static int fruitCounter;

  Fruit()

  {

    fruitCounter++;

  }

  ~Fruit()

  {

    fruitCounter--;

  }

};



class Apples: public Fruit

{

public:

  static int applesCounter;

  Apples():Fruit()

  {

    applesCounter++;

  }

  ~Apples()

  {

    applesCounter--;

  }



};



class Mangoes: public Fruit

{

public:

  static int mangoesCounter;

  Mangoes():Fruit()

  {

    mangoesCounter++;

  }

  ~Mangoes()

  {

    mangoesCounter--;

  }

};



int Fruit::fruitCounter = 0;

int Apples::applesCounter = 0;

int Mangoes::mangoesCounter = 0;



int main()

{

  Apples firstApple,secondApple,thirdApple;

  Mangoes firstMango,secondMango,thirdMango,fourthMango;

  cout << "Total number of fruits: " << Fruit::fruitCounter << endl;

  cout << "Number of apples: " << Apples::applesCounter << endl;

  cout << "Number of mangoes: " << Mangoes::mangoesCounter << endl;

  return 0;

}