#include<iostream>
#include<Eigen/Dense>

using namespace std;
using namespace Eigen;

// define 3X3 matrix of floats and set its entries to zero -explicit declaration
int main()
{
	Matrix <float, 3,3> matrixA;
	matrixA.setZero();
	cout<<matrixA<<endl;

	return 0;
}
