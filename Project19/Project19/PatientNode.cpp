#include "PatientNode.h"

PatientNode::PatientNode(int id, string name, string ailment)
    : id(id), name(name), ailment(ailment), next(nullptr) {}
