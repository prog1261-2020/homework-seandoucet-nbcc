// C++ Standard Library Pre Processor
#include <sstream>

// Header File Pre Processor


// Program Header File Pre Processor
#include "Vector2D.h"

/**
*
@file
* @author  Sean Doucet sean.doucet@worldoflinux.ca
* @version 1.0
*
*
* @section DESCRIPTION
*  The Vector 2D Header File contains the all of the declarations
*  to the Compiler from the first Homework (Homework 01) for the
*  Introduction to Object Oriented Programming
*
* @section LICENSE
*
*  Copyright 2020 Sean Doucet
*  Permission to use, copy, modify, and/or distribute this software for
*  any purpose with or without fee is hereby granted, provided that the
*  above copyright notice and this permission notice appear in all copies.
*
*  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
*  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
*  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
*  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
*  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
*  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
*  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*
* @section Academic Integrity
*  I certify that this work is solely my own and complies with
*  NBCC Academic Integrity Policy (policy 1111)
*/

Vector2D::Vector2D(int x, int y) : _x(x), _y(y)
{}

std::string Vector2D::toString() const
{
	std::stringstream ss;

	ss << "(" << _x << ", " << _y << ")";
	return ss.str();
}

bool Vector2D::operator==(const Vector2D& rhs) const {
	return (_x == rhs._x) && (_y == rhs._y);
}
bool Vector2D::operator!=(const Vector2D& rhs) const {
	return !((*this) == rhs);
}

bool Vector2D::operator<(const Vector2D& rhs) const {
	return this->_x + this->_y < rhs._x + rhs._y;
}

bool Vector2D::operator==(const Vector2D& rhs) const {
	return (_x == rhs._x) && (_y == rhs._y);
}
bool Vector2D::operator!=(const Vector2D& rhs) const {
	return !((*this) == rhs);
}

bool Vector2D::operator<=(const Vector2D& rhs) const {
	return 0;
}