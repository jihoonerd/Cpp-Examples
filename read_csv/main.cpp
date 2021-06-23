#include <iostream>
#include <eigen3/Eigen/Dense>
#include "read_csv.h"

using namespace Eigen;
using namespace std;

int main(void)
{
    Eigen::MatrixXd res = Eigen::MatrixXd(6, 4);
    std::string csvfile = "sample_target.csv";
    res = read_csv(csvfile, 6, 4);
    cout << res.row(0) << endl;
    cout << res.row(1) << endl;
    return 0;
}
