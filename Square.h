// Square.h

#ifndef _SQUARE_H
#define _SQUARE_H
#pragma once

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include"Shape.h"
using namespace std;

#define kZeroValue		0
#define kFourValue		4
#define kColourSize		10

/// 
/// \class Square
///
/// \brief This class creates an object that inherited from Shape class, and save length itself. also showing information of shape.
///
///
/// \author A <i>Minchul Hwang</i>
///
/// 
/// 
/// 

class Square : public Shape {
	/* ====================================== */
	/*              PRIVATE                   */
	/* ====================================== */
private:
	float sideLength;								///< To save side length of square
	char colour[kColourSize];
	char colourCopy[kColourSize];
	/* ====================================== */
	/*              PUBLIC                    */
	/* ====================================== */
public:
	/* -------------- ATTRIBUTES ------------ */
	Square();
	Square(char* colour, float sideLength);			///< Constructor with 2 parameters.
	virtual ~Square();								///< Distructor of object

	/* ---------- METHOD PROTOTYPES --------- */
	float GetSideLength(void);						///< Accessor - to get side length of square
	void SetSideLength(float sideLength);			///< Mutator - to set side length of square

	void Show(void);								///< Show information of square

	virtual float Perimeter(void);					///< Virtual function of perimeter - it calculates round length of square
	virtual float Area(void);						///< Virtual function of area - it calculates area of square
	virtual float OverallDimension(void);			///< Virtual function of dimension - side length of square

	char* GetColour(void);


	Square operator+(const Square& addSquare);
	Square operator*(const Square& multiSquare);
	const Square& operator=(const Square& insertSquare);
	bool operator==(const Square& equalSquare);

};




#endif _SQUARE_H