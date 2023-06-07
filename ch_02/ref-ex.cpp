/*
 *
 *
*/ 



#include <iostream>
int main()
{
	int i = 0, &ri = i;  // ri is a reference to i
    int j = 1;
	// ri is just another name for i; 
	// this statement prints the value of i twice
	std::cout << i << " " << ri << std::endl;

	i = 5; // changing i is reflected through ri as well
	std::cout << i << " " << ri << std::endl;

	ri = 10; // assigning to ri actually assigns to i
	std::cout << i << " " << ri << std::endl;
    // Not an object just a reference to an object of type int
    int &oi = ri; // the same as &oi = i
    // Hear we are creating new objects of type pointer to int
    int *ptr_i = &i;
    int *ptr_ri = &ri;  // ptr_i and ptr_ri are different objects
                        // whith different address
                        // both contains the same address
                        // to the same integer i
                        // We tell they both point to the same integer
    oi = 33;
    std::cout << i << ", " << ri << ", " << oi  << std::endl;
    // As the reference is just a kind of alias, taking the address of the
    // reference just returns the address of the referenced object.
    // but references themselves are not objects, nor have an address.
    // That is not true for pointers, they are objects, and they have an address which
    // is different from the address of the object they point;
    std::cout << &ri << ", "<< &oi << ", " << ptr_i << ", " << ptr_ri << ", " << &i<< ", " << &ptr_i << ", " << &ptr_ri << std::endl;

    // trying to get the address of the reference &(&ri) would be the same as trying to get the address of the address of i, which is
    // not an an object but a temporal value of type pointer to int. They are right values.
    //* (int *) ppi = &(&i);
    // &ri = &j; Error we cannot change the address of i, this is equivalent as &i = &j;
    ptr_ri = &j;    // Thats correct, we can assign a pointer a different value,
                    // now ptr_ri points to variable j



	return 0;
}
