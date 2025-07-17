#pragma once
#include "REPORT CASE.h"
#include <fstream> 
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::IO; 

public ref class Complaint : public REPORT_CASE {
private:
    static List<Complaint^>^ complaintsList = gcnew List<Complaint^>();

public:
    int ComplaintID;              // Unique ID for the complaint
    String^ Name;                 // Name of the person lodging the complaint
    String^ CNIC_No;              // CNIC number of the person
    String^ ComplaintDetails;     // Details of the complaint

    // Constructor
    Complaint(int id, String^ name, String^ cnic, String^ details) {
        ComplaintID = id;
        Name = name;
        CNIC_No = cnic;
        ComplaintDetails = details;
    }

    // CRUD Operations

    // Create (Save Complaint)
    static void SaveComplaint(int id, String^ name, String^ cnic, String^ details) {
        Complaint^ newComplaint = gcnew Complaint(id, name, cnic, details);
        complaintsList->Add(newComplaint);
        SaveComplaintsToCSV(); // Save to CSV after adding a new complaint
        MessageBox::Show("Complaint Saved Successfully!", "Success");
    }

    // Read (Display All Complaints)
    static void DisplayComplaints(DataGridView^ dataGridView) {
        dataGridView->Rows->Clear();
         List<Complaint^>^ list = ReadComplaintsFromFile();
        for each (Complaint ^ complaint in list) {
            dataGridView->Rows->Add(complaint->ComplaintID, complaint->Name, complaint->CNIC_No, complaint->ComplaintDetails);
        }
    }
    // Read (Display All Complaints)
    static void SearchComplaints(DataGridView^ dataGridView,int id) {
        dataGridView->Rows->Clear();
        List<Complaint^>^ list = ReadComplaintsFromFile();
        for each (Complaint ^ complaint in list) {
            if (complaint->ComplaintID == id) {
                dataGridView->Rows->Add(complaint->ComplaintID, complaint->Name, complaint->CNIC_No, complaint->ComplaintDetails);
                return;
            }
        }
        MessageBox::Show("Complaint Not Found!", "Error");
    }
    // Update an existing complaint
    static void UpdateComplaint(int id, String^ name, String^ cnic, String^ details) {
        complaintsList = ReadComplaintsFromFile();
        bool found = false;
        for each (Complaint ^ complaint in complaintsList) {
            if (complaint->ComplaintID == id) {
                complaint->Name = name;
                complaint->CNIC_No = cnic;
                complaint->ComplaintDetails = details;
                SaveComplaintsToCSV(); 
                MessageBox::Show("Complaint Updated Successfully!", "Success");
                return;
            }
        }
        MessageBox::Show("Complaint Not Found!", "Error");
    }

    // Delete a complaint
    static void DeleteComplaint(int id) {
        complaintsList = ReadComplaintsFromFile();
        for (int i = 0; i < complaintsList->Count; i++) {
            if (complaintsList[i]->ComplaintID == id) {
                complaintsList->RemoveAt(i);
                SaveComplaintsToCSV(); 
                MessageBox::Show("Complaint Deleted Successfully!", "Success");
                return;
            }
        }
        MessageBox::Show("Complaint Not Found!", "Error");
    }

    // Function to read data from the CSV file
   static List<Complaint^>^ ReadComplaintsFromFile()
    {
        List<Complaint^>^ complaints = gcnew List<Complaint^>();
        String^ filePath = "complaints.csv";
        // Check if the file exists
        if (!File::Exists(filePath))
        {
            MessageBox::Show("File not found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return complaints; // Return an empty list
        }

        StreamReader^ reader = gcnew StreamReader(filePath);

        // Skip the header line
        reader->ReadLine();

        while (!reader->EndOfStream)
        {
            String^ line = reader->ReadLine();
            array<String^>^ fields = line->Split(',');

            if (fields->Length == 4) // Ensure the correct number of fields
            {
                Complaint^ complaint = gcnew Complaint(Int32::Parse(fields[0]), fields[1], fields[2], fields[3]);
             

                complaints->Add(complaint);
            }
        }

        reader->Close();
        return complaints;
    }

    // Save all complaints to CSV file
    static void SaveComplaintsToCSV() {
        String^ filePath = "complaints.csv";
        bool fileExists = System::IO::File::Exists(filePath);

        StreamWriter^ writer = gcnew StreamWriter(filePath); 
        if (!fileExists) {
            writer->WriteLine("ComplaintID,Name,CNIC_No,ComplaintDetails");
        }
        

        for each (Complaint ^ complaint in complaintsList) {
            writer->WriteLine(complaint->ComplaintID + "," + complaint->Name + "," + complaint->CNIC_No + "," + complaint->ComplaintDetails);
        }

        writer->Close();
    }

    
};
