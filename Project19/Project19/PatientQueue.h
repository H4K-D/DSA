#ifndef PATIENTQUEUE_H
#define PATIENTQUEUE_H

#include <iostream>
using namespace std;

class QueueNode {
public:
    int patientId;
    QueueNode* next;

    QueueNode(int patientId);
};

class PatientQueue {
private:
    QueueNode* front;
    QueueNode* rear;

public:
    PatientQueue();
    void enqueue(int patientId);
    int dequeue();
    void displayQueue();
    bool isEmpty();
};

#endif