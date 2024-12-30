#include "Hospital.h"

void Hospital::registerPatient(int id, string name, string ailment) {
    patientRecords.addPatient(id, name, ailment);
    patientQueue.enqueue(id);
    cout << "Patient registered: " << name << endl;
}

void Hospital::consultPatient() {
    if (patientQueue.isEmpty()) {
        cout << "No patients waiting for consultation." << endl;
    }
    else {
        int patientId = patientQueue.dequeue();
        cout << "Patient with ID " << patientId << " is being consulted." << endl;
    }
}

void Hospital::displayPatientRecords() {
    cout << "Patient Records:" << endl;
    patientRecords.displayPatients();
}

void Hospital::displayWaitingPatients() {
    patientQueue.displayQueue();
}