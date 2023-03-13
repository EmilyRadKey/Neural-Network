#include <iostream>
#include <Eigen/Dense>
#include <opencv2/core.hpp>

using Eigen::MatrixXd;
using Eigen:: VectorXd;

using Eigen::Matrix3d;
using Eigen::Vector3d;

using Eigen::Array44f;
using Eigen::ArrayXf;
using Eigen::ArrayXXf;

int main()
{

std::cout << "A fixed-size array:\n";
Array44f al = Array44f::Zero();
std::cout << al << "\n\n";

std::cout << "one dimension array:\n";
ArrayXf a2 = ArrayXf::Zero(3);
std::cout << a2 << "\n";

std::cout << "two dimensional array:\n";
ArrayXXf a3 = ArrayXXf::Zero(3,4);
std::cout << a3 << "\n";
}