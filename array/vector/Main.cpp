/**
 * array
 * - it's a collection (box) of data elements of specified type
 * - all data holding partitions have contiguous memory locations
 * - each partition has two neighbors except first and last one
 * - each partition is indexed and can be determined by its position
 * - index starts at 0 and ends at length - 1
*/

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> arr1; // declaration
    arr1 = {5, 4, 3, 2, 6}; // initialization
    std::vector<int> arr2 = {5, 4, 3, 2, 6}; // declartion and initialization
    
    arr2.push_back(8); // add element to end
    arr2[1] = 1; // update element

    // iterate over a vector
    // unsigned int: because an array index positive, we don't need negative number for our array index
    // i++ is less efficient than ++i
    // - i++: it make a copy of data, increments the copy, and then assign the copy back to i
    // - ++i: increaments it directly in place
    int length = arr2.size();
    std::cout << "[";
    for (unsigned int i = 0; i < length; ++i)
    {
        std::cout << arr2[i] << (i < length - 1 ? ", " : "");
    };
    std::cout << "]";

    return 0;
};