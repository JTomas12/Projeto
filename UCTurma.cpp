//
// Created by andre on 19-10-2022.
//

#include "UCTurma.h"
#include <iostream>

UCTurma::UCTurma(string uccode, string classcode) {
    uccode_ = uccode;
    classcode_ = classcode;
}
string UCTurma::getUC() const{
    return uccode_;

}
string UCTurma::getClassCode() const{
    return classcode_;
}
void UCTurma::print() const {
    cout << uccode_ << ',' << classcode_ << endl;
}



