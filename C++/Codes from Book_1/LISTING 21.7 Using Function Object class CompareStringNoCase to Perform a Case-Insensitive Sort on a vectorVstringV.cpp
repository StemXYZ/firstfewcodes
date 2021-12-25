// Insert class CompareStringNoCase from Listing 21.6 here
#include <vector>
#include <iostream>

template < typename T>
void DisplayContents(const T & container)
{
	for (auto element = container.cbegin();
		element != container.cend();
		++element)
		cout << *element << endl;
}

int main()
{
	// Define a vector of string to hold names
	vector <string> names;
	
	// Insert some sample names in to the vector
	names.push_back("jim");
	names.push_back("Jack");
	names.push_back("Sam");
	names.push_back("Anna");
	
	cout << "The names in vector in order of insertion: " << endl;
	DisplayContents(names);
	
	cout << "Names after sorting using default std::less<>: " << endl;
	sort(names.begin(), names.end());
	DisplayContents(names);
	
	cout << "Sorting using predicate that ignores case:" << endl;
	sort(names.begin(), names.end(), CompareStringNoCase());
	DisplayContents(names);
	
	return 0;
}