// From the PDF file by tutorialspoint

#include <iostream>

using namespace std;

// main() is where program execution begins, just like C

int main()
{
	cout << "Hello World\n"; //prints Hello World
	cout << "Apparently C++ doesn't care about white space\n";
	//Playing with variables
	int fruits, apples=7, bananas=19.4;
	fruits = apples + bananas;

	cout << "Counting up the fruits: " << fruits << endl;
	cout << "This is harder than Python, but also faster\n";

/* Experimenting with data types. Copied and pasted code from the tutorial*/

	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of int : " << sizeof(int) << endl;
 	cout << "Size of short int : " << sizeof(short int) << endl;
 	cout << "Size of long int : " << sizeof(long int) << endl;
 	cout << "Size of float : " << sizeof(float) << endl;
 	cout << "Size of double : " << sizeof(double) << endl;
 	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

// Variable types need to be correct

	typedef int feet;	//This makes feet synonymous with int
	feet dist = 7.4;
	cout << "Typdef (feet) = " << dist << endl;
	// endl conveniently adds a new blank line after statement	

// Experimenting with enumerators

//	enum color {red, green, blue} c;
//	c = blue; cout << "c of enum color: " << c << endl;
	
	enum trees {oak, palm, walnut}; //What are these even for?
	cout << "Trees(palm): " << trees(palm) << endl;
	cout << "Trees(oak): " << trees(oak) << endl;
	cout << "Trees(walnut): " << trees(walnut) << endl;

//Regarding local and global variables:
	cout<<"Local variables can only be used inside";
	cout<<" their function" << endl;
	cout<<"Global variables must be declared outside of a func";
	cout<<"tion, but can be used anywhere in the program." << endl;

/*	Currently on page 39 of .pdf */

	//Modifier types

/*	Modifier types can apply to char, int, or double data types.
	Modifiers include:
  - signed	Need to figure out what these two are used for
  - unsigned	Unsure what un/signed differences are
  - long	automatically implies integer variable  type
  - short	automatically implies integer variable type

  - const	cannot be changed by the program during execution
  - volatile	tells compiler that variables value may be changed in unspecified ways	*/

//	Section #10: Storage classes
/*
t
  - auto	Standard/default. Only used with local variables
  - register	Can be stored in a register instead of RAM
  - static	Keeps local variable in existence for entire program
  - externu	Gives reference to variable to all program files
  - mutable	Used in class objects (dunno what those are yet)
*/

// createo exe with multi files: $g++ main.cpp support.cpp -o write
//	which produces write.exe
// See pg 46 for more details

//	Section #11: Operators

	int a = 10;
	int b = 20;
	int c;
	cout << "Operators practice: a=10, b=20" << endl;
	c=a+b;
	cout << "a + b = " << c << endl;
	c=a-b;
	cout << "a - b = " << c << endl;
	c=a*b;
	cout << "a * b = " << c << endl;
	c=b/a;
	cout << "b / a = " << c << endl;
	c=b%a;
	cout << "b % a = " << c << endl;
	c=a++;
	cout << "a++ = " << c << endl;
	c=a--;
	cout << "a-- = " << c << endl;

/* There are also the normal rotational operators:

== checks if equal
!= checks if not equal
> greater than
< lesser than
>= greater or equal
<= lesser or equal

*/
/* Logical operators:

&& if both operands are non-zero then condition is true
|| if any of the two operands is non-zero then condition is true
!  logical NOT operator. Will make false -> true & vice versa

*/

/* Bitwise operators. Truth table for &, |, ^:

p	q	p&q	p|q	p^q

0	0	0	0	0
0	1	0	1	1
1	1	1	1	0
1	0	0	1	1

There is some other bit operator stuff on pg 55

*/

//	Assignment operators:

	cout << "\nc= " << c << " and a= " << a <<endl;
	c+=a;
	cout << "c += a produces: " << c << endl;
	c-=a;
	cout << "c -= a produces: " << c << endl;
	c*=a;
	cout << "c *= a produces: " << c << endl;
	c/=a;
	cout << "c /= a produces: " << c << endl;
	c%=a;
	cout << "c%=a produces: " << c << endl;

/*	Misc operators:

 sizeof		returns the size of the variable
 ,		causes entire sequence of operations to be performed
 . and ->	reference individual members of classes, structures,
 Cast		convert data from one type to another int(2.2)=2
&		gives address variable - &a gives address of a
*		pointer - *var will pointer to var variable

Operator precendence is covered on pg 60.

*/

/*	Loop types (pg 63)

  - while loops		tests condition before executing loop body
  - for loop		executes loop a specified number of times
  - do...while loop	while loop; tests condition at end of body
  - nested loops	put loops inside of other loops (up to 256)

	int primes ()
	{
		 int i, j;

 		for(i=2; i<100; i++) {
 		for(j=2; j <= (i/j); j++)
 		if(!(i%j)) break; // if factor found, not prime
 		if(j > (i/j)) cout << i << " is prime\n";
 	}
 - break	terminate current loop/switch statement & continue
 - continue	skips remaining body of the loop & retests condition

It is easy to make infinite loops with a for loop: "for(;;) because none of the three expressions are actually requried. Not sure when this would be useful.

"Ctrl + C" will exit an infinite loop from the terminal!!!!!!

*/

/*	Section #13: Decision-making statements (pg 81)

   - Types:
	- if
	- if...else
	- switch	Allows a vairable to be tested
*/

	int u = 6;
	while (u < 9){
		if (u!=9){
			u++;
			cout<<"u != 9, so adding one"<<endl;
		}
		else (u=9){
			cout<<"Hurray, u=9 now!"<<endl;
		}}

/*	Switch statements allow for multiple statements to be tested
	Will break statement similar to while loop
	Can fall through all true statements (counting?)
*/

/*	----Chapter 14: Functions-----

	Fairly similar to Python functions. C++ functions take
	parameters and then use those parameters in some sort
	of code block. The function return type is designated
	when the function itself is declared. It is also necessary
	to declare the parameter types when initializing a function.
	According to the tutorial, the type is really the only
	important piece of information.



	return 0;
}


