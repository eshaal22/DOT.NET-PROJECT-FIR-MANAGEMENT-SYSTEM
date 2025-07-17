#pragma once
#include "REPORT CASE.h"
#include <fstream>


using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::IO;

public ref class Accused : public REPORT_CASE {
private:
    static List<Accused^>^ accusedList = gcnew List<Accused^>();

public:
    int AccusedID;              
    String^ Name;               
    String^ CNIC_No;            
    String^ AccusationDetails;  

    Accused(int id, String^ name, String^ cnic, String^ details) {
        AccusedID = id;
        Name = name;
        CNIC_No = cnic;
        AccusationDetails = details;
    }

  
    static void SaveAccused(int id, String^ name, String^ cnic, String^ details) {
        Accused^ newAccused = gcnew Accused(id, name, cnic, details);
        accusedList->Add(newAccused);
        SaveAccusedToCSV(); 
        MessageBox::Show("Accused Saved Successfully!", "Success");
    }
    static void DisplayAccused(DataGridView^ dataGridView) {
        dataGridView->Rows->Clear();
        List<Accused^>^ list = ReadAccusedFromFile();
        for each (Accused ^ Accused in list) {
            dataGridView->Rows->Add(Accused->AccusedID, Accused->Name, Accused->CNIC_No, Accused->AccusationDetails);
        }
    }
   
    static void UpdateAccused(int id, String^ name, String^ cnic, String^ details) {
        for each (Accused ^ accused in accusedList) {
            if (accused->AccusedID == id) {
                accused->Name = name;
                accused->CNIC_No = cnic;
                accused->AccusationDetails = details;
                SaveAccusedToCSV(); 
                MessageBox::Show("Accused Updated Successfully!", "Success");
                return;
            }
        }
        MessageBox::Show("Accused Not Found!", "Error");
    }

 
 
    static void DeleteAccused(int id) {
        for (int i = 0; i < accusedList->Count; i++) {
            if (accusedList[i]->AccusedID == id) {
                accusedList->RemoveAt(i);
                SaveAccusedToCSV(); 
                MessageBox::Show("Accused Deleted Successfully!", "Success");
                return;
            }
        }
        MessageBox::Show("Accused Not Found!", "Error");
    }

    
    static List<Accused^>^ ReadAccusedFromFile()
    {
        List<Accused^>^ accuseds = gcnew List<Accused^>();
        String^ filePath = "accused.csv"; 

        if (!File::Exists(filePath))
        {
            MessageBox::Show("File not found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return accuseds;
        }

       
        StreamReader^ reader = gcnew StreamReader(filePath);

        
        reader->ReadLine();

       
        while (!reader->EndOfStream)
        {
            String^ line = reader->ReadLine();
            array<String^>^ fields = line->Split(',');

            
            if (fields->Length == 4)
            {
                
                Accused^ accused = gcnew Accused(Int32::Parse(fields[0]), fields[1], fields[2], fields[3]);

               
                accuseds->Add(accused);
            }
        }

        reader->Close();
        return accuseds;
    }

   
  
    static void SaveAccusedToCSV() {
        String^ filePath = "accused.csv";
        StreamWriter^ writer = gcnew StreamWriter(filePath, false); 
        writer->WriteLine("AccusedID,Name,CNIC_No,AccusationDetails");  

        for each (Accused ^ accused in accusedList) {
            writer->WriteLine(accused->ToCSV()); 
        }

        writer->Close();
    }


    static void LoadAccusedFromCSV() {
        String^ filePath = "accused.csv";
        if (File::Exists(filePath)) {
            StreamReader^ reader = gcnew StreamReader(filePath);
            reader->ReadLine();  
            while (!reader->EndOfStream) {
                String^ line = reader->ReadLine();
                array<String^>^ fields = line->Split(',');

                int id = Int32::Parse(fields[0]);
                String^ name = fields[1];
                String^ cnic = fields[2];
                String^ details = fields[3];

                Accused^ accused = gcnew Accused(id, name, cnic, details);
                accusedList->Add(accused);
            }
            reader->Close();
        }
        else {
            MessageBox::Show("Accused file not found. No data to load.", "Error");
        }
    }


    String^ ToCSV() {
        return AccusedID + "," + Name + "," + CNIC_No + "," + AccusationDetails;
    }
};
