/* Thanks to the following website for an explaination for the equations used.
*  https://iq.opengenus.org/difference-between-square-of-sum-and-sum-of-squares/
* 
*  The combination of these three functions will calculate the 
*  difference between the sum of squares of all numbers from 1 
*  to N and the square of the sum of 1 to N in constant time O(1).
*  Equation to calculate the sum of squares:
*		f1(N) = (N * (N + 1) / 2)^2
*  Equation to calculate the square of the sums:
*		f2(N) = N * (N + 1) * (2 * N + 1) / 6
*/

#include "difference_of_squares.h"

namespace difference_of_squares {

	int difference_of_squares::square_of_sum(int naturalNum) 
	{
		int sumOfNums = (naturalNum * (naturalNum + 1) / 2);
		int sosCalc = int(std::pow(sumOfNums, 2));  // cast double to int

		return sosCalc;
	}

	int difference_of_squares::sum_of_squares(int naturalNum)
	{
		int sosCalc = naturalNum * (2 * naturalNum + 1) * (naturalNum + 1) / 6;

		return sosCalc;
	}

	int difference_of_squares::difference(int naturalNum)
	{
		int squareOfSum = square_of_sum(naturalNum);
		int sumOfSquare = sum_of_squares(naturalNum);

		int subtractNums = squareOfSum - sumOfSquare;

		return subtractNums;
	}

}  // namespace difference_of_squares
