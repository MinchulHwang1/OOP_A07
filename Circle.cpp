// Circle.cpp
#include"Circle.h"


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
///
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

/// 
/// \details <b>Details</b>
///
/// To get round length of circle
/// \return Returns a parimeter which is round length of circle
///
float Circle::Perimeter(void) {
	return kPI * OverallDimension();
}

///
/// \details <b>Details</b>
///
/// To get area of circle
/// \return Returns a area of circle
///
float Circle::Area(void) {
	return kPI * radius * radius;
}

///
/// \details <b>Details</b>
///
/// To get diameter of circle
/// \return Returns a diameter of circle
///
float Circle::OverallDimension(void) {
	return kTwoValue * radius;
}



char* Circle::GetColour(void) {
	memcpy(colourCopy, colour, sizeof(colour));

	return colourCopy;
}

/*
Circle operator+(Circle& ad, const Circle& addCircle) {
	ad.SetShapeColour(ad.GetColour());
	ad.SetRadius(ad.GetRadius() + addCircle.GetRadius());

	

	return ad;
}*/

Circle Circle::operator+(const Circle& addCircle) {
	
	Circle temp;
	
	strcpy(temp.colour, GetShapeColour());
	
	temp.radius = this->radius + addCircle.radius;
	
	
	return temp;

}
/*
const Circle &Circle::operator+(const Circle& addCircle) {

	Circle temp;

	strcpy(temp.colour, GetShapeColour());

	temp.radius = this->radius + addCircle.radius;

	return temp;
}
*/
Circle Circle::operator*(const Circle& multiCircle) {
	Circle temp;
	

	strcpy(temp.colour, multiCircle.colour);
	temp.radius = this->radius * multiCircle.radius;

	return temp;
}

const Circle &Circle::operator=(const Circle& insertCircle) {

	strcpy(this->colour,insertCircle.colour);
	
	this->radius = insertCircle.radius;

	return *this;
}

bool Circle::operator==(const Circle& equalCircle) {
	if (strcmp(this->colour, equalCircle.colour) == 0) {
		if (this->radius == equalCircle.radius) {
			return true;
		}
	}
	else
		return false;
}

float Circle::GetRadius(void)const {
	return radius;
}

