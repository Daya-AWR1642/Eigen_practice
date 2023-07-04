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

	//defining a dynamic matrix, explicit declaration
	//
	Matrix <float,Dynamic,Dynamic> matrixB;

	//defining a dymanic matrix, tydef declaration
	//
	MatrixXf matrixB1;

	//Constructor, alloacate memory, but do not initialize 
	MatrixXf matrixC(10,10);

	//Assigning matrix entries
	MatrixXf matrixC1(2,2);

	matrixC1(0,0) = 1;
	matrixC1(0,1) = 2;
	matrixC1(1,0) = 3;
	matrixC1(1,1) = 4;

	cout<<endl<<matrixC1<<endl;

	return 0;

}
