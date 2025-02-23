//
// Created by adam on 3/5/24.
//

#ifndef MEDICATIONTRACKER_MEDICATION_H
#define MEDICATIONTRACKER_MEDICATION_H

#include <string>
#include <vector>
#include <memory>
#include "../Dose/Dose.h"

using namespace std;

struct Medication {
        string medicationName;
        string dosageUnit;
        string patientName;
        string startDate;
        string alias;
        vector<string> times;
        vector<Dose> doses;
        long id;
        float dosage;
        int frequency;
        bool active;
        shared_ptr<Medication> parent = nullptr;
        shared_ptr<Medication> child = nullptr;

        /**
         * Default constructor
         */
        Medication();

        /**
         * Main constructor
         * @param medicationName
         * @param patientName
         * @param dosageUnit
         * @param times
         * @param startDate
         * @param id
         * @param dosage
         * @param frequency
         * @param active
         * @param alias
         */
        Medication(
            string medicationName,
            string patientName,
            string dosageUnit,
            vector<string> times,
            string startDate,
            long id,
            float dosage,
            int frequency,
            bool active,
            string alias = ""
        );
};

#endif //MEDICATIONTRACKER_MEDICATION_H
