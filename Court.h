#pragma once
#include "REPORT CASE.h"
#include <fstream>

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::IO;

public ref class Court : public REPORT_CASE {
private:
    static List<Court^>^ caseList = gcnew List<Court^>();

public:
    int CaseID;                 // Unique Case ID
    String^ File;               // Case file name
    DateTime HearingDate;       // Date of hearing
    String^ JudgeName;          // Judge handling the case

    // Constructor to initialize a Court object
    Court(int caseID, String^ file, DateTime hearingDate, String^ judgeName) {
        CaseID = caseID;
        File = file;
        HearingDate = hearingDate;
        JudgeName = judgeName;
    }

    // Save a new case record
    static void SaveCase(int caseID, String^ file, DateTime hearingDate, String^ judgeName) {
        Court^ newCase = gcnew Court(caseID, file, hearingDate, judgeName);
        caseList->Add(newCase);
        SaveCasesToCSV(); // Save the case list to CSV
        MessageBox::Show("Case Saved Successfully!", "Success");
    }

    static void DisplayCase(DataGridView^ dataGridView) {
        dataGridView->Rows->Clear();
        List<Court^>^ list = ReadCourtFromFile();
        for each (Court ^ Court in list) {
            dataGridView->Rows->Add(Court->CaseID, Court->File, Court->HearingDate, Court->JudgeName);
        }
    }
    static List<Court^>^ ReadCourtFromFile()
    {
        List<Court^>^ caseList = gcnew List<Court^>();
        String^ filePath = "cases.csv"; // Assuming the CSV file for Court cases is named "cases.csv"

        // Check if the file exists
        if (!File::Exists(filePath))
        {
            MessageBox::Show("File not found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return caseList; // Return an empty list if the file doesn't exist
        }

        // Open the file for reading
        StreamReader^ reader = gcnew StreamReader(filePath);

        // Skip the header line if there's one
        reader->ReadLine();

        // Read through the lines in the file
        while (!reader->EndOfStream)
        {
            String^ line = reader->ReadLine();
            array<String^>^ fields = line->Split(',');

            // Ensure there are 4 fields (CaseID, File, HearingDate, JudgeName)
            if (fields->Length == 4)
            {
                // Parse the fields and create a new Court object
                int caseID = Int32::Parse(fields[0]);
                String^ file = fields[1];
                DateTime hearingDate = DateTime::Parse(fields[2]);
                String^ judgeName = fields[3];

                // Create a new Court object with the data from the file
                Court^ court = gcnew Court(caseID, file, hearingDate, judgeName);

                // Add the court case to the list
                caseList->Add(court);
            }
        }

        reader->Close();
        return caseList;
    }


    // Update an existing case record
    static void UpdateCase(int caseID, String^ file, DateTime hearingDate, String^ judgeName) {
        for each (Court ^ courtCase in caseList) {
            if (courtCase->CaseID == caseID) {
                courtCase->File = file;
                courtCase->HearingDate = hearingDate;
                courtCase->JudgeName = judgeName;
                SaveCasesToCSV(); // Save updated list to CSV
                MessageBox::Show("Case Updated Successfully!", "Success");
                return;
            }
        }
        MessageBox::Show("Case Not Found!", "Error");
    }

    // Delete a case record
    static void DeleteCase(int caseID) {
        for (int i = 0; i < caseList->Count; i++) {
            if (caseList[i]->CaseID == caseID) {
                caseList->RemoveAt(i);
                SaveCasesToCSV(); // Save updated list to CSV
                MessageBox::Show("Case Deleted Successfully!", "Success");
                return;
            }
        }
        MessageBox::Show("Case Not Found!", "Error");
    }

   

    // Save case list to a CSV file
    static void SaveCasesToCSV() {
        String^ filePath = "cases.csv";
        StreamWriter^ writer = gcnew StreamWriter(filePath, false); // Overwrite the file
        writer->WriteLine("CaseID,File,HearingDate,JudgeName"); // CSV Headers

        for each (Court ^ courtCase in caseList) {
            writer->WriteLine(courtCase->CaseID + "," + courtCase->File + "," + courtCase->HearingDate.ToShortDateString() + "," + courtCase->JudgeName);
        }

        writer->Close();
    }

    // Load case records from a CSV file
    static void LoadCasesFromCSV() {
        String^ filePath = "cases.csv";
        if (File::Exists(filePath)) {
            StreamReader^ reader = gcnew StreamReader(filePath);
            reader->ReadLine(); // Skip the header row
            while (!reader->EndOfStream) {
                String^ line = reader->ReadLine();
                array<String^>^ fields = line->Split(',');

                int caseID = Int32::Parse(fields[0]);
                String^ file = fields[1];
                DateTime hearingDate = DateTime::Parse(fields[2]);
                String^ judgeName = fields[3];

                Court^ courtCase = gcnew Court(caseID, file, hearingDate, judgeName);
                caseList->Add(courtCase);
            }
            reader->Close();
        }
        else {
            MessageBox::Show("Case file not found. No data to load.", "Error");
        }
    }

    // Convert a Court record to a CSV string
    String^ ToCSV() {
        return CaseID + "," + File + "," + HearingDate.ToShortDateString() + "," + JudgeName;
    }
};
