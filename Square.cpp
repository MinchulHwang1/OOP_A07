// Square.cpp

#include"Square.h"

/**
* \brief Square -- Default CONSTRUCTOR
* \details <b>Details</b>
*
* To instantiate a new Square object - given a set of attribute values
* It prints nothing
*
* \return Nothing
*
* \see ~Square()
*/
Square::Square() {
	sideLength = 0;

	Shape::SetShapeName((char*)"Square");
	Shape::SetShapeColour((char*)"undifined");
	strcpy(this->colour, Shape::GetShapeColour());
	strcpy(colourCopy, "");
}


/**
* \brief Square -- CONSTRUCTOR
* \details <b>Details</b>
*
* To instantiate a new Square object - given a set of attribute values
* It prints nothing
* \param colour  - <b>char *</b> - string of square colour
* \param sideLength - <b>float</b> - a float number to save length of side
*
* \return Nothing
*
* \see ~Square()
*/
Square::Square(char* colour, float sideLength) {
	// Initiating of sideLength
	if (sideLength < kZeroValue) {
		sideLength = kZeroValue;
	}
	this->sideLength = sideLength;

	Shape::SetShapeName((char*)"Square");
	Shape::SetShapeColour(colour);
	strcpy(this->colour, Shape::GetShapeColour());
	
	strcpy(colourCopy, "");
}

/**
* \brief Square -- DESTRUCTOR
* Called upon to <i>destroy</i> a square object
* \details <b>Details</b>
*
* To destroy the Square object - free up the memory associated with the object
* It prints the message that object is destoried
*
* \return Nothing
*
*/
Square::~Square() {
	if (GetDestructorValue() == true)
		printf("The square is squished...\n");
	else
		printf("");
}

///
/// \brief Accessor
/// \details <b>Details</b>
///
/// Getting length and return it.
/// 
/// \return Returns sideLength which is side length which is gotten from user
///
///
float Square::GetSideLength(void) {
	return sideLength;
}

///
/// \brief Mutator
/// \details <b>Details</b>
///
/// A mutator to save sideLength in private data member.
/// \param sideLength - <b>float</b> - side length which is gotten from user
/// \return Nothing
/// 
void Square::SetSideLength(float sideLength) {
	if (sideLength < kZeroValue) {
		sideLength = kZeroValue;
	}
	this->sideLength = sideLength;
}

///
///
/// \details <b>Details</b>
///
/// Showing all of information of square.
/// \return Nothing
/// 
void Square::Show(void) {
	printf("Shape Information\n");
	printf("name			: %s\n", Shape::GetShapeName());
	printf("Colour			: %s\n", colour);
	printf("Side-Length		: %.2f cm\n", sideLength);
	printf("Perimeter		: %.2f cm\n", Perimeter());
	printf("Area			: %.2f square cm\n", Area());
	printf("\n"); 
	
	SetDestructorValue(true);
}

/// 
/// \details <b>Details</b>
///
/// To get round length of square
/// \return Returns a parimeter which is round length of square
///
float Square::Perimeter(void) {
	return kFourValue * OverallDimension();
}

///
/// \details <b>Details</b>
///
/// To get area of square
/// \return Returns a area of square
///
float Square::Area(void) {
	return OverallDimension() * OverallDimension();
}

///
/// \details <b>Details</b>
///
/// To get diameter of square
/// \return Returns length of square
///
float Square::OverallDimension(void) {
	return sideLength;
}

/// \brief Accessor
/// \details <b>Details</b>
///
/// To get colour of square
/// \return Returns a colour of square
///
char* Square::GetColour(void) {
	memcpy(colourCopy, colour, sizeof(colour));
	return colourCopy;
}

/// \brief Overload Operator
/// \details <b>Details</b>
///
/// This method overloaded operator +.
/// 
/// If user add 2 objects, result object has LHS colour and sum of sideLength
/// \return Returns a square object which has calcualted value
///
Square Square::operator+(const Square& addSquare) {
	Square temp;
	strcpy(temp.colour, this->colour);
	
	temp.sideLength = this->sideLength + addSquare.sideLength;

	return temp;
}

/// \brief Overload Operator
/// \details <b>Details</b>
///
/// This method overloaded operator *.
/// 
/// If user multiply 2 objects, result object has RHS colour and multiply of sideLength
/// \return Returns a square object which has calcualted value
///
Square Square::operator*(const Square& multiSquare) {
	Square temp;
	strcpy(temp.colour, multiSquare.colour);
	temp.sideLength = this->sideLength * multiSquare.sideLength;

	return temp;
}

/// \brief Overload Operator
/// \details <b>Details</b>
///
/// This method overloaded operator =.
/// 
/// If user put one object equal to another object, result object will be covered with RHS object
/// \return Returns a this pointer which points the LHS object
///
const Square &Square::operator=(const Square& insertSquare) {
;
	strcpy(this->colour, insertSquare.colour);

	this->sideLength = insertSquare.sideLength;

	return *this;
}

/// \brief Overload Operator
/// \details <b>Details</b>
///
/// This method overloaded operator ==.
/// 
/// If user want to compare the object is same or not, user can use this operator
/// \return Returns a value corresponding to a bool value
///
bool Square::operator==(const Square& equalSquare) {
	if (strcmp(this->colour, equalSquare.colour) == 0) {
		if (this->sideLength == equalSquare.sideLength) {
			return true;
		}
	}
	else
		return false;
}


/// \brief Accessor
/// \details <b>Details</b>
///
/// Getting length and return it.
/// 
/// \return Returns sideLength which is side length which is gotten from user
///
///
float Square::GetSideLength(void) const {

	return sideLength;
}