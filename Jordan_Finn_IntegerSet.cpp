#include "Jordan_Finn_IntegerSet.h"

#include <iostream>

// default constructor
IntegerSet::IntegerSet() : set(101, false) {}

// Comment 1:
// Constructor that initializes the set array with size 101,
// which sets all elements in the array corresponding to the values
// in arr[] as true.
IntegerSet::IntegerSet(int arr[], int size) : set(101, false)
{
	// for each index in the array size
	for (int i = 0; i < size; ++i)
	{
		// if the index's value is between 0 and 100, set the indexed element value to true
		// thus populating the set
		if (arr[i] >= 0 && arr[i] <= 100)
		{
			set[arr[i]] = true;
		}
	}
}

// Comment 2:
// This function allows the user to input numbers into the set until -1 is entered.
// Numbers should be between 0 and 100.
void IntegerSet::inputSet()
{
	int num;
	std::cout << "Enter a number (-1 to finish): ";
	std::cin >> num;

	// while the number the user entered is not -1,
	// populate the set with true values
	while (num != -1)
	{
		if (num >= 0 && num <= 100)
		{
			set[num] = true;
		}
		// repeat
		std::cout << "Enter a number (-1 to finish): ";
		std::cin >> num;
	}
}

// Comment 3:
// This function prints the elements present in the set.
// If the set happens to be empty, the program will print "--".
void IntegerSet::printSet() const
{
	bool isEmpty = true;
	// for each element in the set
	for (int i = 0; i <= 100; ++i)
	{
		if (set[i])
		{
			// for ever false value, display it
			isEmpty = false;
			std::cout << i << " ";
		}
	}
	// however, for each true value, display '--'
	if (isEmpty)
	{
		std::cout << "--";
	}
	std::cout << std::endl;
}

// Comment 4:
// This function inserts the specified element into the set if it's within the valid range (0-100).
void IntegerSet::insertElement(int k)
{
	// given an integer,
	// place that integer into the set
	// by setting the associated index value to true
	if (k >= 0 && k <= 100)
	{
		set[k] = true;
	}
}

// Comment 5:
// This function deletes the specified element from the set if it exists and is within the valid range (0-100).
void IntegerSet::deleteElement(int m)
{
	if (m >= 0 && m <= 100)
	{
		set[m] = false;
	}
}

// Comment 6:
// This function calculates the union of the current set with another set and returns the result.
IntegerSet IntegerSet::unionOfSets(const IntegerSet& other) const
{
	IntegerSet result;
	for (int i = 0; i <= 100; ++i)
	{
		result.set[i] = set[i] || other.set[i];
	}
	return result;
}

// Comment 7:
// This function calculates the interaction of the current set with another set and returns the result.
IntegerSet IntegerSet::intersectionOfSets(const IntegerSet& other) const
{
	IntegerSet result;
	for (int i = 0; i <= 100; ++i)
	{
		result.set[i] = set[i] && other.set[i];
	}
	return result;
}

// Comment 8:
// This function checks if the current set is equal to another set. This then reutrns true if all
// corresponding elements in both sets are equal and returns false if otherwise.
bool IntegerSet::isEqualTo(const IntegerSet& other) const
{
	for (int i = 0; i <= 100; ++i)
	{
		if (set[i] != other.set[i])
		{
			return false;
		}
	}
	return true;
}