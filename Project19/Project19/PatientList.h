#ifndef PATIENTLIST_H
#define PATIENTLIST_H

#include "PatientNode.h"
#include <iostream>
using namespace std;

class PatientList {
private:
    PatientNode* head;
    PatientNode* tail;

public:
    PatientList();
    void addPatient(int id, string name, string ailment);
    void displayPatients();
    bool isEmpty();
};

#endif