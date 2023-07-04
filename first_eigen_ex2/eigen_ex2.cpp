#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;

int main()
{
	Matrix <float,3,3> matrixA;

	matrixA.setZero();
	cout<<matrixA<<endl;

	Matrix3f matrixA1;
	matrixA1.setZero();
	cout<<"\n"<<matrixA1<<endl;

	return 0;

}
