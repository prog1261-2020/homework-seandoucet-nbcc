/*
*
@file
* @author  Sean Doucet sean.doucet@worldoflinux.ca
* @version 1.0
*
*
* @section DESCRIPTION
*  This is the quick sort project.
*
*
* @section LICENSE
*  Copyright Notice
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

// C++ Standard Library Pre Processor
#include <iostream>
#include <vector>

// Main Program Function
int main() {
	std::cout << "Program EXECUTED..." << std::endl;

	// Vector Storage
	std::vector<int> list = {5, 2, 7, 4, 3, 6, 1};
	// Global Variable Storage
	int size = list.size();

	// Pivot Variable
	int firstpivot;
	int secondpivot;

	firstpivot = list.at(0);
	secondpivot = list.at(6);

	for (int position = 0; position >= size; ++position) {
		secondpivot = list.at(position);
		std::cout << secondpivot << std::endl;
	}

	std::cout << firstpivot << std::endl;
	std::cout << secondpivot << std::endl;
	std::cout << size << std::endl;
}