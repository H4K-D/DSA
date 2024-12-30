#include "PatientQueue.h"

QueueNode::QueueNode(int patientId) : patientId(patientId), next(nullptr) {}

PatientQueue::PatientQueue() : front(nullptr), rear(nullptr) {}

void PatientQueue::enqueue(int patientId) {
    QueueNode* newNode = new QueueNode(patientId);
    if (rear == nullptr) {
        front = rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }
}

int PatientQueue::dequeue() {
    if (front == nullptr) return -1;

    QueueNode* temp = front;
    int patientId = temp->patientId;
    front = front->next;

    if (front == nullptr) {
        rear = nullptr;
    }

    delete temp;
    return patientId;
}

void PatientQueue::displayQueue() {
    if (front == nullptr) {
        cout << "No patients waiting for consultation." << endl;
        return;
    }

    QueueNode* temp = front;
    cout << "Patients waiting for consultation:" << endl;
    while (temp != nullptr) {
        cout << "Patient ID: " << temp->patientId << endl;
        temp = temp->next;
    }
}

bool PatientQueue::isEmpty() {
    return front == nullptr;
}