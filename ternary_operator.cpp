/*

//http://www.cplusplus.com/forum/articles/14631/

(x == y) ? a : b


(condition) ? (if_true) : (if_false)

same as

if (condition){
	
	if_true;
	
}else{

	if_false;
	
}

*/



Example:

if (a >b ){
	largest = a;
}else if (b > a){
	largest = b;
}else /* a == b */ {
	std::cout << "they are the same";
}


That requires 7 lines and is unsuitable for something like a MIN/MAX function:

1) #define MIN(a, b) ((a < b) ? a : b)
2) #define MAX(a, b) ((a > b) ? a : b) 

The above code can be used like this:
int largest = MAX(a, b);

largest = ((a > b) ? a : b);


Example:

#include <iostream>

int main() {
    int a, b;
    a = b = 0;

    std::cout << "Enter a number: ";

    std::cin >> a;

    std::cout << "\nEnter a number: ";

    std::cin >> b;

    std::cout << "Largest: " << ((a > b) ? a : b) << "\nSmallest: " << ((a < b) ? a : b) << std::endl;

    return 0;
}



