#include <iostream>
#include "Hospital.h"

using namespace std;

int main() {
    Hospital hospital;
    int choice;

    do {
        cout << "\nHospital Management System\n";
        cout << "1. Register Patient\n";
        cout << "2. Consult Patient\n";
        cout << "3. Display Patient Records\n";
        cout << "4. Display Waiting Patients\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int id;
            string name, ailment;
            cout << "Enter Patient ID: ";
            cin >> id;
            cin.ignore(); // Clear input buffer
            cout << "Enter Patient Name: ";
            getline(cin, name);
            cout << "Enter Ailment: ";
            getline(cin, ailment);
            hospital.registerPatient(id, name, ailment);
            break;
        }
        case 2:
            hospital.consultPatient();
            break;
        case 3:
            hospital.displayPatientRecords();
            break;
        case 4:
            hospital.displayWaitingPatients();
            break;
        case 5:
            cout << "Exiting the system. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}