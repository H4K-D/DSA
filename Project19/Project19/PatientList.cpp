#include "PatientList.h"

PatientList::PatientList() : head(nullptr), tail(nullptr) {}

void PatientList::addPatient(int id, string name, string ailment) {
    PatientNode* newPatient = new PatientNode(id, name, ailment);
    if (tail == nullptr) {
        head = tail = newPatient;
    }
    else {
        tail->next = newPatient;
        tail = newPatient;
    }
}

void PatientList::displayPatients() {
    if (head == nullptr) {
        cout << "No patients in the hospital." << endl;
        return;
    }

    PatientNode* temp = head;
    while (temp != nullptr) {
        cout << "ID: " << temp->id << ", Name: " << temp->name
            << ", Ailment: " << temp->ailment << endl;
        temp = temp->next;
    }
}

bool PatientList::isEmpty() {
    return head == nullptr;
}