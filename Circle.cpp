// Circle.cpp
#include"Circle.h"

/**
* \brief Circle -- CONSTRUCTOR(Default)
* \details <b>Details</b>
*
* To instantiate a new circle object - given a set of attribute values.
* It prints nothing
*
* \return Nothing
*
* \see ~Circle()
*/
Circle::Circle() {
	radius = 0;

	Shape::SetShapeName((char*)"Circle");
	Shape::SetShapeColour((char*)"undifined");
	strcpy(this->colour, Shape::GetShapeColour());
	strcpy(colourCopy, "");
	destructorValue = false;
}

/**
* \brief Circle -- CONSTRUCTOR
* \details <b>Details</b>
*
* To instantiate a new circle object - given a set of attribute values.
* It prints nothing
* \param colour  - <b>char *</b> - string of circle colour
* \param radius - <b>float</b> - a float number to save radius of circle
*
* \return Nothing
*
* \see ~Circle()
*/
Circle::Circle(char* colour, float radius) {
	if (radius < kZeroValue) {
		radius = kZeroValue;
	}
	this->radius = radius;
	
	Shape::SetShapeName((char*)"Circle");
	Shape::SetShapeColour(colour);
	strcpy(this->colour, Shape::GetShapeColour());
	
	strcpy(colourCopy, "");
	destructorValue = false;
}

/**
* \brief Circle -- DESTRUCTOR
* Called upon to <i>destroy</i> a circle object
* \details <b>Details</b>
*
* To destroy the circle object - free up the memory associated with the object
* It prints the message that object is destoried
*
* \return Nothing
*
*/
Circle:: ~Circle() {
	if (GetDestructorValue() == true)
		printf("The circle is broken...\n");
	else
		printf("");
}

///
/// \brief Accessor
/// \details <b>Details</b>
///
/// Getting radius and return it.
/// 
/// \return Returns radius which is gotten from user as float data type
///
///
float Circle::GetRadius(void) {
	return radius;
}

///
/// \brief Mutator
/// \details <b>Details</b>
///
/// Mutator to save radius in private data member.
/// \param radius - <b>float</b> - a radius which is gotten from user
/// \return Nothing
/// 
void Circle::SetRadius(float radius) {
	if (radius < kZeroValue) {
		radius = kZeroValue;
	}
	this->radius = radius;
	
}

///
/// \brief Method
/// \details <b>Details</b>
///
/// Showing all of information of circle.
///	\return Nothing
/// 
void Circle::Show(void) {
	printf("Shape Information\n");
	printf("name			: %s\n", Shape::GetShapeName());
	printf("Colour			: %s\n", colour);
	printf("Radius			: %.2f cm\n", radius);
	printf("Circumference		: %.2f cm\n", Perimeter());
	printf("Area			: %.2f square cm\n", Area());
	printf("\n");
	SetDestructorValue(true);
}

/// \brief Method
/// \details <b>Details</b>
///
/// To get round length of circle
/// \return Returns a parimeter which is round length of circle
///
float Circle::Perimeter(void) {
	return kPI * OverallDimension();
}

/// \brief Method
/// \details <b>Details</b>
///
/// To get area of circle
/// \return Returns a area of circle
///
float Circle::Area(void) {
	return kPI * radius * radius;
}

/// \brief Method
/// \details <b>Details</b>
///
/// To get diameter of circle
/// \return Returns a diameter of circle
///
float Circle::OverallDimension(void) {
	return kTwoValue * radius;
}


/// \brief Accessor
/// \details <b>Details</b>
///
/// To get colour of circle
/// \return Returns a colour of circle
///
char* Circle::GetColour(void) {
	memcpy(colourCopy, colour, sizeof(colour));

	return colourCopy;
}

/// \brief Overload Operator
/// \details <b>Details</b>
///
/// This method overloaded operator +.
/// 
/// If user add 2 objects, result object has LHS colour and sum of radius
/// \return Returns a Circle object which has calcualted value
///
Circle Circle::operator+(const Circle& addCircle) {
	
	Circle temp;
	strcpy(temp.colour, GetShapeColour());
	temp.radius = this->radius + addCircle.radius;
	
	return temp;
}

/// \brief Overload Operator
/// \details <b>Details</b>
///
/// This method overloaded operator *.
/// 
/// If user multiply 2 objects, result object has RHS colour and multiply of radius
/// \return Returns a Circle object which has calcualted value
///
Circle Circle::operator*(const Circle& multiCircle) {
	Circle temp;
	
	strcpy(temp.colour, multiCircle.colour);
	temp.radius = this->radius * multiCircle.radius;

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
const Circle &Circle::operator=(const Circle& insertCircle) {

	strcpy(this->colour,insertCircle.colour);
	
	this->radius = insertCircle.radius;

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
bool Circle::operator==(const Circle& equalCircle) {
	if (strcmp(this->colour, equalCircle.colour) == 0) {
		if (this->radius == equalCircle.radius) {
			return true;
		}
	}
	else
		return false;
}


/// \brief Accessor
/// \details <b>Details</b>
///
/// Getting radius and return it
/// 
/// and it can be overriding GetRadius method as const.
/// 
/// \return Returns radius which is gotten from user as float data type
///
///
float Circle::GetRadius(void)const {
	return radius;
}

