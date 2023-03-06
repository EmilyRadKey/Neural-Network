#include <Eigen/Eigen>
#include <opencv/>
#include <iostream>
#include <vector>

class NeuralNetwork
{
public:
	// constructor
	NeuralNetwork(std::vector<unit> topology, float learningRate = 0.005f);

	// back propogation function
	void BackPropogate(Eigen::RowVectorXf& output);

	// forward propogation function
	void ForwardPropogate(Eigen::RowVectorXf& input);

	// error calculation function
	void CalcErrors(Eigen::RowVectorXf& output);

	// weight updating function
	void UpdateWeights();

	// training function
	void Train();
};