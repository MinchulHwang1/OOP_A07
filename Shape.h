// Shape.h

#ifndef _SHAPE_H
#define _SHAPE_H
#pragma once

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<new.h>
using namespace std;

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#define kNameString			50
#define kColourString		10



/// 
/// \class Shape
///
/// \brief This class creates an object that get shape's name and inherit data member to Circle and Square class also it has pure virtual methods
///
/// 
/// \author A <i>Minchul Hwang</i>
///

class Shape {
	/* ====================================== */
	/*              PROTECTED                 */
	/* ====================================== */
protected:
	/* -------------- CONSTANTS ------------- */
	/* -------------- ATTRIBUTES ------------ */
	char name[kNameString];						///< To Save name of shape
	char colour[kColourString];					///< To Save colour of shape
	char nameCopy[kNameString];					///< To Save copy name of shape
	char colourCopy[kColourString];				///< To Save copy colour of shape
	char* colourCopyPointer;					///< To Save colour string as pointer
	bool destructorValue;						///< To define destructor value as bool value to print destroying message
	/* ====================================== */
	/*              PUBLIC                    */
	/* ====================================== */
public:
	/* -------------- ATTRIBUTES ------------ */
	Shape();									///< Defalut Constructor
	Shape(char* name, char* colour);			///< Constructor with 2 parameters

	/* ---------- METHOD PROTOTYPES --------- */
	char* GetShapeName(void);					///< Accessor - name of shape
	char* GetShapeColour(void);					///< Accessor - colour of shape
	void SetShapeName(char* name);				///< Mutator - name of shape
	void SetShapeColour(char* colour);			///< Mutator - colour of shape

	virtual float Perimeter(void) = 0;			///< Virtual function to save perimeter
	virtual float Area(void) = 0;				///< Virtual function to save area of shape
	virtual float OverallDimension(void) = 0;	///< Virtual function to save dimension of shape

	char* GetShapeColour(void) const;					///< Accessor - To get shape colour as pointer of string as const value
	void SetDestructorValue(bool destructorValue);		///< Mutator - To set destructorValue 
	bool GetDestructorValue(void);						///< Accessor - To get destructorValue
};

#endif _SHAPE_H_
