#include <iostream>
#include <Eigen/Dense>
#include <opencv2/core.hpp>

using Eigen::MatrixXd;
using Eigen:: VectorXd;

using Eigen::Matrix3d;
using Eigen::Vector3d;

int main()
{
    /*
   // Example 1 for Understanding Eigen
    MatrixXd m(2,2);
    m(0,0) = 3;
    m(1,0) = 2.5;
    m(0,1) = -1;
    m(1,1)  = m(1,0) + m(0,1);
    //the points are points based on collumns and rows
    std::cout << m << std::endl;
    */

    /*
    MatrixXd m = MatrixXd::Random();
    //a random number gets added to the matrix vector
    std::cout << "m =" << std::endl << m << std::endl;
    m = (m + MatrixXd::Constant(1.2)) * 50;
    // second example Matrix3d (1,2)) first example Matrix3d(3,3,1.2))
    // value gets added to each number in row,then new value gets multiplyed by the 50
    std::cout << "m =" << std::endl << m << std::endl;
    Vector3d v(1,1,1);
    // second Vector3d, first VectorXd
    //this is vector multiplication
    //the x value must line up with the cols 
   // v << 1, 1, 1;
    //row 1 gets multiplyed by the number in spot 0
    //weirdly the decimals are slightly off from my school calc to the computer values
    std::cout << "m * v =" << std::endl << m * v << std::endl
    */
}