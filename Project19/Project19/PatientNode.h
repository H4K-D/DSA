#ifndef PATIENTNODE_H
#define PATIENTNODE_H

#include <string>
using namespace std;

class PatientNode {
public:
    int id;
    string name;
    string ailment;
    PatientNode* next;

    PatientNode(int id, string name, string ailment);
};

#endif
