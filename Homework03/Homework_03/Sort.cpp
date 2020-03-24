/*
*
@file
* @author  Sean Doucet sean.doucet@worldoflinux.ca
* @version 1.0
*
*
* @section DESCRIPTION
*  This is all of the implementation of the Sort class
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

// Header File Pre Processor
#include "Sort.h"

// C++ Standard Library Pre Processor
#include <iostream>
#include <vector>
#include <algorithm>

Sort::Sort() {}

void Sort::selectionSort() {
	int size = list.size();
	int pointer{0};

	int a{0};
	int b{0};

	for (int count = 0; count < a; count++) {

		for (int count = 0; count < a; count++) {
		
		}
	}

	std::swap(a, b);
}

void Sort::bubbleSort() {
	int size = list.size();

	int a{ 0 };

	int count1, count2;

	for (count1 = 0; count1 < size; count1++) {
		for (count2 = 0; count2 < size; count2++) {

			if (list.at(count2) < list.at(count2 + 1)) {
				int tmp = list.at(count2);
			}
		}
	}
}

std::stringstream Sort::show_List()
{
	for (int count = 0; list.size(); count++) {

	}
	return std::stringstream();
}
