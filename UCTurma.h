//
// Created by andre on 19-10-2022.
//

#ifndef AED_PROJECT_UCTURMA_H
#define AED_PROJECT_UCTURMA_H

#include <string>
using namespace std;
class UCTurma {
    public:
           UCTurma(string uccode , string classcode);
           string getUC() const;
           string getClassCode() const;
           void print() const;

private:
            string uccode_;
            string classcode_;

};


#endif //AED_PROJECT_UCTURMA_H