#include <iostream>
#include <Eigen/Dense>
#include <opencv2/core.hpp>

using Eigen::MatrixXd;
using Eigen:: VectorXd;

int main()
{
    /* Example 1 for Understanding Eigen
    MatrixXd m(2,2);
    m(0,0) = 3;
    m(1,0) = 2.5;
    m(0,1) = -1;
    m(1,1)  = m(1,0) + m(0,1);
    std::cout << m << std::endl;
    */

    MatrixXd m = MatrixXd::Random(3,3);
   // m = (m + MatrixXd::Constant(3,3,1.2)) * 50;
    std::cout << "m =" << std::endl << m << std::endl;
    VectorXd v(3);
    v << 1 , 1, 1;
    //row 1 gets multiplyed by the number in spot 0
    //weirdly the decimals are slightly off from my school calc to the computer values
    std::cout << "m * v =" << std::endl << m * v << std::endl;
}