#include <iostream>
#include <fstream>
#include <eigen3/Eigen/Dense>
#include "read_csv.h"

using namespace Eigen;
using namespace std;

Eigen::MatrixXd read_csv(std::string file, int rows, int cols) {

    std::ifstream in(file);
    std::string line;

    int row = 0;
    int col = 0;

    Eigen::MatrixXd res = Eigen::MatrixXd(rows, cols);

    if (in.is_open()) {

        while (std::getline(in, line)) {

            char *ptr = (char *) line.c_str();
            int len = line.length();

            col = 0;

            char *start = ptr;

            for (int i = 0; i < len; i++) {

                if (ptr[i] == ',') {
                    res(row, col++) = atof(start);
                    start = ptr + 1 + i;
                }
            }
            res(row, col) = atof(start);
            row++;
        }
        in.close();
    }
    return res;
}

