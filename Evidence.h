#pragma once
#include "REPORT CASE.h"
#include <fstream> 
#include <sstream> 

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::IO;

public ref class Evidence : public REPORT_CASE {
private:
    static List<Evidence^>^ evidenceList = gcnew List<Evidence^>();

public:
    int EvidenceID;              
    String^ Name;                
    String^ FileName;           
    String^ EvidenceDetails;     

    Evidence(int id, String^ name, String^ filename, String^ details) {
        EvidenceID = id;
        Name = name;
        FileName = filename;
        EvidenceDetails = details;
    }

  
    static void SaveEvidence(int id, String^ name, String^ filename, String^ details) {
        Evidence^ newEvidence = gcnew Evidence(id, name, filename, details);
        evidenceList->Add(newEvidence);
        SaveEvidenceToCSV();
        MessageBox::Show("Evidence Saved Successfully!", "Success");
    }
    static void DisplayEvidence(DataGridView^ dataGridView) {
        dataGridView->Rows->Clear();
        List<Evidence^>^ list = ReadEvidenceFromFile();
        for each (Evidence ^ Evidence in list) {
            dataGridView->Rows->Add(Evidence->EvidenceID, Evidence->Name, Evidence->FileName,Evidence->EvidenceDetails);
        }
    }
  
    static void UpdateEvidence(int id, String^ name, String^ filename, String^ details) {
        for each (Evidence ^ evidence in evidenceList) {
            if (evidence->EvidenceID == id) {
                evidence->Name = name;
                evidence->FileName = filename;
                evidence->EvidenceDetails = details;
                SaveEvidenceToCSV();
                MessageBox::Show("Evidence Updated Successfully!", "Success");
                return;
            }
        }
        MessageBox::Show("Evidence Not Found!", "Error");
    }

    // Delete an evidence record
    static void DeleteEvidence(int id) {
        for (int i = 0; i < evidenceList->Count; i++) {
            if (evidenceList[i]->EvidenceID == id) {
                evidenceList->RemoveAt(i);
                SaveEvidenceToCSV();
                MessageBox::Show("Evidence Deleted Successfully!", "Success");
                return;
            }
        }
        MessageBox::Show("Evidence Not Found!", "Error");
    }

 

    static List<Evidence^>^ ReadEvidenceFromFile()
    {
        List<Evidence^>^ evidenceList = gcnew List<Evidence^>();
        String^ filePath = "evidence.csv"; 

        
        if (!File::Exists(filePath)) 
        {
            MessageBox::Show("File not found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return evidenceList;
        }

       
        StreamReader^ reader = gcnew StreamReader(filePath);

      
        reader->ReadLine();

        
        while (!reader->EndOfStream)
        {
            String^ line = reader->ReadLine();
            array<String^>^ fields = line->Split(',');

           
            if (fields->Length == 4)
            {
              
                Evidence^ evidence = gcnew Evidence(Int32::Parse(fields[0]), fields[1], fields[2], fields[3]);
                evidenceList->Add(evidence);
            }
        }

        reader->Close();
        return evidenceList;
    }


    
    static void SaveEvidenceToCSV() {
        String^ filePath = "evidence.csv";
        StreamWriter^ writer = gcnew StreamWriter(filePath, false); 
        writer->WriteLine("EvidenceID,Name,FileName,EvidenceDetails"); 

        for each (Evidence ^ evidence in evidenceList) {
            writer->WriteLine(evidence->ToCSV()); 
        }

        writer->Close();
    }

   
    static void LoadEvidenceFromCSV() {
        String^ filePath = "evidence.csv";
        if (File::Exists(filePath)) {
            StreamReader^ reader = gcnew StreamReader(filePath);
            reader->ReadLine(); // Skip the header row
            while (!reader->EndOfStream) {
                String^ line = reader->ReadLine();
                array<String^>^ fields = line->Split(',');

                int id = Int32::Parse(fields[0]);
                String^ name = fields[1];
                String^ filename = fields[2];
                String^ details = fields[3];

                Evidence^ evidence = gcnew Evidence(id, name, filename, details);
                evidenceList->Add(evidence);
            }
            reader->Close();
        }
        else {
            MessageBox::Show("Evidence file not found. No data to load.", "Error");
        }
    }

    // Convert an evidence record to a CSV format string
    String^ ToCSV() {
        return EvidenceID + "," + Name + "," + FileName + "," + EvidenceDetails;
    }
};
