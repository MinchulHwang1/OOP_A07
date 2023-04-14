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
	char colour[kColourSize];						///< To save colour of square
	char colourCopy[kColourSize];					///< To save copy of colour of square
	/* ====================================== */
	/*              PUBLIC                    */
	/* ====================================== */
public:
	/* -------------- ATTRIBUTES ------------ */
	Square();										///< Defalut Constructor
	Square(char* colour, float sideLength);			///< Constructor with 2 parameters.
	virtual ~Square();								///< Distructor of object

	/* ---------- METHOD PROTOTYPES --------- */
	float GetSideLength(void);						///< Accessor - to get side length of square
	void SetSideLength(float sideLength);			///< Mutator - to set side length of square

	void Show(void);								///< Show information of square

	virtual float Perimeter(void);					///< Virtual function of perimeter - it calculates round length of square
	virtual float Area(void);						///< Virtual function of area - it calculates area of square
	virtual float OverallDimension(void);			///< Virtual function of dimension - side length of square

	char* GetColour(void);							///< Accessor - to get colour of circle
	float GetSideLength(void) const;				///< Accessor - to get the const value of radius of square

	Square operator+(const Square& addSquare);				///< Overload Operator - to overload operator +
	Square operator*(const Square& multiSquare);			///< Overload Operator - to overload operator *
	const Square& operator=(const Square& insertSquare);	///< Overload Operator - to overload operator =
	bool operator==(const Square& equalSquare);				///< Overload Operator - to overload operator ==
};




#endif _SQUARE_H