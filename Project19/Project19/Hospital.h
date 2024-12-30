#ifndef HOSPITAL_H
#define HOSPITAL_H

#include "PatientList.h"
#include "PatientQueue.h"

class Hospital {
private:
    PatientList patientRecords;
    PatientQueue patientQueue;

public:
    void registerPatient(int id, string name, string ailment);
    void consultPatient();
    void displayPatientRecords();
    void displayWaitingPatients();
};

#endif