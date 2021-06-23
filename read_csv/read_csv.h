#ifndef READCSV_H
#define READCSV_H

#include <eigen3/Eigen/Dense>

Eigen::MatrixXd read_csv(std::string file, int rows, int cols);
#endif