// myShape.cpp

/* -- this is a FILEHEADER COMMENT --
	NAME	: myShape
	PURPOSE : This program receives the radius and color of the circle and the length and color of the sides of the square from the user.
			  As soon as all information is received, each class is dynamically instantiated, and dynamic allocation is freed after creation.
*/
#include<iostream>
#include"Shape.h"
#include"Circle.h"
#include"Square.h"

using namespace std;

int main() {
	Circle round1((char*)"orange", 5.5);
	Circle round2((char*)"blue", 10.5);
	Circle playARound;

	Square square1((char*)"orange", 5);
	Square square2((char*)"purple", 12);
	Square playASquare;

	round1.Show();
	round2.Show();
	playARound.Show();

	square1.Show();
	square2.Show();
	playASquare.Show();


	playARound = round1 + round2;
	playARound.Show();

	playASquare = (square1 + square2);
	playASquare.Show();

	playARound = (round1 * round2);
	playARound.Show();

	playASquare = (square2 * square1);
	playASquare.Show();


	playARound = round1;

	bool same = (playARound == round1);

	if (same == true)
		printf("Hurray !!\n");
	else
		printf("Awww !! \n");
	

	return 0;
}