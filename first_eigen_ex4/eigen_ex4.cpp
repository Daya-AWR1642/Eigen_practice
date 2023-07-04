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

	MatrixXd matrixC1(2,2);
	matrixC1(0,0) = 1;
	matrixC1(0,1) = 2;
	matrixC1(1,0) = 3;
	matrixC1(1,1) = 4;
	cout<<endl<<matrixC1<<endl;

	//fillining the matrix entries using the comma separated values
	//
	Matrix4f matrixD;
	matrixD << 1,2,3,4,
		5,6,7,8,
		9,10,11,12,
		13,14,15,16;

	cout<<endl<<matrixD<<endl;

	return 0;
}
