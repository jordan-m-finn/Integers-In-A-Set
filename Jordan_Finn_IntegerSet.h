#ifndef INTEGER_SET
#define INTEGER_SET

#include <vector>

class IntegerSet
{
public:
	IntegerSet(); // Default constructor

	IntegerSet(int arr[], int size); // Constructor that initializes the set with an array of integers

	// Comment 9:
	// The following member functions serve to set variable equal to something without returning.
	void inputSet();
	void printSet() const;
	void insertElement(int k);
	void deleteElement(int m);

	// Comment 10:
	// The following member functions serve to calculate and create objects that are then returned.
	IntegerSet unionOfSets(const IntegerSet& other) const;
	IntegerSet intersectionOfSets(const IntegerSet& other) const;
	
	// Comment 11:
	// This function is later explained in the implementation file but takes in a set and utilizes boolean values.
	bool isEqualTo(const IntegerSet& other) const;

private:
	// Comment 12:
	// This variable is how the set is stored in future mentions.
	std::vector<bool> set;
};

#endif