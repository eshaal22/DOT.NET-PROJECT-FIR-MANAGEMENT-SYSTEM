#pragma once
//#include "Header1.h"
//#include "Header2.h"
#include"REPORT CASE.h"
#include "Complaint.h"
#include"admin.h"
#include"Evidence.h"
#include"Court.h"
#include"admin.h"
#include"Accused.h"
namespace CppCLRWinFormsProject {
  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
  using namespace System::Windows::Forms;
  using namespace System::Data;
  using namespace System::Drawing;

  /// <summary>
  /// Summary for Form1
  /// </summary>
  public ref class Form1 : public System::Windows::Forms::Form
  {
  public:
    Form1(void)
    {
      InitializeComponent();
      //
      //TODO: Add the constructor code here
      //

      // uncomment to execute the rk1-utils:
      //    N_rk1_Utils_demo::execute(); // shows how the rk1-utils can be used

    }

  protected:
    /// <summary>
    /// Clean up any resources being used.
    /// </summary>
    ~Form1()
    {
      if (components)
      {
        delete components;
      }
    }

  protected:
  private: System::Windows::Forms::NotifyIcon^ notifyIcon1;
  private: System::Windows::Forms::Label^ label1;
  private: System::Windows::Forms::TabPage^ tabPage8;
  private: System::Windows::Forms::TabPage^ tabPage7;
  private: System::Windows::Forms::TabPage^ tabPage4;
  private: System::Windows::Forms::Button^ button6;
  private: System::Windows::Forms::Button^ button5;
  private: System::Windows::Forms::TextBox^ textBox12;
  private: System::Windows::Forms::TextBox^ textBox11;
  private: System::Windows::Forms::TextBox^ textBox10;
  private: System::Windows::Forms::Label^ label18;
  private: System::Windows::Forms::Label^ label17;
  private: System::Windows::Forms::Label^ label16;
  private: System::Windows::Forms::Label^ label15;
  private: System::Windows::Forms::Label^ label14;
  private: System::Windows::Forms::TabPage^ tabPage3;
  private: System::Windows::Forms::Button^ button4;
  private: System::Windows::Forms::Button^ button3;
  private: System::Windows::Forms::Label^ label13;
  private: System::Windows::Forms::Label^ label12;
  private: System::Windows::Forms::Label^ label11;
  private: System::Windows::Forms::Label^ label10;
  private: System::Windows::Forms::TextBox^ textBox9;
  private: System::Windows::Forms::TextBox^ textBox8;
  private: System::Windows::Forms::TextBox^ textBox7;
  private: System::Windows::Forms::TabPage^ tabPage2;
  private: System::Windows::Forms::Label^ label2;
  private: System::Windows::Forms::Button^ button1;
  private: System::Windows::Forms::Label^ label4;
  private: System::Windows::Forms::TextBox^ textBox1;
  private: System::Windows::Forms::TextBox^ textBox2;
  private: System::Windows::Forms::Label^ label3;
  private: System::Windows::Forms::TabControl^ tabControl1;
  private: System::Windows::Forms::TabPage^ tabPage1;
  private: System::Windows::Forms::Button^ button2;
  private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::TextBox^ textBox21;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::TabPage^ tabPage9;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::TabPage^ tabPage6;





private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button19;


private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::DataGridView^ dataGridView5;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::DataGridView^ dataGridView6;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::Button^ button30;

private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ NAME;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::Button^ button36;
private: System::Windows::Forms::Button^ button35;
private: System::Windows::Forms::Button^ button33;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
private: System::Windows::Forms::Button^ button31;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::TextBox^ textBox6;


  private: System::ComponentModel::IContainer^ components;
  protected:
  private:
    /// <summary>
    /// Required designer variable.
    /// </summary>
    
#pragma region Windows Form Designer generated code
    /// <summary>
    /// Required method for Designer support - do not modify
    /// the contents of this method with the code editor.
    /// </summary>
    void InitializeComponent(void)
    {
        this->components = (gcnew System::ComponentModel::Container());
        this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
        this->button36 = (gcnew System::Windows::Forms::Button());
        this->button28 = (gcnew System::Windows::Forms::Button());
        this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
        this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->button18 = (gcnew System::Windows::Forms::Button());
        this->button17 = (gcnew System::Windows::Forms::Button());
        this->button11 = (gcnew System::Windows::Forms::Button());
        this->textBox20 = (gcnew System::Windows::Forms::TextBox());
        this->textBox21 = (gcnew System::Windows::Forms::TextBox());
        this->textBox22 = (gcnew System::Windows::Forms::TextBox());
        this->textBox23 = (gcnew System::Windows::Forms::TextBox());
        this->label29 = (gcnew System::Windows::Forms::Label());
        this->label30 = (gcnew System::Windows::Forms::Label());
        this->label31 = (gcnew System::Windows::Forms::Label());
        this->label32 = (gcnew System::Windows::Forms::Label());
        this->label33 = (gcnew System::Windows::Forms::Label());
        this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
        this->button35 = (gcnew System::Windows::Forms::Button());
        this->button27 = (gcnew System::Windows::Forms::Button());
        this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
        this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->button20 = (gcnew System::Windows::Forms::Button());
        this->button19 = (gcnew System::Windows::Forms::Button());
        this->button10 = (gcnew System::Windows::Forms::Button());
        this->textBox19 = (gcnew System::Windows::Forms::TextBox());
        this->textBox18 = (gcnew System::Windows::Forms::TextBox());
        this->textBox17 = (gcnew System::Windows::Forms::TextBox());
        this->textBox16 = (gcnew System::Windows::Forms::TextBox());
        this->label28 = (gcnew System::Windows::Forms::Label());
        this->label27 = (gcnew System::Windows::Forms::Label());
        this->label26 = (gcnew System::Windows::Forms::Label());
        this->label25 = (gcnew System::Windows::Forms::Label());
        this->label24 = (gcnew System::Windows::Forms::Label());
        this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
        this->button33 = (gcnew System::Windows::Forms::Button());
        this->button25 = (gcnew System::Windows::Forms::Button());
        this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
        this->NAME = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->button22 = (gcnew System::Windows::Forms::Button());
        this->textBox5 = (gcnew System::Windows::Forms::TextBox());
        this->label9 = (gcnew System::Windows::Forms::Label());
        this->label7 = (gcnew System::Windows::Forms::Label());
        this->button6 = (gcnew System::Windows::Forms::Button());
        this->button5 = (gcnew System::Windows::Forms::Button());
        this->textBox12 = (gcnew System::Windows::Forms::TextBox());
        this->textBox11 = (gcnew System::Windows::Forms::TextBox());
        this->textBox10 = (gcnew System::Windows::Forms::TextBox());
        this->label18 = (gcnew System::Windows::Forms::Label());
        this->label17 = (gcnew System::Windows::Forms::Label());
        this->label16 = (gcnew System::Windows::Forms::Label());
        this->label15 = (gcnew System::Windows::Forms::Label());
        this->label14 = (gcnew System::Windows::Forms::Label());
        this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
        this->button8 = (gcnew System::Windows::Forms::Button());
        this->textBox6 = (gcnew System::Windows::Forms::TextBox());
        this->button32 = (gcnew System::Windows::Forms::Button());
        this->button24 = (gcnew System::Windows::Forms::Button());
        this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
        this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->button23 = (gcnew System::Windows::Forms::Button());
        this->textBox4 = (gcnew System::Windows::Forms::TextBox());
        this->label8 = (gcnew System::Windows::Forms::Label());
        this->button4 = (gcnew System::Windows::Forms::Button());
        this->button3 = (gcnew System::Windows::Forms::Button());
        this->label13 = (gcnew System::Windows::Forms::Label());
        this->label12 = (gcnew System::Windows::Forms::Label());
        this->label11 = (gcnew System::Windows::Forms::Label());
        this->label10 = (gcnew System::Windows::Forms::Label());
        this->textBox9 = (gcnew System::Windows::Forms::TextBox());
        this->textBox8 = (gcnew System::Windows::Forms::TextBox());
        this->textBox7 = (gcnew System::Windows::Forms::TextBox());
        this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
        this->textBox3 = (gcnew System::Windows::Forms::TextBox());
        this->label6 = (gcnew System::Windows::Forms::Label());
        this->label2 = (gcnew System::Windows::Forms::Label());
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->label4 = (gcnew System::Windows::Forms::Label());
        this->textBox1 = (gcnew System::Windows::Forms::TextBox());
        this->textBox2 = (gcnew System::Windows::Forms::TextBox());
        this->label3 = (gcnew System::Windows::Forms::Label());
        this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
        this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
        this->button29 = (gcnew System::Windows::Forms::Button());
        this->button12 = (gcnew System::Windows::Forms::Button());
        this->label36 = (gcnew System::Windows::Forms::Label());
        this->label35 = (gcnew System::Windows::Forms::Label());
        this->textBox25 = (gcnew System::Windows::Forms::TextBox());
        this->textBox24 = (gcnew System::Windows::Forms::TextBox());
        this->label34 = (gcnew System::Windows::Forms::Label());
        this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
        this->button7 = (gcnew System::Windows::Forms::Button());
        this->button2 = (gcnew System::Windows::Forms::Button());
        this->label5 = (gcnew System::Windows::Forms::Label());
        this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
        this->button31 = (gcnew System::Windows::Forms::Button());
        this->button30 = (gcnew System::Windows::Forms::Button());
        this->label38 = (gcnew System::Windows::Forms::Label());
        this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
        this->button16 = (gcnew System::Windows::Forms::Button());
        this->button15 = (gcnew System::Windows::Forms::Button());
        this->button14 = (gcnew System::Windows::Forms::Button());
        this->button13 = (gcnew System::Windows::Forms::Button());
        this->label37 = (gcnew System::Windows::Forms::Label());
        this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
        this->tabPage8->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
        this->tabPage7->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
        this->tabPage4->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
        this->tabPage3->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
        this->tabPage2->SuspendLayout();
        this->tabControl1->SuspendLayout();
        this->tabPage9->SuspendLayout();
        this->tabPage1->SuspendLayout();
        this->tabPage6->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
        this->SuspendLayout();
        // 
        // notifyIcon1
        // 
        this->notifyIcon1->Text = L"notifyIcon1";
        this->notifyIcon1->Visible = true;
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->BackColor = System::Drawing::SystemColors::ControlLightLight;
        this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label1->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
        this->label1->Location = System::Drawing::Point(144, 32);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(348, 25);
        this->label1->TabIndex = 3;
        this->label1->Text = L"FIR MANAGEMENT SYSTEM";
        this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
        // 
        // tabPage8
        // 
        this->tabPage8->BackColor = System::Drawing::Color::LightGray;
        this->tabPage8->Controls->Add(this->button36);
        this->tabPage8->Controls->Add(this->button28);
        this->tabPage8->Controls->Add(this->dataGridView2);
        this->tabPage8->Controls->Add(this->button18);
        this->tabPage8->Controls->Add(this->button17);
        this->tabPage8->Controls->Add(this->button11);
        this->tabPage8->Controls->Add(this->textBox20);
        this->tabPage8->Controls->Add(this->textBox21);
        this->tabPage8->Controls->Add(this->textBox22);
        this->tabPage8->Controls->Add(this->textBox23);
        this->tabPage8->Controls->Add(this->label29);
        this->tabPage8->Controls->Add(this->label30);
        this->tabPage8->Controls->Add(this->label31);
        this->tabPage8->Controls->Add(this->label32);
        this->tabPage8->Controls->Add(this->label33);
        this->tabPage8->Location = System::Drawing::Point(4, 25);
        this->tabPage8->Name = L"tabPage8";
        this->tabPage8->Padding = System::Windows::Forms::Padding(3);
        this->tabPage8->Size = System::Drawing::Size(665, 308);
        this->tabPage8->TabIndex = 8;
        this->tabPage8->Text = L"COURT";
        this->tabPage8->Click += gcnew System::EventHandler(this, &Form1::tabPage8_Click);
        // 
        // button36
        // 
        this->button36->BackColor = System::Drawing::Color::DarkGray;
        this->button36->Location = System::Drawing::Point(577, 179);
        this->button36->Name = L"button36";
        this->button36->Size = System::Drawing::Size(85, 32);
        this->button36->TabIndex = 24;
        this->button36->Text = L"DELETE";
        this->button36->UseVisualStyleBackColor = false;
        this->button36->Click += gcnew System::EventHandler(this, &Form1::button36_Click);
        // 
        // button28
        // 
        this->button28->BackColor = System::Drawing::Color::DarkGray;
        this->button28->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button28->Location = System::Drawing::Point(19, 252);
        this->button28->Name = L"button28";
        this->button28->Size = System::Drawing::Size(75, 35);
        this->button28->TabIndex = 23;
        this->button28->Text = L"BACK";
        this->button28->UseVisualStyleBackColor = false;
        this->button28->Click += gcnew System::EventHandler(this, &Form1::button28_Click);
        // 
        // dataGridView2
        // 
        this->dataGridView2->BackgroundColor = System::Drawing::Color::White;
        this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
            this->Column12,
                this->Column13, this->Column14, this->Column15
        });
        this->dataGridView2->Location = System::Drawing::Point(56, 56);
        this->dataGridView2->Name = L"dataGridView2";
        this->dataGridView2->Size = System::Drawing::Size(470, 119);
        this->dataGridView2->TabIndex = 22;
        this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView2_CellContentClick);
        // 
        // Column12
        // 
        this->Column12->HeaderText = L"CASE-ID";
        this->Column12->Name = L"Column12";
        // 
        // Column13
        // 
        this->Column13->HeaderText = L"FILENAME";
        this->Column13->Name = L"Column13";
        // 
        // Column14
        // 
        this->Column14->HeaderText = L"HEARING-DATE";
        this->Column14->Name = L"Column14";
        // 
        // Column15
        // 
        this->Column15->HeaderText = L"JUDGE-NAME";
        this->Column15->Name = L"Column15";
        // 
        // button18
        // 
        this->button18->BackColor = System::Drawing::Color::DarkGray;
        this->button18->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button18->Location = System::Drawing::Point(573, 132);
        this->button18->Name = L"button18";
        this->button18->Size = System::Drawing::Size(89, 29);
        this->button18->TabIndex = 21;
        this->button18->Text = L"DISPLAY ";
        this->button18->UseVisualStyleBackColor = false;
        this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
        // 
        // button17
        // 
        this->button17->BackColor = System::Drawing::Color::DarkGray;
        this->button17->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button17->Location = System::Drawing::Point(570, 79);
        this->button17->Name = L"button17";
        this->button17->Size = System::Drawing::Size(89, 37);
        this->button17->TabIndex = 20;
        this->button17->Text = L"UPDATE";
        this->button17->UseVisualStyleBackColor = false;
        this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
        // 
        // button11
        // 
        this->button11->BackColor = System::Drawing::Color::DarkGray;
        this->button11->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button11->Location = System::Drawing::Point(570, 29);
        this->button11->Name = L"button11";
        this->button11->Size = System::Drawing::Size(89, 32);
        this->button11->TabIndex = 19;
        this->button11->Text = L"SAVE ";
        this->button11->UseVisualStyleBackColor = false;
        this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
        // 
        // textBox20
        // 
        this->textBox20->Location = System::Drawing::Point(35, 206);
        this->textBox20->Name = L"textBox20";
        this->textBox20->Size = System::Drawing::Size(105, 23);
        this->textBox20->TabIndex = 18;
        // 
        // textBox21
        // 
        this->textBox21->Location = System::Drawing::Point(300, 206);
        this->textBox21->Name = L"textBox21";
        this->textBox21->Size = System::Drawing::Size(102, 23);
        this->textBox21->TabIndex = 17;
        this->textBox21->TextChanged += gcnew System::EventHandler(this, &Form1::textBox21_TextChanged);
        // 
        // textBox22
        // 
        this->textBox22->Location = System::Drawing::Point(177, 206);
        this->textBox22->Name = L"textBox22";
        this->textBox22->Size = System::Drawing::Size(93, 23);
        this->textBox22->TabIndex = 16;
        // 
        // textBox23
        // 
        this->textBox23->Location = System::Drawing::Point(444, 206);
        this->textBox23->Name = L"textBox23";
        this->textBox23->Size = System::Drawing::Size(105, 23);
        this->textBox23->TabIndex = 15;
        // 
        // label29
        // 
        this->label29->AutoSize = true;
        this->label29->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label29->Location = System::Drawing::Point(32, 188);
        this->label29->Name = L"label29";
        this->label29->Size = System::Drawing::Size(108, 15);
        this->label29->TabIndex = 14;
        this->label29->Text = L"HEARING-DATE";
        // 
        // label30
        // 
        this->label30->AutoSize = true;
        this->label30->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label30->Location = System::Drawing::Point(174, 188);
        this->label30->Name = L"label30";
        this->label30->Size = System::Drawing::Size(96, 15);
        this->label30->TabIndex = 13;
        this->label30->Text = L"JUDGE-NAME";
        // 
        // label31
        // 
        this->label31->AutoSize = true;
        this->label31->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label31->Location = System::Drawing::Point(306, 188);
        this->label31->Name = L"label31";
        this->label31->Size = System::Drawing::Size(75, 15);
        this->label31->TabIndex = 12;
        this->label31->Text = L"FILENAME";
        this->label31->Click += gcnew System::EventHandler(this, &Form1::label31_Click);
        // 
        // label32
        // 
        this->label32->AutoSize = true;
        this->label32->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label32->Location = System::Drawing::Point(441, 188);
        this->label32->Name = L"label32";
        this->label32->Size = System::Drawing::Size(62, 15);
        this->label32->TabIndex = 11;
        this->label32->Text = L"CASE-ID";
        // 
        // label33
        // 
        this->label33->AutoSize = true;
        this->label33->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->label33->Location = System::Drawing::Point(238, 13);
        this->label33->Name = L"label33";
        this->label33->Size = System::Drawing::Size(87, 28);
        this->label33->TabIndex = 10;
        this->label33->Text = L"COURT";
        // 
        // tabPage7
        // 
        this->tabPage7->BackColor = System::Drawing::Color::LightGray;
        this->tabPage7->Controls->Add(this->button35);
        this->tabPage7->Controls->Add(this->button27);
        this->tabPage7->Controls->Add(this->dataGridView3);
        this->tabPage7->Controls->Add(this->button20);
        this->tabPage7->Controls->Add(this->button19);
        this->tabPage7->Controls->Add(this->button10);
        this->tabPage7->Controls->Add(this->textBox19);
        this->tabPage7->Controls->Add(this->textBox18);
        this->tabPage7->Controls->Add(this->textBox17);
        this->tabPage7->Controls->Add(this->textBox16);
        this->tabPage7->Controls->Add(this->label28);
        this->tabPage7->Controls->Add(this->label27);
        this->tabPage7->Controls->Add(this->label26);
        this->tabPage7->Controls->Add(this->label25);
        this->tabPage7->Controls->Add(this->label24);
        this->tabPage7->Location = System::Drawing::Point(4, 25);
        this->tabPage7->Name = L"tabPage7";
        this->tabPage7->Padding = System::Windows::Forms::Padding(3);
        this->tabPage7->Size = System::Drawing::Size(665, 308);
        this->tabPage7->TabIndex = 7;
        this->tabPage7->Text = L"Evidence";
        this->tabPage7->Click += gcnew System::EventHandler(this, &Form1::tabPage7_Click);
        // 
        // button35
        // 
        this->button35->BackColor = System::Drawing::Color::DarkGray;
        this->button35->Location = System::Drawing::Point(578, 190);
        this->button35->Name = L"button35";
        this->button35->Size = System::Drawing::Size(81, 34);
        this->button35->TabIndex = 14;
        this->button35->Text = L"DELETE";
        this->button35->UseVisualStyleBackColor = false;
        this->button35->Click += gcnew System::EventHandler(this, &Form1::button35_Click);
        // 
        // button27
        // 
        this->button27->BackColor = System::Drawing::Color::DarkGray;
        this->button27->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button27->Location = System::Drawing::Point(6, 254);
        this->button27->Name = L"button27";
        this->button27->Size = System::Drawing::Size(85, 35);
        this->button27->TabIndex = 13;
        this->button27->Text = L"BACK";
        this->button27->UseVisualStyleBackColor = false;
        this->button27->Click += gcnew System::EventHandler(this, &Form1::button27_Click);
        // 
        // dataGridView3
        // 
        this->dataGridView3->BackgroundColor = System::Drawing::Color::White;
        this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
            this->Column8,
                this->Column9, this->Column10, this->Column11
        });
        this->dataGridView3->Location = System::Drawing::Point(89, 56);
        this->dataGridView3->Name = L"dataGridView3";
        this->dataGridView3->Size = System::Drawing::Size(460, 67);
        this->dataGridView3->TabIndex = 12;
        this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView3_CellContentClick);
        // 
        // Column8
        // 
        this->Column8->HeaderText = L"NAME";
        this->Column8->Name = L"Column8";
        // 
        // Column9
        // 
        this->Column9->HeaderText = L"EVIDENCEID";
        this->Column9->Name = L"Column9";
        // 
        // Column10
        // 
        this->Column10->HeaderText = L"FILENAME";
        this->Column10->Name = L"Column10";
        // 
        // Column11
        // 
        this->Column11->HeaderText = L"DESCRIPTION";
        this->Column11->Name = L"Column11";
        // 
        // button20
        // 
        this->button20->BackColor = System::Drawing::Color::DarkGray;
        this->button20->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button20->Location = System::Drawing::Point(578, 86);
        this->button20->Name = L"button20";
        this->button20->Size = System::Drawing::Size(81, 37);
        this->button20->TabIndex = 11;
        this->button20->Text = L"UPDATE";
        this->button20->UseVisualStyleBackColor = false;
        this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
        // 
        // button19
        // 
        this->button19->BackColor = System::Drawing::Color::DarkGray;
        this->button19->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button19->Location = System::Drawing::Point(578, 140);
        this->button19->Name = L"button19";
        this->button19->Size = System::Drawing::Size(81, 35);
        this->button19->TabIndex = 10;
        this->button19->Text = L"DISPLAY";
        this->button19->UseVisualStyleBackColor = false;
        this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
        // 
        // button10
        // 
        this->button10->BackColor = System::Drawing::Color::DarkGray;
        this->button10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
        this->button10->Location = System::Drawing::Point(578, 44);
        this->button10->Name = L"button10";
        this->button10->Size = System::Drawing::Size(81, 33);
        this->button10->TabIndex = 9;
        this->button10->Text = L"SAVE";
        this->button10->UseVisualStyleBackColor = false;
        this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
        // 
        // textBox19
        // 
        this->textBox19->Location = System::Drawing::Point(303, 190);
        this->textBox19->Name = L"textBox19";
        this->textBox19->Size = System::Drawing::Size(86, 23);
        this->textBox19->TabIndex = 8;
        this->textBox19->TextChanged += gcnew System::EventHandler(this, &Form1::textBox19_TextChanged);
        // 
        // textBox18
        // 
        this->textBox18->Location = System::Drawing::Point(160, 190);
        this->textBox18->Name = L"textBox18";
        this->textBox18->Size = System::Drawing::Size(96, 23);
        this->textBox18->TabIndex = 7;
        // 
        // textBox17
        // 
        this->textBox17->Location = System::Drawing::Point(441, 190);
        this->textBox17->Name = L"textBox17";
        this->textBox17->Size = System::Drawing::Size(96, 23);
        this->textBox17->TabIndex = 6;
        // 
        // textBox16
        // 
        this->textBox16->Location = System::Drawing::Point(48, 190);
        this->textBox16->Name = L"textBox16";
        this->textBox16->Size = System::Drawing::Size(81, 23);
        this->textBox16->TabIndex = 5;
        this->textBox16->TextChanged += gcnew System::EventHandler(this, &Form1::textBox16_TextChanged);
        // 
        // label28
        // 
        this->label28->AutoSize = true;
        this->label28->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label28->Location = System::Drawing::Point(300, 172);
        this->label28->Name = L"label28";
        this->label28->Size = System::Drawing::Size(75, 15);
        this->label28->TabIndex = 4;
        this->label28->Text = L"FILENAME";
        // 
        // label27
        // 
        this->label27->AutoSize = true;
        this->label27->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label27->Location = System::Drawing::Point(438, 172);
        this->label27->Name = L"label27";
        this->label27->Size = System::Drawing::Size(99, 15);
        this->label27->TabIndex = 3;
        this->label27->Text = L"DESCRIPTION";
        // 
        // label26
        // 
        this->label26->AutoSize = true;
        this->label26->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label26->Location = System::Drawing::Point(157, 173);
        this->label26->Name = L"label26";
        this->label26->Size = System::Drawing::Size(95, 15);
        this->label26->TabIndex = 2;
        this->label26->Text = L"EVIDENCE-ID";
        // 
        // label25
        // 
        this->label25->AutoSize = true;
        this->label25->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label25->Location = System::Drawing::Point(45, 172);
        this->label25->Name = L"label25";
        this->label25->Size = System::Drawing::Size(46, 15);
        this->label25->TabIndex = 1;
        this->label25->Text = L"NAME";
        this->label25->Click += gcnew System::EventHandler(this, &Form1::label25_Click);
        // 
        // label24
        // 
        this->label24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
            | System::Windows::Forms::AnchorStyles::Left)
            | System::Windows::Forms::AnchorStyles::Right));
        this->label24->AutoSize = true;
        this->label24->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->label24->Location = System::Drawing::Point(203, 20);
        this->label24->Name = L"label24";
        this->label24->Size = System::Drawing::Size(160, 33);
        this->label24->TabIndex = 0;
        this->label24->Text = L"EVIDENCE ";
        this->label24->Click += gcnew System::EventHandler(this, &Form1::label24_Click);
        // 
        // tabPage4
        // 
        this->tabPage4->BackColor = System::Drawing::Color::LightGray;
        this->tabPage4->Controls->Add(this->button33);
        this->tabPage4->Controls->Add(this->button25);
        this->tabPage4->Controls->Add(this->dataGridView5);
        this->tabPage4->Controls->Add(this->button22);
        this->tabPage4->Controls->Add(this->textBox5);
        this->tabPage4->Controls->Add(this->label9);
        this->tabPage4->Controls->Add(this->label7);
        this->tabPage4->Controls->Add(this->button6);
        this->tabPage4->Controls->Add(this->button5);
        this->tabPage4->Controls->Add(this->textBox12);
        this->tabPage4->Controls->Add(this->textBox11);
        this->tabPage4->Controls->Add(this->textBox10);
        this->tabPage4->Controls->Add(this->label18);
        this->tabPage4->Controls->Add(this->label17);
        this->tabPage4->Controls->Add(this->label16);
        this->tabPage4->Controls->Add(this->label15);
        this->tabPage4->Controls->Add(this->label14);
        this->tabPage4->Location = System::Drawing::Point(4, 25);
        this->tabPage4->Name = L"tabPage4";
        this->tabPage4->Padding = System::Windows::Forms::Padding(3);
        this->tabPage4->Size = System::Drawing::Size(665, 302);
        this->tabPage4->TabIndex = 4;
        this->tabPage4->Text = L" Accused";
        this->tabPage4->Click += gcnew System::EventHandler(this, &Form1::tabPage4_Click);
        // 
        // button33
        // 
        this->button33->BackColor = System::Drawing::Color::DarkGray;
        this->button33->Location = System::Drawing::Point(560, 167);
        this->button33->Name = L"button33";
        this->button33->Size = System::Drawing::Size(90, 26);
        this->button33->TabIndex = 16;
        this->button33->Text = L"DELETE";
        this->button33->UseVisualStyleBackColor = false;
        this->button33->Click += gcnew System::EventHandler(this, &Form1::button33_Click);
        // 
        // button25
        // 
        this->button25->BackColor = System::Drawing::Color::DarkGray;
        this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->button25->Location = System::Drawing::Point(31, 266);
        this->button25->Name = L"button25";
        this->button25->Size = System::Drawing::Size(75, 23);
        this->button25->TabIndex = 15;
        this->button25->Text = L"BACK";
        this->button25->UseVisualStyleBackColor = false;
        this->button25->Click += gcnew System::EventHandler(this, &Form1::button25_Click);
        // 
        // dataGridView5
        // 
        this->dataGridView5->BackgroundColor = System::Drawing::Color::White;
        this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
            this->NAME, this->Column5,
                this->Column6, this->Column7
        });
        this->dataGridView5->Location = System::Drawing::Point(92, 45);
        this->dataGridView5->Name = L"dataGridView5";
        this->dataGridView5->Size = System::Drawing::Size(443, 93);
        this->dataGridView5->TabIndex = 14;
        this->dataGridView5->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView5_CellContentClick);
        // 
        // NAME
        // 
        this->NAME->HeaderText = L"NAME";
        this->NAME->Name = L"NAME";
        // 
        // Column5
        // 
        this->Column5->HeaderText = L"CNIC-NO";
        this->Column5->Name = L"Column5";
        // 
        // Column6
        // 
        this->Column6->HeaderText = L"ACCUSED-ID";
        this->Column6->Name = L"Column6";
        // 
        // Column7
        // 
        this->Column7->HeaderText = L"CHARGES";
        this->Column7->Name = L"Column7";
        // 
        // button22
        // 
        this->button22->BackColor = System::Drawing::Color::DarkGray;
        this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->button22->Location = System::Drawing::Point(560, 82);
        this->button22->Name = L"button22";
        this->button22->Size = System::Drawing::Size(90, 23);
        this->button22->TabIndex = 13;
        this->button22->Text = L"UPDATE";
        this->button22->UseVisualStyleBackColor = false;
        this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
        // 
        // textBox5
        // 
        this->textBox5->Location = System::Drawing::Point(458, 181);
        this->textBox5->Name = L"textBox5";
        this->textBox5->Size = System::Drawing::Size(87, 23);
        this->textBox5->TabIndex = 12;
        this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged_1);
        // 
        // label9
        // 
        this->label9->AutoSize = true;
        this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label9->Location = System::Drawing::Point(455, 155);
        this->label9->Name = L"label9";
        this->label9->Size = System::Drawing::Size(80, 16);
        this->label9->TabIndex = 11;
        this->label9->Text = L"CHARGES";
        this->label9->Click += gcnew System::EventHandler(this, &Form1::label9_Click);
        // 
        // label7
        // 
        this->label7->AutoSize = true;
        this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label7->Location = System::Drawing::Point(197, 157);
        this->label7->Name = L"label7";
        this->label7->Size = System::Drawing::Size(68, 16);
        this->label7->TabIndex = 10;
        this->label7->Text = L"CNIC NO";
        // 
        // button6
        // 
        this->button6->BackColor = System::Drawing::Color::DarkGray;
        this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->button6->Location = System::Drawing::Point(560, 127);
        this->button6->Name = L"button6";
        this->button6->Size = System::Drawing::Size(90, 23);
        this->button6->TabIndex = 9;
        this->button6->Text = L"DISPLAY";
        this->button6->UseVisualStyleBackColor = false;
        this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
        // 
        // button5
        // 
        this->button5->BackColor = System::Drawing::Color::DarkGray;
        this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->button5->Location = System::Drawing::Point(557, 38);
        this->button5->Name = L"button5";
        this->button5->Size = System::Drawing::Size(93, 23);
        this->button5->TabIndex = 8;
        this->button5->Text = L"SAVE";
        this->button5->UseVisualStyleBackColor = false;
        this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
        // 
        // textBox12
        // 
        this->textBox12->Location = System::Drawing::Point(327, 181);
        this->textBox12->Name = L"textBox12";
        this->textBox12->Size = System::Drawing::Size(87, 23);
        this->textBox12->TabIndex = 7;
        this->textBox12->TextChanged += gcnew System::EventHandler(this, &Form1::textBox12_TextChanged);
        // 
        // textBox11
        // 
        this->textBox11->Location = System::Drawing::Point(191, 181);
        this->textBox11->Name = L"textBox11";
        this->textBox11->Size = System::Drawing::Size(87, 23);
        this->textBox11->TabIndex = 6;
        this->textBox11->TextChanged += gcnew System::EventHandler(this, &Form1::textBox11_TextChanged);
        // 
        // textBox10
        // 
        this->textBox10->Location = System::Drawing::Point(71, 181);
        this->textBox10->Name = L"textBox10";
        this->textBox10->Size = System::Drawing::Size(87, 23);
        this->textBox10->TabIndex = 5;
        this->textBox10->TextChanged += gcnew System::EventHandler(this, &Form1::textBox10_TextChanged);
        // 
        // label18
        // 
        this->label18->AutoSize = true;
        this->label18->Location = System::Drawing::Point(238, 144);
        this->label18->Name = L"label18";
        this->label18->Size = System::Drawing::Size(0, 16);
        this->label18->TabIndex = 4;
        // 
        // label17
        // 
        this->label17->AutoSize = true;
        this->label17->Location = System::Drawing::Point(144, 45);
        this->label17->Name = L"label17";
        this->label17->Size = System::Drawing::Size(0, 16);
        this->label17->TabIndex = 3;
        // 
        // label16
        // 
        this->label16->AutoSize = true;
        this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label16->Location = System::Drawing::Point(324, 155);
        this->label16->Name = L"label16";
        this->label16->Size = System::Drawing::Size(98, 16);
        this->label16->TabIndex = 2;
        this->label16->Text = L"ACCUSED ID";
        this->label16->Click += gcnew System::EventHandler(this, &Form1::label16_Click);
        // 
        // label15
        // 
        this->label15->AutoSize = true;
        this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label15->Location = System::Drawing::Point(68, 155);
        this->label15->Name = L"label15";
        this->label15->Size = System::Drawing::Size(50, 16);
        this->label15->TabIndex = 1;
        this->label15->Text = L"NAME";
        // 
        // label14
        // 
        this->label14->AutoSize = true;
        this->label14->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->label14->Location = System::Drawing::Point(270, 18);
        this->label14->Name = L"label14";
        this->label14->Size = System::Drawing::Size(119, 28);
        this->label14->TabIndex = 0;
        this->label14->Text = L"ACCUSED";
        this->label14->Click += gcnew System::EventHandler(this, &Form1::label14_Click);
        // 
        // tabPage3
        // 
        this->tabPage3->BackColor = System::Drawing::Color::LightGray;
        this->tabPage3->Controls->Add(this->button8);
        this->tabPage3->Controls->Add(this->textBox6);
        this->tabPage3->Controls->Add(this->button32);
        this->tabPage3->Controls->Add(this->button24);
        this->tabPage3->Controls->Add(this->dataGridView6);
        this->tabPage3->Controls->Add(this->button23);
        this->tabPage3->Controls->Add(this->textBox4);
        this->tabPage3->Controls->Add(this->label8);
        this->tabPage3->Controls->Add(this->button4);
        this->tabPage3->Controls->Add(this->button3);
        this->tabPage3->Controls->Add(this->label13);
        this->tabPage3->Controls->Add(this->label12);
        this->tabPage3->Controls->Add(this->label11);
        this->tabPage3->Controls->Add(this->label10);
        this->tabPage3->Controls->Add(this->textBox9);
        this->tabPage3->Controls->Add(this->textBox8);
        this->tabPage3->Controls->Add(this->textBox7);
        this->tabPage3->Location = System::Drawing::Point(4, 25);
        this->tabPage3->Name = L"tabPage3";
        this->tabPage3->Padding = System::Windows::Forms::Padding(3);
        this->tabPage3->Size = System::Drawing::Size(665, 302);
        this->tabPage3->TabIndex = 3;
        this->tabPage3->Text = L"Complaint";
        this->tabPage3->Click += gcnew System::EventHandler(this, &Form1::tabPage3_Click);
        // 
        // button8
        // 
        this->button8->Location = System::Drawing::Point(209, 255);
        this->button8->Name = L"button8";
        this->button8->Size = System::Drawing::Size(75, 23);
        this->button8->TabIndex = 16;
        this->button8->Text = L"SEARCH";
        this->button8->UseVisualStyleBackColor = true;
        this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click_2);
        // 
        // textBox6
        // 
        this->textBox6->Location = System::Drawing::Point(309, 255);
        this->textBox6->Name = L"textBox6";
        this->textBox6->Size = System::Drawing::Size(100, 23);
        this->textBox6->TabIndex = 15;
        this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_TextChanged);
        // 
        // button32
        // 
        this->button32->BackColor = System::Drawing::Color::DarkGray;
        this->button32->Location = System::Drawing::Point(554, 81);
        this->button32->Name = L"button32";
        this->button32->Size = System::Drawing::Size(99, 36);
        this->button32->TabIndex = 14;
        this->button32->Text = L"DELETE";
        this->button32->UseVisualStyleBackColor = false;
        this->button32->Click += gcnew System::EventHandler(this, &Form1::button32_Click);
        // 
        // button24
        // 
        this->button24->BackColor = System::Drawing::Color::DarkGray;
        this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button24->Location = System::Drawing::Point(15, 266);
        this->button24->Name = L"button24";
        this->button24->Size = System::Drawing::Size(75, 23);
        this->button24->TabIndex = 13;
        this->button24->Text = L"BACK";
        this->button24->UseVisualStyleBackColor = false;
        this->button24->Click += gcnew System::EventHandler(this, &Form1::button24_Click);
        // 
        // dataGridView6
        // 
        this->dataGridView6->BackgroundColor = System::Drawing::Color::Gainsboro;
        this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
            this->Column1,
                this->Column2, this->Column3, this->Column4
        });
        this->dataGridView6->Location = System::Drawing::Point(60, 34);
        this->dataGridView6->Name = L"dataGridView6";
        this->dataGridView6->Size = System::Drawing::Size(476, 93);
        this->dataGridView6->TabIndex = 12;
        this->dataGridView6->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView6_CellContentClick);
        // 
        // Column1
        // 
        this->Column1->HeaderText = L"COMPAINT-ID";
        this->Column1->Name = L"Column1";
        this->Column1->ReadOnly = true;
        // 
        // Column2
        // 
        this->Column2->HeaderText = L"NAME";
        this->Column2->Name = L"Column2";
        this->Column2->ReadOnly = true;
        // 
        // Column3
        // 
        this->Column3->HeaderText = L"CNIC-NO";
        this->Column3->Name = L"Column3";
        this->Column3->ReadOnly = true;
        // 
        // Column4
        // 
        this->Column4->HeaderText = L"DETAIL";
        this->Column4->Name = L"Column4";
        this->Column4->ReadOnly = true;
        // 
        // button23
        // 
        this->button23->BackColor = System::Drawing::Color::DarkGray;
        this->button23->Cursor = System::Windows::Forms::Cursors::Hand;
        this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button23->Location = System::Drawing::Point(554, 34);
        this->button23->Name = L"button23";
        this->button23->Size = System::Drawing::Size(99, 30);
        this->button23->TabIndex = 11;
        this->button23->Text = L"UPDATE ";
        this->button23->UseVisualStyleBackColor = false;
        this->button23->Click += gcnew System::EventHandler(this, &Form1::button23_Click);
        // 
        // textBox4
        // 
        this->textBox4->Location = System::Drawing::Point(418, 183);
        this->textBox4->Name = L"textBox4";
        this->textBox4->Size = System::Drawing::Size(94, 23);
        this->textBox4->TabIndex = 10;
        // 
        // label8
        // 
        this->label8->AutoSize = true;
        this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label8->Location = System::Drawing::Point(399, 162);
        this->label8->Name = L"label8";
        this->label8->Size = System::Drawing::Size(149, 19);
        this->label8->TabIndex = 9;
        this->label8->Text = L"COMPLAINT DETAILS";
        // 
        // button4
        // 
        this->button4->BackColor = System::Drawing::Color::DarkGray;
        this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button4->Location = System::Drawing::Point(554, 133);
        this->button4->Name = L"button4";
        this->button4->Size = System::Drawing::Size(99, 30);
        this->button4->TabIndex = 8;
        this->button4->Text = L"DISPLAY";
        this->button4->UseVisualStyleBackColor = false;
        this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
        // 
        // button3
        // 
        this->button3->AutoSize = true;
        this->button3->BackColor = System::Drawing::Color::DarkGray;
        this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
        this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button3->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
        this->button3->Location = System::Drawing::Point(554, 183);
        this->button3->Name = L"button3";
        this->button3->Padding = System::Windows::Forms::Padding(0, 0, 0, 4);
        this->button3->Size = System::Drawing::Size(99, 30);
        this->button3->TabIndex = 7;
        this->button3->Text = L"SAVE";
        this->button3->UseVisualStyleBackColor = false;
        this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
        // 
        // label13
        // 
        this->label13->AutoSize = true;
        this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label13->Location = System::Drawing::Point(6, 162);
        this->label13->Name = L"label13";
        this->label13->Size = System::Drawing::Size(112, 16);
        this->label13->TabIndex = 6;
        this->label13->Text = L"COMPLAINT ID";
        // 
        // label12
        // 
        this->label12->AutoSize = true;
        this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label12->Location = System::Drawing::Point(288, 159);
        this->label12->Name = L"label12";
        this->label12->Size = System::Drawing::Size(68, 19);
        this->label12->TabIndex = 5;
        this->label12->Text = L"CNIC NO";
        // 
        // label11
        // 
        this->label11->AutoSize = true;
        this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label11->Location = System::Drawing::Point(160, 160);
        this->label11->Name = L"label11";
        this->label11->Size = System::Drawing::Size(57, 19);
        this->label11->TabIndex = 4;
        this->label11->Text = L"NAME";
        this->label11->Click += gcnew System::EventHandler(this, &Form1::label11_Click);
        // 
        // label10
        // 
        this->label10->AutoSize = true;
        this->label10->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->label10->Location = System::Drawing::Point(247, 3);
        this->label10->Name = L"label10";
        this->label10->Size = System::Drawing::Size(147, 28);
        this->label10->TabIndex = 3;
        this->label10->Text = L"COMPLAINT";
        // 
        // textBox9
        // 
        this->textBox9->Location = System::Drawing::Point(292, 182);
        this->textBox9->Name = L"textBox9";
        this->textBox9->Size = System::Drawing::Size(94, 23);
        this->textBox9->TabIndex = 2;
        // 
        // textBox8
        // 
        this->textBox8->Location = System::Drawing::Point(15, 183);
        this->textBox8->Name = L"textBox8";
        this->textBox8->Size = System::Drawing::Size(94, 23);
        this->textBox8->TabIndex = 1;
        this->textBox8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_TextChanged);
        // 
        // textBox7
        // 
        this->textBox7->Location = System::Drawing::Point(159, 182);
        this->textBox7->Name = L"textBox7";
        this->textBox7->Size = System::Drawing::Size(94, 23);
        this->textBox7->TabIndex = 0;
        this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_TextChanged);
        // 
        // tabPage2
        // 
        this->tabPage2->BackColor = System::Drawing::Color::LightGray;
        this->tabPage2->Controls->Add(this->textBox3);
        this->tabPage2->Controls->Add(this->label6);
        this->tabPage2->Controls->Add(this->label2);
        this->tabPage2->Controls->Add(this->button1);
        this->tabPage2->Controls->Add(this->label4);
        this->tabPage2->Controls->Add(this->textBox1);
        this->tabPage2->Controls->Add(this->textBox2);
        this->tabPage2->Controls->Add(this->label3);
        this->tabPage2->Cursor = System::Windows::Forms::Cursors::Default;
        this->tabPage2->Location = System::Drawing::Point(4, 25);
        this->tabPage2->Name = L"tabPage2";
        this->tabPage2->Padding = System::Windows::Forms::Padding(3);
        this->tabPage2->Size = System::Drawing::Size(665, 308);
        this->tabPage2->TabIndex = 1;
        this->tabPage2->Text = L"LOGIN";
        this->tabPage2->Click += gcnew System::EventHandler(this, &Form1::tabPage2_Click);
        // 
        // textBox3
        // 
        this->textBox3->Location = System::Drawing::Point(202, 126);
        this->textBox3->Name = L"textBox3";
        this->textBox3->Size = System::Drawing::Size(197, 23);
        this->textBox3->TabIndex = 8;
        // 
        // label6
        // 
        this->label6->AutoSize = true;
        this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label6->Location = System::Drawing::Point(199, 105);
        this->label6->Name = L"label6";
        this->label6->Size = System::Drawing::Size(114, 22);
        this->label6->TabIndex = 7;
        this->label6->Text = L"PHONE-NO";
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->BackColor = System::Drawing::Color::Transparent;
        this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
        this->label2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
        this->label2->Location = System::Drawing::Point(254, 3);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(134, 43);
        this->label2->TabIndex = 4;
        this->label2->Text = L"LOGIN ";
        // 
        // button1
        // 
        this->button1->BackColor = System::Drawing::Color::DarkGray;
        this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
        this->button1->Location = System::Drawing::Point(246, 214);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(98, 29);
        this->button1->TabIndex = 2;
        this->button1->Text = L"SUBMIT";
        this->button1->UseVisualStyleBackColor = false;
        this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
        // 
        // label4
        // 
        this->label4->AutoSize = true;
        this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label4->Location = System::Drawing::Point(199, 149);
        this->label4->Name = L"label4";
        this->label4->Size = System::Drawing::Size(105, 22);
        this->label4->TabIndex = 6;
        this->label4->Text = L"PIN-CODE";
        this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
        // 
        // textBox1
        // 
        this->textBox1->Location = System::Drawing::Point(202, 82);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(197, 23);
        this->textBox1->TabIndex = 0;
        this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
        // 
        // textBox2
        // 
        this->textBox2->Location = System::Drawing::Point(203, 174);
        this->textBox2->Name = L"textBox2";
        this->textBox2->Size = System::Drawing::Size(197, 23);
        this->textBox2->TabIndex = 1;
        this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label3->Location = System::Drawing::Point(198, 59);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(93, 22);
        this->label3->TabIndex = 5;
        this->label3->Text = L"CNIC-NO";
        this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
        // 
        // tabControl1
        // 
        this->tabControl1->Controls->Add(this->tabPage2);
        this->tabControl1->Controls->Add(this->tabPage3);
        this->tabControl1->Controls->Add(this->tabPage4);
        this->tabControl1->Controls->Add(this->tabPage7);
        this->tabControl1->Controls->Add(this->tabPage8);
        this->tabControl1->Controls->Add(this->tabPage9);
        this->tabControl1->Controls->Add(this->tabPage1);
        this->tabControl1->Controls->Add(this->tabPage6);
        this->tabControl1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->tabControl1->Location = System::Drawing::Point(3, 60);
        this->tabControl1->Name = L"tabControl1";
        this->tabControl1->SelectedIndex = 0;
        this->tabControl1->Size = System::Drawing::Size(673, 337);
        this->tabControl1->TabIndex = 7;
        // 
        // tabPage9
        // 
        this->tabPage9->BackColor = System::Drawing::Color::LightGray;
        this->tabPage9->Controls->Add(this->button29);
        this->tabPage9->Controls->Add(this->button12);
        this->tabPage9->Controls->Add(this->label36);
        this->tabPage9->Controls->Add(this->label35);
        this->tabPage9->Controls->Add(this->textBox25);
        this->tabPage9->Controls->Add(this->textBox24);
        this->tabPage9->Controls->Add(this->label34);
        this->tabPage9->Location = System::Drawing::Point(4, 25);
        this->tabPage9->Name = L"tabPage9";
        this->tabPage9->Padding = System::Windows::Forms::Padding(3);
        this->tabPage9->Size = System::Drawing::Size(665, 308);
        this->tabPage9->TabIndex = 9;
        this->tabPage9->Text = L"FIR-MANAGEMENT-SYSTEM";
        this->tabPage9->Click += gcnew System::EventHandler(this, &Form1::tabPage9_Click);
        // 
        // button29
        // 
        this->button29->BackColor = System::Drawing::Color::DarkGray;
        this->button29->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button29->Location = System::Drawing::Point(17, 261);
        this->button29->Name = L"button29";
        this->button29->Size = System::Drawing::Size(75, 38);
        this->button29->TabIndex = 6;
        this->button29->Text = L"BACK";
        this->button29->UseVisualStyleBackColor = false;
        this->button29->Click += gcnew System::EventHandler(this, &Form1::button29_Click);
        // 
        // button12
        // 
        this->button12->BackColor = System::Drawing::Color::DarkGray;
        this->button12->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button12->Location = System::Drawing::Point(248, 197);
        this->button12->Name = L"button12";
        this->button12->Size = System::Drawing::Size(91, 38);
        this->button12->TabIndex = 5;
        this->button12->Text = L"LOGIN ";
        this->button12->UseVisualStyleBackColor = false;
        this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
        // 
        // label36
        // 
        this->label36->AutoSize = true;
        this->label36->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label36->Location = System::Drawing::Point(226, 140);
        this->label36->Name = L"label36";
        this->label36->Size = System::Drawing::Size(97, 17);
        this->label36->TabIndex = 4;
        this->label36->Text = L"PASSWORD";
        // 
        // label35
        // 
        this->label35->AutoSize = true;
        this->label35->BackColor = System::Drawing::Color::Transparent;
        this->label35->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label35->Location = System::Drawing::Point(226, 81);
        this->label35->Name = L"label35";
        this->label35->Size = System::Drawing::Size(124, 17);
        this->label35->TabIndex = 3;
        this->label35->Text = L"OFFICER-NAME";
        // 
        // textBox25
        // 
        this->textBox25->Location = System::Drawing::Point(224, 156);
        this->textBox25->Name = L"textBox25";
        this->textBox25->Size = System::Drawing::Size(136, 23);
        this->textBox25->TabIndex = 2;
        // 
        // textBox24
        // 
        this->textBox24->Location = System::Drawing::Point(224, 97);
        this->textBox24->Name = L"textBox24";
        this->textBox24->Size = System::Drawing::Size(136, 23);
        this->textBox24->TabIndex = 1;
        // 
        // label34
        // 
        this->label34->AutoSize = true;
        this->label34->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->label34->Location = System::Drawing::Point(115, 34);
        this->label34->Name = L"label34";
        this->label34->Size = System::Drawing::Size(370, 33);
        this->label34->TabIndex = 0;
        this->label34->Text = L"FIR-MANEGEMENT-SYSTEM";
        // 
        // tabPage1
        // 
        this->tabPage1->BackColor = System::Drawing::Color::LightGray;
        this->tabPage1->Controls->Add(this->button7);
        this->tabPage1->Controls->Add(this->button2);
        this->tabPage1->Controls->Add(this->label5);
        this->tabPage1->Location = System::Drawing::Point(4, 25);
        this->tabPage1->Name = L"tabPage1";
        this->tabPage1->Padding = System::Windows::Forms::Padding(3);
        this->tabPage1->Size = System::Drawing::Size(665, 308);
        this->tabPage1->TabIndex = 10;
        this->tabPage1->Text = L"DASHBOARD";
        this->tabPage1->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click_1);
        // 
        // button7
        // 
        this->button7->BackColor = System::Drawing::Color::DarkGray;
        this->button7->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button7->Location = System::Drawing::Point(234, 112);
        this->button7->Name = L"button7";
        this->button7->Size = System::Drawing::Size(190, 44);
        this->button7->TabIndex = 2;
        this->button7->Text = L"FIR MANAGEMENT ";
        this->button7->UseVisualStyleBackColor = false;
        this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
        // 
        // button2
        // 
        this->button2->BackColor = System::Drawing::Color::DarkGray;
        this->button2->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button2->Location = System::Drawing::Point(234, 67);
        this->button2->Name = L"button2";
        this->button2->Size = System::Drawing::Size(190, 39);
        this->button2->TabIndex = 1;
        this->button2->Text = L"REPORT CASE";
        this->button2->UseVisualStyleBackColor = false;
        this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
        // 
        // label5
        // 
        this->label5->AutoSize = true;
        this->label5->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label5->Location = System::Drawing::Point(242, 17);
        this->label5->Name = L"label5";
        this->label5->Size = System::Drawing::Size(165, 33);
        this->label5->TabIndex = 0;
        this->label5->Text = L"DASHBOARD";
        this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
        // 
        // tabPage6
        // 
        this->tabPage6->BackColor = System::Drawing::Color::LightGray;
        this->tabPage6->Controls->Add(this->button31);
        this->tabPage6->Controls->Add(this->button30);
        this->tabPage6->Controls->Add(this->label38);
        this->tabPage6->Controls->Add(this->dataGridView1);
        this->tabPage6->Controls->Add(this->button16);
        this->tabPage6->Controls->Add(this->button15);
        this->tabPage6->Controls->Add(this->button14);
        this->tabPage6->Controls->Add(this->button13);
        this->tabPage6->Controls->Add(this->label37);
        this->tabPage6->Location = System::Drawing::Point(4, 25);
        this->tabPage6->Name = L"tabPage6";
        this->tabPage6->Padding = System::Windows::Forms::Padding(3);
        this->tabPage6->Size = System::Drawing::Size(665, 308);
        this->tabPage6->TabIndex = 11;
        this->tabPage6->Text = L"CONFIDENTIAL DATA";
        this->tabPage6->Click += gcnew System::EventHandler(this, &Form1::tabPage6_Click);
        // 
        // button31
        // 
        this->button31->BackColor = System::Drawing::Color::DarkGray;
        this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button31->Location = System::Drawing::Point(556, 269);
        this->button31->Name = L"button31";
        this->button31->Size = System::Drawing::Size(103, 28);
        this->button31->TabIndex = 8;
        this->button31->Text = L"LOGOUT";
        this->button31->UseVisualStyleBackColor = false;
        this->button31->Click += gcnew System::EventHandler(this, &Form1::button31_Click);
        // 
        // button30
        // 
        this->button30->BackColor = System::Drawing::Color::DarkGray;
        this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button30->Location = System::Drawing::Point(22, 260);
        this->button30->Name = L"button30";
        this->button30->Size = System::Drawing::Size(109, 39);
        this->button30->TabIndex = 7;
        this->button30->Text = L"BACK";
        this->button30->UseVisualStyleBackColor = false;
        this->button30->Click += gcnew System::EventHandler(this, &Form1::button30_Click);
        // 
        // label38
        // 
        this->label38->AutoSize = true;
        this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label38->Location = System::Drawing::Point(359, 55);
        this->label38->Name = L"label38";
        this->label38->Size = System::Drawing::Size(203, 24);
        this->label38->TabIndex = 6;
        this->label38->Text = L"DETAILS OF CASES";
        this->label38->Click += gcnew System::EventHandler(this, &Form1::label38_Click);
        // 
        // dataGridView1
        // 
        this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
        this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView1->Location = System::Drawing::Point(224, 85);
        this->dataGridView1->Name = L"dataGridView1";
        this->dataGridView1->Size = System::Drawing::Size(429, 178);
        this->dataGridView1->TabIndex = 5;
        this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
        // 
        // button16
        // 
        this->button16->BackColor = System::Drawing::Color::DarkGray;
        this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button16->Location = System::Drawing::Point(34, 203);
        this->button16->Name = L"button16";
        this->button16->Size = System::Drawing::Size(159, 25);
        this->button16->TabIndex = 4;
        this->button16->Text = L"SHOW COURT DETAILS ";
        this->button16->UseVisualStyleBackColor = false;
        // 
        // button15
        // 
        this->button15->BackColor = System::Drawing::Color::DarkGray;
        this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button15->Location = System::Drawing::Point(34, 162);
        this->button15->Name = L"button15";
        this->button15->Size = System::Drawing::Size(159, 25);
        this->button15->TabIndex = 3;
        this->button15->Text = L"SHOW OFFICER DETAILS";
        this->button15->UseVisualStyleBackColor = false;
        // 
        // button14
        // 
        this->button14->BackColor = System::Drawing::Color::DarkGray;
        this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button14->Location = System::Drawing::Point(34, 115);
        this->button14->Name = L"button14";
        this->button14->Size = System::Drawing::Size(159, 25);
        this->button14->TabIndex = 2;
        this->button14->Text = L"SHOW ACCUSED";
        this->button14->UseVisualStyleBackColor = false;
        // 
        // button13
        // 
        this->button13->BackColor = System::Drawing::Color::Silver;
        this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button13->ForeColor = System::Drawing::Color::Black;
        this->button13->Location = System::Drawing::Point(34, 72);
        this->button13->Name = L"button13";
        this->button13->Size = System::Drawing::Size(159, 25);
        this->button13->TabIndex = 1;
        this->button13->Text = L"SHOW COMPLAINTS";
        this->button13->UseVisualStyleBackColor = false;
        this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
        // 
        // label37
        // 
        this->label37->AutoSize = true;
        this->label37->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->label37->Location = System::Drawing::Point(195, 16);
        this->label37->Name = L"label37";
        this->label37->Size = System::Drawing::Size(264, 39);
        this->label37->TabIndex = 0;
        this->label37->Text = L"FIR-CASES-DATA";
        this->label37->Click += gcnew System::EventHandler(this, &Form1::label37_Click);
        // 
        // Form1
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::SystemColors::ScrollBar;
        this->ClientSize = System::Drawing::Size(688, 438);
        this->Controls->Add(this->label1);
        this->Controls->Add(this->tabControl1);
        this->Name = L"Form1";
        this->Text = L"Form1";
        this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
        this->tabPage8->ResumeLayout(false);
        this->tabPage8->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
        this->tabPage7->ResumeLayout(false);
        this->tabPage7->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
        this->tabPage4->ResumeLayout(false);
        this->tabPage4->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
        this->tabPage3->ResumeLayout(false);
        this->tabPage3->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
        this->tabPage2->ResumeLayout(false);
        this->tabPage2->PerformLayout();
        this->tabControl1->ResumeLayout(false);
        this->tabPage9->ResumeLayout(false);
        this->tabPage9->PerformLayout();
        this->tabPage1->ResumeLayout(false);
        this->tabPage1->PerformLayout();
        this->tabPage6->ResumeLayout(false);
        this->tabPage6->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
        this->ResumeLayout(false);
        this->PerformLayout();

    }
#pragma endregion

   // You can call the functions at a button click. If you prefer, 
    // you can call them by clicking a menu item.
 

  private: System::Void button_plus_1_Click(System::Object^ sender, System::EventArgs^ e)
  {
  }

  private: System::Void button_plus_2_Click(System::Object^ sender, System::EventArgs^ e)
  {
  }
  private: System::Void out_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
  }
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    label9->Text = "Record saved successfully!";
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedTab = tabPage3;
    tabControl1->SelectedTab = tabPage4;
   
    tabControl1->SelectedTab = tabPage6;
    tabControl1->SelectedTab = tabPage7;
    tabControl1->SelectedTab = tabPage8;


    tabControl1->TabPages->Add(tabPage3);
    tabControl1->TabPages->Add(tabPage4);
  
    tabControl1->TabPages->Add(tabPage6);
    tabControl1->TabPages->Add(tabPage7);
    tabControl1->TabPages->Add(tabPage8);

    tabControl1->TabPages->Remove(tabPage1);


}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage6_Click(System::Object^ sender, System::EventArgs^ e) {
}
       //update button
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
    try {
        if (dataGridView6->SelectedRows->Count > 0) {
         
            int selectedIndex = dataGridView3->SelectedRows[0]->Index;
            int evidenceID = Convert::ToInt32(dataGridView3->Rows[selectedIndex]->Cells[0]->Value);
            textBox18->Text = evidenceID.ToString();
            textBox18->ReadOnly = true;

            // Get updated values from TextBoxes
            String^ evidenceName = textBox16->Text;    // Evidence Name
            String^ filename = textBox19->Text;        // Filename
            String^ description = textBox17->Text;     // Description

            // Validation to prevent empty fields
            if (evidenceName == "" || filename == "" || description == "") {
                MessageBox::Show("Please fill all fields.", "Validation Error");
                return;
            }

            // Update the DataGridView
            dataGridView3->Rows[selectedIndex]->Cells[1]->Value = evidenceName; // Update Evidence Name
            dataGridView3->Rows[selectedIndex]->Cells[2]->Value = filename;     // Update Filename
            dataGridView3->Rows[selectedIndex]->Cells[3]->Value = description;  // Update Description

            // Call the UpdateEvidence method to save changes
            Evidence::UpdateEvidence(evidenceID, evidenceName, filename, description);

            MessageBox::Show("Evidence updated successfully!", "Success");
        }
        else {
            MessageBox::Show("No row selected!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    catch (Exception^ ex) {
        MessageBox::Show("Error: " + ex->Message, "Exception");


    }
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    
     System::String^ cnic = textBox1->Text;
    System::String^ phone = textBox3->Text;
    System::String^ pin = textBox2->Text;

    //  user input
    if (cnic == "123456" && phone == "03000" && pin == "123") {
        tabControl1->TabPages->Add(tabPage1);
      tabControl1->SelectedTab = tabPage1;
      tabControl1->TabPages->Remove(tabPage2);
    
    }
    else {
  
        MessageBox::Show("Your information is incorrect!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    }
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->TabPages->Remove(tabPage3);
    tabControl1->TabPages->Remove(tabPage4);

    tabControl1->TabPages->Remove(tabPage6);
    tabControl1->TabPages->Remove(tabPage7);
    tabControl1->TabPages->Remove(tabPage8);
    tabControl1->TabPages->Remove(tabPage9);
    tabControl1->TabPages->Remove(tabPage1);
}
private: System::Void tabPage1_Click_1(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedTab = tabPage1;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
    
    if (!tabControl1->TabPages->Contains(tabPage9)) {
        tabControl1->TabPages->Add(tabPage9);
    }

    // Select tabPage9
    tabControl1->SelectedTab = tabPage9;

    // Remove tabPage1 if it exists
    if (tabControl1->TabPages->Contains(tabPage1)) {
        tabControl1->TabPages->Remove(tabPage1);
    }

    // Remove other unnecessary tabPages (if required)
    if (tabControl1->TabPages->Contains(tabPage8)) {
        tabControl1->TabPages->Remove(tabPage8);
    }
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedTab = tabPage1;
    tabControl1->TabPages->Add(tabPage1);

    tabControl1->SelectedTab = tabPage3;
    tabControl1->SelectedTab = tabPage4;

    tabControl1->SelectedTab = tabPage6;
    tabControl1->SelectedTab = tabPage7;
    tabControl1->SelectedTab = tabPage8;
    tabControl1->SelectedTab = tabPage9;

    tabControl1->TabPages->Remove(tabPage3);
    tabControl1->TabPages->Remove(tabPage4);

    tabControl1->TabPages->Remove(tabPage6);
    tabControl1->TabPages->Remove(tabPage7);
    tabControl1->TabPages->Remove(tabPage8);
    tabControl1->TabPages->Remove(tabPage9);
 
}



private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedTab = tabPage1;
    tabControl1->TabPages->Add(tabPage1);

    tabControl1->SelectedTab = tabPage3;
    tabControl1->SelectedTab = tabPage4;

    tabControl1->SelectedTab = tabPage6;
    tabControl1->SelectedTab = tabPage7;
    tabControl1->SelectedTab = tabPage8;
    tabControl1->SelectedTab = tabPage9;

    tabControl1->TabPages->Remove(tabPage3);
    tabControl1->TabPages->Remove(tabPage4);
 
    tabControl1->TabPages->Remove(tabPage6);
    tabControl1->TabPages->Remove(tabPage7);
    tabControl1->TabPages->Remove(tabPage8);
    tabControl1->TabPages->Remove(tabPage9);
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedTab = tabPage1;
    tabControl1->TabPages->Add(tabPage1);

    tabControl1->SelectedTab = tabPage3;
    tabControl1->SelectedTab = tabPage4;

    tabControl1->SelectedTab = tabPage6;
    tabControl1->SelectedTab = tabPage7;
    tabControl1->SelectedTab = tabPage8;
    tabControl1->SelectedTab = tabPage9;

    tabControl1->TabPages->Remove(tabPage3);
    tabControl1->TabPages->Remove(tabPage4);
 
    tabControl1->TabPages->Remove(tabPage6);
    tabControl1->TabPages->Remove(tabPage7);
    tabControl1->TabPages->Remove(tabPage8);
    tabControl1->TabPages->Remove(tabPage9);
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedTab = tabPage1;
    tabControl1->TabPages->Add(tabPage1);

    tabControl1->SelectedTab = tabPage3;
    tabControl1->SelectedTab = tabPage4;

    tabControl1->SelectedTab = tabPage6;
    tabControl1->SelectedTab = tabPage7;
    tabControl1->SelectedTab = tabPage8;
    tabControl1->SelectedTab = tabPage9;

    tabControl1->TabPages->Remove(tabPage3);
    tabControl1->TabPages->Remove(tabPage4);
  
    tabControl1->TabPages->Remove(tabPage6);
    tabControl1->TabPages->Remove(tabPage7);
    tabControl1->TabPages->Remove(tabPage8);
    tabControl1->TabPages->Remove(tabPage9);
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedTab = tabPage1;
    tabControl1->TabPages->Add(tabPage1);

    tabControl1->SelectedTab = tabPage3;
    tabControl1->SelectedTab = tabPage4;
  
    tabControl1->SelectedTab = tabPage6;
    tabControl1->SelectedTab = tabPage7;
    tabControl1->SelectedTab = tabPage8;
    tabControl1->SelectedTab = tabPage9;

    tabControl1->TabPages->Remove(tabPage3);
    tabControl1->TabPages->Remove(tabPage4);
 
    tabControl1->TabPages->Remove(tabPage6);
    tabControl1->TabPages->Remove(tabPage7);
    tabControl1->TabPages->Remove(tabPage8);
    tabControl1->TabPages->Remove(tabPage9);
}
       private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
           tabControl1->SelectedTab = tabPage1;
           tabControl1->TabPages->Add(tabPage1);

           tabControl1->SelectedTab = tabPage3;
           tabControl1->SelectedTab = tabPage4;
      
           tabControl1->SelectedTab = tabPage6;
           tabControl1->SelectedTab = tabPage7;
           tabControl1->SelectedTab = tabPage8;
           tabControl1->SelectedTab = tabPage9;

           tabControl1->TabPages->Remove(tabPage3);
           tabControl1->TabPages->Remove(tabPage4);

           tabControl1->TabPages->Remove(tabPage6);
           tabControl1->TabPages->Remove(tabPage7);
           tabControl1->TabPages->Remove(tabPage8);
           tabControl1->TabPages->Remove(tabPage9);
       }
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedTab = tabPage1;
    tabControl1->TabPages->Add(tabPage1);

    tabControl1->SelectedTab = tabPage3;
    tabControl1->SelectedTab = tabPage4;

    tabControl1->SelectedTab = tabPage6;
    tabControl1->SelectedTab = tabPage7;
    tabControl1->SelectedTab = tabPage8;
    tabControl1->SelectedTab = tabPage9;

    tabControl1->TabPages->Remove(tabPage3);
    tabControl1->TabPages->Remove(tabPage4);
 
    tabControl1->TabPages->Remove(tabPage6);
    tabControl1->TabPages->Remove(tabPage7);
    tabControl1->TabPages->Remove(tabPage8);
    tabControl1->TabPages->Remove(tabPage9);
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
    System::String^ officer_name = textBox24->Text;
    System::String^ password = textBox25->Text;
   
    //  user input
    if (officer_name == "sakina" && password == "123") {
        tabControl1->TabPages->Add(tabPage6);
        tabControl1->SelectedTab = tabPage6;
 

    }
    else {

        MessageBox::Show("Your information is incorrect!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
   
}


private: System::Void tabPage8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
{
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {

    tabControl1->SelectedTab = tabPage9;

    MessageBox::Show("You have been logged out successfully.", "Logout", MessageBoxButtons::OK, MessageBoxIcon::Information);
}


private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView5_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void dataGridView4_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    try {
        // Get values from TextBoxes
        int id;
        if (!Int32::TryParse(textBox12->Text, id)) {
           MessageBox::Show("Please enter a valid Accused ID.", "Validation Error");
            return;
       }

        String^ name = textBox10->Text;    // Get Name
        String^ cnic = textBox11->Text; // Get CNIC
        String^ details = textBox5->Text; // Get Accusation Details

        // Validation to prevent empty fields
        if (name == "" || cnic == "" || details == "") {
            MessageBox::Show("Please fill all fields.", "Validation Error");
            return;
        }

        // Call the SaveAccused method from Accused class
        Accused::SaveAccused(id, name, cnic, details);

        // Optionally, display the saved data immediately in DataGridView
        Accused::DisplayAccused(dataGridView5);

        // Clear input fields after saving
        textBox10->Clear();
        textBox11->Clear();
        textBox12->Clear();
        textBox5->Clear();
    }
    catch (Exception^ ex) {
        MessageBox::Show("Error: " + ex->Message, "Exception");
    }

}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
   Evidence::DisplayEvidence(dataGridView3);

  
}


private: System::Void tabPage4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label31_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label38_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label37_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox19_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
       //save button evidence
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
    try {
        // Get values from TextBoxes
        int id;
        if (!Int32::TryParse(textBox18->Text, id)) {
            MessageBox::Show("Please enter a valid Evidence ID.", "Validation Error");
            return;
        }

        String^ name = textBox16->Text;    // Get Name
        String^ filename = textBox19->Text; // Get FileName
        String^ details = textBox17->Text; // Get Evidence Details

       
        if (name == "" || filename == "" || details == "") {
            MessageBox::Show("Please fill all fields.", "Validation Error");
            return;
        }

  
        Evidence::SaveEvidence(id, name, filename, details);

        textBox18->Clear();
        textBox16->Clear();
        textBox19->Clear();
        textBox17->Clear();
    }
    catch (Exception^ ex) {
        MessageBox::Show("Error: " + ex->Message, "Exception");
    }
}

private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
    if (dataGridView6->SelectedRows->Count > 0) {
        // Get the index of the selected row
        int selectedIndex = dataGridView6->SelectedRows[0]->Index;

        // Get the ComplaintID of the selected row (assuming it's in the first column)
        int complaintID = Convert::ToInt32(dataGridView6->Rows[selectedIndex]->Cells[0]->Value); // Assuming ComplaintID is in the first column

        // Remove the row from the DataGridView
        dataGridView6->Rows->RemoveAt(selectedIndex);

        // Now, delete the corresponding complaint from the database using SQL
        //DeleteComplaintFromDatabase(complaintID); // Call the method to delete from the DB
        Complaint::DeleteComplaint(complaintID);
    }
    else {
        MessageBox::Show("No row selected!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

private: System::Void button3_Click(System::Object ^ sender, System::EventArgs ^ e) {
    try {
        // Get values from TextBoxes
        int id;
        if (!Int32::TryParse(textBox8->Text, id)) {
            MessageBox::Show("Please enter a valid Complaint ID.", "Validation Error");
            return;
        }

        String^ name = textBox7->Text;    // Get Name
        String^ cnic = textBox9->Text; // Get CNIC
        String^ details = textBox4->Text; // Get Complaint Details

        // Validation to prevent empty fields
        if (name == "" || cnic == "" || details == "") {
            MessageBox::Show("Please fill all fields.", "Validation Error");
            return;
        }

        // Call the SaveComplaint method from Complaint class
        Complaint::SaveComplaint(id, name, cnic, details);

        // Optionally, display the saved data immediately in DataGridView
        Complaint::DisplayComplaints(dataGridView6);

        // Clear input fields after saving
        textBox8->Clear();
        textBox7->Clear();
        textBox9->Clear();
        textBox4->Clear();

    }
    catch (Exception^ ex) {
        MessageBox::Show("Error: " + ex->Message, "Exception");
    }
}
    
 

private: System::Void dataGridView6_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
    if (dataGridView2->SelectedRows->Count > 0) {
        
        int selectedIndex = dataGridView2->SelectedRows[0]->Index;

       
        int CaseID = Convert::ToInt32(dataGridView2->Rows[selectedIndex]->Cells[0]->Value); // Assuming ComplaintID is in the first column

        // Remove the row from the DataGridView
        dataGridView2->Rows->RemoveAt(selectedIndex);

        
       Court::DeleteCase(CaseID);
    }
    else {
        MessageBox::Show("No row selected!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
    Accused::DisplayAccused(dataGridView5);
   
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    Complaint::DisplayComplaints(dataGridView6);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
    if (dataGridView6->SelectedRows->Count > 0) {
        // Get the index of the selected row
        int selectedIndex = dataGridView6->SelectedRows[0]->Index;

        // Get the ComplaintID of the selected row (assuming it's in the first column)
        int complaintID = Convert::ToInt32(dataGridView6->Rows[selectedIndex]->Cells[0]->Value); // Assuming ComplaintID is in the first column
        textBox8->Text = complaintID.ToString();
        textBox8->ReadOnly = true;

        String^ name = textBox7->Text;    // Get Name
        String^ cnic = textBox9->Text; // Get CNIC
        String^ details = textBox4->Text; // Get Complaint Details

        
        dataGridView6->Rows[selectedIndex]->Cells[1]->Value = name; // Update Name (2nd column)
        dataGridView6->Rows[selectedIndex]->Cells[2]->Value = cnic; // Update CNIC_No (3rd column)
        dataGridView6->Rows[selectedIndex]->Cells[3]->Value = details; // Update ComplaintDetails (4th column)

        Complaint::UpdateComplaint(complaintID, name, cnic, details);
        
    }
    else {
        MessageBox::Show("No row selected!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
      
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
       //ACCUSED UPDATE BUTTON
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {

    try {
        if (dataGridView5->SelectedRows->Count > 0) {
            // Get the index of the selected row
            int selectedIndex = dataGridView5->SelectedRows[0]->Index;

            // Get the Accused ID of the selected row (assuming it's in the first column)
            int accusedID = Convert::ToInt32(dataGridView5->Rows[selectedIndex]->Cells[0]->Value); // Assuming Accused ID is in the first column
            textBox12->Text = accusedID.ToString();
            textBox12->ReadOnly = true; 

       String^ name = textBox10->Text;    
            String^ cnic = textBox11->Text;    
            String^ details = textBox5->Text;  

           
            dataGridView5->Rows[selectedIndex]->Cells[1]->Value = name; // Update Name (2nd column)
            dataGridView5->Rows[selectedIndex]->Cells[2]->Value = cnic; // Update CNIC_No (3rd column)
            dataGridView5->Rows[selectedIndex]->Cells[3]->Value = details; // Update AccusationDetails (4th column)

            // Call the UpdateAccused method to update the record in the list (and file if needed)
            Accused::UpdateAccused(accusedID, name, cnic, details);

            // Clear the input fields if needed (or you can leave them filled for further editing)
            textBox11->Clear();
            textBox12->Clear();
            textBox5->Clear();
        }
        else {
            MessageBox::Show("No row selected!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    catch (Exception^ ex) {
        MessageBox::Show("Error: " + ex->Message, "Exception");
    
}

}
       //ACCUSED DELETE
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
    if (dataGridView5->SelectedRows->Count > 0) {
     int selectedIndex = dataGridView5->SelectedRows[0]->Index;
     int AccusedID = Convert::ToInt32(dataGridView5->Rows[selectedIndex]->Cells[0]->Value); 
       dataGridView5->Rows->RemoveAt(selectedIndex);
       Accused::DeleteAccused(AccusedID);
    }
    else {
        MessageBox::Show("No row selected!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void textBox21_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
       //save button of court
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
    try {
        // Get values from TextBoxes
        int caseID;
        if (!Int32::TryParse(textBox23->Text, caseID)) {
            MessageBox::Show("Please enter a valid Case ID.", "Validation Error");
            return;
        }

        String^ file = textBox21->Text; // Get File Name
        DateTime hearingDate;
        if (!DateTime::TryParse(textBox20->Text, hearingDate)) {
            MessageBox::Show("Please enter a valid Hearing Date (e.g., YYYY-MM-DD).", "Validation Error");
            return;
        }
        String^ judgeName = textBox22->Text; // Get Judge Name

        // Validation to prevent empty fields
        if (file == "" || judgeName == "") {
            MessageBox::Show("Please fill all fields.", "Validation Error");
            return;
        }

        // Call the SaveCase method from Court class
        Court::SaveCase(caseID, file, hearingDate, judgeName);

        // Optionally, display the saved data immediately in DataGridView
        Court::DisplayCase(dataGridView2);

        // Clear input fields after saving
        textBox23->Clear();
        textBox21->Clear();
        textBox20->Clear();
        textBox22->Clear();
    }
    catch (Exception^ ex) {
        MessageBox::Show("Error: " + ex->Message, "Exception");
    }

}
private: System::Void textBox16_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
       //delete button
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
    if (dataGridView3->SelectedRows->Count > 0) {
         int selectedIndex = dataGridView3->SelectedRows[0]->Index;
int EvidenceID = Convert::ToInt32(dataGridView3->Rows[selectedIndex]->Cells[0]->Value); 
       
        dataGridView3->Rows->RemoveAt(selectedIndex);
        Evidence::DeleteEvidence(EvidenceID);
    }
    else {
        MessageBox::Show("No row selected!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
    try {
 
        if (dataGridView2->SelectedRows->Count > 0) {
            // Get the index of the selected row
            int selectedIndex = dataGridView2->SelectedRows[0]->Index;

            // Get the CaseID of the selected row (assuming it's in the first column)
            int caseID = Convert::ToInt32(dataGridView2->Rows[selectedIndex]->Cells[0]->Value); // Assuming CaseID is in the first column
            textBox23->Text = caseID.ToString();
            textBox23->ReadOnly = true; // Prevent editing of CaseID

            // Get updated values from TextBoxes
            String^ fileName = textBox21->Text;    // File Name
            DateTime hearingDate;
            if (!DateTime::TryParse(textBox20->Text, hearingDate)) {
                MessageBox::Show("Please enter a valid Hearing Date (e.g., YYYY-MM-DD).", "Validation Error");
                return;
            }
            String^ judgeName = textBox22->Text;   // Judge Name

            // Validation to ensure fields are not empty
            if (fileName == "" || judgeName == "") {
                MessageBox::Show("Please fill all fields.", "Validation Error");
                return;
            }

            // Update the selected row in DataGridView
            dataGridView2->Rows[selectedIndex]->Cells[1]->Value = fileName; // Update File Name (2nd column)
            dataGridView2->Rows[selectedIndex]->Cells[2]->Value = hearingDate.ToString(); // Update Hearing Date (3rd column)
            dataGridView2->Rows[selectedIndex]->Cells[3]->Value = judgeName; // Update Judge Name (4th column)

            // Call the UpdateCase method from Court class
            Court::UpdateCase(caseID, fileName, hearingDate, judgeName);

            // Optionally, clear input fields after updating
            textBox23->Clear();
            textBox21->Clear();
            textBox20->Clear();
            textBox22->Clear();
            textBox23->ReadOnly = false; // Allow CaseID editing for next operation
        }
        else {
            MessageBox::Show("No row selected!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    catch (Exception^ ex) {
        MessageBox::Show("Error: " + ex->Message, "Exception");
    }


}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
   Court::DisplayCase(dataGridView2);
}
private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e) {
   
    String^ searchVal = textBox6->Text;
    int c_id;
    Int32::TryParse(searchVal, c_id);
    MessageBox::Show("id"+c_id);
    Complaint::SearchComplaints(dataGridView6, c_id);
}
private: System::Void button8_Click_2(System::Object^ sender, System::EventArgs^ e) {
    String^ searchVal = textBox6->Text;
    int c_id;
    Int32::TryParse(searchVal, c_id);
    Complaint::SearchComplaints(dataGridView6, c_id);
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage9_Click(System::Object^ sender, System::EventArgs^ e) {
}
};

}; 
