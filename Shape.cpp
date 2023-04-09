// Shape.cpp

#include"Shape.h"

/**
* \brief Shape -- CONSTRUCTOR
* \details <b>Details</b>
*
* To instantiate a new Shape object - given a set of attribute values.   It can be overloaded
*
*
* \return Nothing
*
*/
Shape::Shape() {
	strcpy(name, "Unknown");
	strcpy(colour, "undefined");
	strcpy(nameCopy, " ");
	strcpy(colourCopy, " ");
}

/**
* \brief Shape -- CONSTRUCTOR
* \details <b>Details</b>
*
* To instantiate a new Shape object - given a set of attribute values.   It can be overloaded
* \param name  - <b>char *</b> - string of shape name
* \param colour - <b>char *</b> - string of shape colour
*
* \return Nothing
*
*/
Shape::Shape(char* name, char* colour) {
	// Initiate shape name
	if (strcmp(name, "Circle") == 0 || strcmp(name, "circle") == 0 || strcmp(name, "CIRCLE") == 0) {
		strcpy(this->name, name);
	}
	else if (strcmp(name, "Square") == 0 || strcmp(name, "square") == 0 || strcmp(name, "SQUARE") == 0) {
		strcpy(this->name, name);
	}
	else {
		strcpy(this->name, "Unknown");
	}

	// initiate shape colour
	if (strcmp(colour, "red") == 0 || strcmp(colour, "Red") == 0 || strcmp(colour, "RED") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "green") == 0 || strcmp(colour, "Green") == 0 || strcmp(colour, "GREEN") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "blue") == 0 || strcmp(colour, "Blue") == 0 || strcmp(colour, "BLUE") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "yellow") == 0 || strcmp(colour, "Yellow") == 0 || strcmp(colour, "YELLOW") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "purple") == 0 || strcmp(colour, "Purple") == 0 || strcmp(colour, "PURPLE") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "pink") == 0 || strcmp(colour, "Pink") == 0 || strcmp(colour, "PINK") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "orange") == 0 || strcmp(colour, "Orange") == 0 || strcmp(colour, "ORANGE") == 0) {
		strcpy(this->colour, colour);
	}
	else {
		strcpy(this->colour, "undefined");
	}

	strcpy(nameCopy, " ");
	strcpy(colourCopy, " ");
}

///
/// \brief Accessor
/// \details <b>Details</b>
///
/// Getting shape name and return copy of name
/// 
/// \return Returns a string has name of shape
///
///
char* Shape::GetShapeName(void) {
	memcpy(nameCopy, name, sizeof(name));
	return nameCopy;
}

///
/// \brief Accessor
/// \details <b>Details</b>
///
/// Getting shape colour and return copy of colour
/// 
/// \return Returns a string has colour of shape
///
///
char* Shape::GetShapeColour(void) {
	memcpy(colourCopy, colour, sizeof(colour));
	return colourCopy;
}

///
/// \brief Mutator
/// \details <b>Details</b>
///
/// A mutator to save shape name in private data member.
/// \param name - <b>char *</b> - a string to save name of shape
/// \return Nothing
/// 
void Shape::SetShapeName(char* name) {
	if (strcmp(name, "Circle") == 0 || strcmp(name, "circle") == 0 || strcmp(name, "CIRCLE") == 0) {
		strcpy(this->name, name);
	}
	else if (strcmp(name, "Square") == 0 || strcmp(name, "square") == 0 || strcmp(name, "SQUARE") == 0) {
		strcpy(this->name, name);
	}
	else {
		strcpy(this->name, "Unknown");
	}
}

///
/// \brief Mutator
/// \details <b>Details</b>
///
/// A mutator to save shape colour in private data member.
/// \param colour - <b>char *</b> - a string to save colour of shape
/// \return Nothing
/// 
void Shape::SetShapeColour(char* colour) {
	if (strcmp(colour, "red") == 0 || strcmp(colour, "Red") == 0 || strcmp(colour, "RED") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "green") == 0 || strcmp(colour, "Green") == 0 || strcmp(colour, "GREEN") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "blue") == 0 || strcmp(colour, "Blue") == 0 || strcmp(colour, "BLUE") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "yellow") == 0 || strcmp(colour, "Yellow") == 0 || strcmp(colour, "YELLOW") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "purple") == 0 || strcmp(colour, "Purple") == 0 || strcmp(colour, "PURPLE") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "pink") == 0 || strcmp(colour, "Pink") == 0 || strcmp(colour, "PINK") == 0) {
		strcpy(this->colour, colour);
	}
	else if (strcmp(colour, "orange") == 0 || strcmp(colour, "Orange") == 0 || strcmp(colour, "ORANGE") == 0) {
		strcpy(this->colour, colour);
	}
	else {
		strcpy(this->colour, "undefined");
	}
}

char* Shape::GetShapeColour(void) const {
	strcpy(colourCopyPointer, colour);
	
	return colourCopyPointer;
}

void Shape::SetDestructorValue(bool destructorValue) {
	this->destructorValue = destructorValue;
}

bool Shape::GetDestructorValue(void) {
	return destructorValue;
}