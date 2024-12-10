#pragma once

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::TextBox^ textBox9;
    private: System::Windows::Forms::Panel^ panel4;
    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::TextBox^ textBox10;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::TextBox^ textBox11;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::TextBox^ textBox12;
    private: System::Windows::Forms::ComboBox^ comboBox2;
    private: System::Windows::Forms::TextBox^ textBox13;
    private: System::Windows::Forms::TextBox^ textBox14;
    private: System::Windows::Forms::TextBox^ textBox15;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::Label^ label26;
    private: System::Windows::Forms::Panel^ panel5;
    private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::Label^ label28;
    private: System::Windows::Forms::TabPage^ tabPage6;
    private: System::Windows::Forms::TextBox^ textBox16;
    private: System::Windows::Forms::Label^ label29;
    private: System::Windows::Forms::ComboBox^ comboBox3;
    private: System::Windows::Forms::Label^ label30;
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Modal;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Brand;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Color;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Milage;
    private: System::Windows::Forms::Button^ button10;
    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::Button^ button12;
    private: System::Windows::Forms::Button^ button13;
    private: System::Windows::Forms::TextBox^ textBox17;
    private: System::Windows::Forms::TextBox^ textBox18;
    private: System::Windows::Forms::TextBox^ textBox19;
    private: System::Windows::Forms::TextBox^ textBox20;
    private: System::Windows::Forms::Label^ label31;
    private: System::Windows::Forms::Label^ label32;
    private: System::Windows::Forms::Label^ label33;
    private: System::Windows::Forms::Label^ label34;
    private: System::Windows::Forms::Panel^ panel6;
    private: System::Windows::Forms::Label^ label35;
    private: System::Windows::Forms::Label^ label36;
    private: System::Windows::Forms::TabPage^ tabPage7;
    private: System::Windows::Forms::TextBox^ textBox21;
    private: System::Windows::Forms::Label^ label37;
    private: System::Windows::Forms::ComboBox^ comboBox4;
    private: System::Windows::Forms::Label^ label38;
    private: System::Windows::Forms::DataGridView^ dataGridView2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
    private: System::Windows::Forms::Button^ button14;
    private: System::Windows::Forms::Button^ button15;
    private: System::Windows::Forms::Button^ button16;
    private: System::Windows::Forms::Button^ button17;
    private: System::Windows::Forms::TextBox^ textBox22;
    private: System::Windows::Forms::TextBox^ textBox23;
    private: System::Windows::Forms::TextBox^ textBox24;
    private: System::Windows::Forms::TextBox^ textBox25;
    private: System::Windows::Forms::Label^ label39;
    private: System::Windows::Forms::Label^ label40;
    private: System::Windows::Forms::Label^ label41;
    private: System::Windows::Forms::Label^ label42;
    private: System::Windows::Forms::Panel^ panel7;
    private: System::Windows::Forms::Label^ label43;
    private: System::Windows::Forms::Label^ label44;
    private: System::Windows::Forms::TabPage^ tabPage8;
    private: System::Windows::Forms::DataGridView^ dataGridView3;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Email;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Phonenumber;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Adress;
    private: System::Windows::Forms::Button^ button18;
    private: System::Windows::Forms::Button^ button19;
    private: System::Windows::Forms::Button^ button20;
    private: System::Windows::Forms::Button^ button21;
    private: System::Windows::Forms::TextBox^ textBox26;
    private: System::Windows::Forms::TextBox^ textBox27;
    private: System::Windows::Forms::TextBox^ textBox28;
    private: System::Windows::Forms::TextBox^ textBox29;
    private: System::Windows::Forms::Label^ label45;
    private: System::Windows::Forms::Label^ label46;
    private: System::Windows::Forms::Label^ label47;
    private: System::Windows::Forms::Label^ label48;
    private: System::Windows::Forms::Panel^ panel8;
    private: System::Windows::Forms::Label^ label49;
    private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::TabPage^ tabPage9;
private: System::Windows::Forms::ComboBox^ comboBox5;
private: System::Windows::Forms::DataGridView^ dataGridView4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ DriverID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Age;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Licence;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
private: System::Windows::Forms::TextBox^ textBox30;
private: System::Windows::Forms::TextBox^ textBox31;
private: System::Windows::Forms::TextBox^ textBox32;
private: System::Windows::Forms::TextBox^ textBox33;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::TabPage^ tabPage10;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::Label^ label59;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
            this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
            this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            this->textBox13 = (gcnew System::Windows::Forms::TextBox());
            this->textBox14 = (gcnew System::Windows::Forms::TextBox());
            this->textBox15 = (gcnew System::Windows::Forms::TextBox());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
            this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
            this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
            this->textBox16 = (gcnew System::Windows::Forms::TextBox());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->Modal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Brand = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Color = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Milage = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->textBox17 = (gcnew System::Windows::Forms::TextBox());
            this->textBox18 = (gcnew System::Windows::Forms::TextBox());
            this->textBox19 = (gcnew System::Windows::Forms::TextBox());
            this->textBox20 = (gcnew System::Windows::Forms::TextBox());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->textBox21 = (gcnew System::Windows::Forms::TextBox());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->button14 = (gcnew System::Windows::Forms::Button());
            this->button15 = (gcnew System::Windows::Forms::Button());
            this->button16 = (gcnew System::Windows::Forms::Button());
            this->button17 = (gcnew System::Windows::Forms::Button());
            this->textBox22 = (gcnew System::Windows::Forms::TextBox());
            this->textBox23 = (gcnew System::Windows::Forms::TextBox());
            this->textBox24 = (gcnew System::Windows::Forms::TextBox());
            this->textBox25 = (gcnew System::Windows::Forms::TextBox());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->label43 = (gcnew System::Windows::Forms::Label());
            this->label44 = (gcnew System::Windows::Forms::Label());
            this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
            this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Phonenumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Adress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->button18 = (gcnew System::Windows::Forms::Button());
            this->button19 = (gcnew System::Windows::Forms::Button());
            this->button20 = (gcnew System::Windows::Forms::Button());
            this->button21 = (gcnew System::Windows::Forms::Button());
            this->textBox26 = (gcnew System::Windows::Forms::TextBox());
            this->textBox27 = (gcnew System::Windows::Forms::TextBox());
            this->textBox28 = (gcnew System::Windows::Forms::TextBox());
            this->textBox29 = (gcnew System::Windows::Forms::TextBox());
            this->label45 = (gcnew System::Windows::Forms::Label());
            this->label46 = (gcnew System::Windows::Forms::Label());
            this->label47 = (gcnew System::Windows::Forms::Label());
            this->label48 = (gcnew System::Windows::Forms::Label());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->label49 = (gcnew System::Windows::Forms::Label());
            this->label50 = (gcnew System::Windows::Forms::Label());
            this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
            this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
            this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
            this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
            this->DriverID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Licence = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->textBox30 = (gcnew System::Windows::Forms::TextBox());
            this->textBox31 = (gcnew System::Windows::Forms::TextBox());
            this->textBox32 = (gcnew System::Windows::Forms::TextBox());
            this->textBox33 = (gcnew System::Windows::Forms::TextBox());
            this->label51 = (gcnew System::Windows::Forms::Label());
            this->label52 = (gcnew System::Windows::Forms::Label());
            this->label53 = (gcnew System::Windows::Forms::Label());
            this->label54 = (gcnew System::Windows::Forms::Label());
            this->label55 = (gcnew System::Windows::Forms::Label());
            this->panel9 = (gcnew System::Windows::Forms::Panel());
            this->label56 = (gcnew System::Windows::Forms::Label());
            this->label57 = (gcnew System::Windows::Forms::Label());
            this->button22 = (gcnew System::Windows::Forms::Button());
            this->button23 = (gcnew System::Windows::Forms::Button());
            this->panel10 = (gcnew System::Windows::Forms::Panel());
            this->label58 = (gcnew System::Windows::Forms::Label());
            this->label59 = (gcnew System::Windows::Forms::Label());
            this->tabControl1->SuspendLayout();
            this->tabPage1->SuspendLayout();
            this->tabPage2->SuspendLayout();
            this->tabPage3->SuspendLayout();
            this->tabPage4->SuspendLayout();
            this->tabPage5->SuspendLayout();
            this->panel1->SuspendLayout();
            this->panel2->SuspendLayout();
            this->panel3->SuspendLayout();
            this->panel4->SuspendLayout();
            this->panel5->SuspendLayout();
            this->tabPage6->SuspendLayout();
            this->tabPage7->SuspendLayout();
            this->tabPage8->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->panel6->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
            this->panel7->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
            this->panel8->SuspendLayout();
            this->tabPage9->SuspendLayout();
            this->tabPage10->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
            this->panel9->SuspendLayout();
            this->panel10->SuspendLayout();
            this->SuspendLayout();
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->tabPage1);
            this->tabControl1->Controls->Add(this->tabPage2);
            this->tabControl1->Controls->Add(this->tabPage3);
            this->tabControl1->Controls->Add(this->tabPage4);
            this->tabControl1->Controls->Add(this->tabPage5);
            this->tabControl1->Controls->Add(this->tabPage6);
            this->tabControl1->Controls->Add(this->tabPage7);
            this->tabControl1->Controls->Add(this->tabPage8);
            this->tabControl1->Controls->Add(this->tabPage9);
            this->tabControl1->Controls->Add(this->tabPage10);
            this->tabControl1->Location = System::Drawing::Point(3, 12);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(1055, 431);
            this->tabControl1->TabIndex = 0;
            // 
            // tabPage1
            // 
            this->tabPage1->Controls->Add(this->button2);
            this->tabPage1->Controls->Add(this->button1);
            this->tabPage1->Controls->Add(this->textBox2);
            this->tabPage1->Controls->Add(this->textBox1);
            this->tabPage1->Controls->Add(this->label4);
            this->tabPage1->Controls->Add(this->label3);
            this->tabPage1->Controls->Add(this->panel1);
            this->tabPage1->Location = System::Drawing::Point(4, 29);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3);
            this->tabPage1->Size = System::Drawing::Size(1047, 398);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"tabPage1";
            this->tabPage1->UseVisualStyleBackColor = true;
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->button5);
            this->tabPage2->Controls->Add(this->button4);
            this->tabPage2->Controls->Add(this->button3);
            this->tabPage2->Controls->Add(this->button6);
            this->tabPage2->Controls->Add(this->button7);
            this->tabPage2->Controls->Add(this->panel2);
            this->tabPage2->Location = System::Drawing::Point(4, 29);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3);
            this->tabPage2->Size = System::Drawing::Size(1047, 398);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"tabPage2";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // tabPage3
            // 
            this->tabPage3->Controls->Add(this->button8);
            this->tabPage3->Controls->Add(this->button9);
            this->tabPage3->Controls->Add(this->textBox6);
            this->tabPage3->Controls->Add(this->textBox5);
            this->tabPage3->Controls->Add(this->textBox4);
            this->tabPage3->Controls->Add(this->textBox3);
            this->tabPage3->Controls->Add(this->textBox7);
            this->tabPage3->Controls->Add(this->textBox8);
            this->tabPage3->Controls->Add(this->label9);
            this->tabPage3->Controls->Add(this->label7);
            this->tabPage3->Controls->Add(this->label8);
            this->tabPage3->Controls->Add(this->label10);
            this->tabPage3->Controls->Add(this->label11);
            this->tabPage3->Controls->Add(this->label12);
            this->tabPage3->Controls->Add(this->panel3);
            this->tabPage3->Location = System::Drawing::Point(4, 29);
            this->tabPage3->Name = L"tabPage3";
            this->tabPage3->Padding = System::Windows::Forms::Padding(3);
            this->tabPage3->Size = System::Drawing::Size(1047, 398);
            this->tabPage3->TabIndex = 2;
            this->tabPage3->Text = L"tabPage3";
            this->tabPage3->UseVisualStyleBackColor = true;
            // 
            // tabPage4
            // 
            this->tabPage4->Controls->Add(this->textBox9);
            this->tabPage4->Controls->Add(this->panel4);
            this->tabPage4->Controls->Add(this->label15);
            this->tabPage4->Controls->Add(this->label20);
            this->tabPage4->Controls->Add(this->dateTimePicker1);
            this->tabPage4->Controls->Add(this->label19);
            this->tabPage4->Controls->Add(this->comboBox1);
            this->tabPage4->Controls->Add(this->label18);
            this->tabPage4->Controls->Add(this->textBox10);
            this->tabPage4->Controls->Add(this->label17);
            this->tabPage4->Controls->Add(this->textBox11);
            this->tabPage4->Controls->Add(this->label16);
            this->tabPage4->Controls->Add(this->textBox12);
            this->tabPage4->Location = System::Drawing::Point(4, 29);
            this->tabPage4->Name = L"tabPage4";
            this->tabPage4->Padding = System::Windows::Forms::Padding(3);
            this->tabPage4->Size = System::Drawing::Size(1047, 398);
            this->tabPage4->TabIndex = 3;
            this->tabPage4->Text = L"tabPage4";
            this->tabPage4->UseVisualStyleBackColor = true;
            // 
            // tabPage5
            // 
            this->tabPage5->Controls->Add(this->comboBox2);
            this->tabPage5->Controls->Add(this->textBox13);
            this->tabPage5->Controls->Add(this->textBox14);
            this->tabPage5->Controls->Add(this->textBox15);
            this->tabPage5->Controls->Add(this->label23);
            this->tabPage5->Controls->Add(this->label24);
            this->tabPage5->Controls->Add(this->label25);
            this->tabPage5->Controls->Add(this->label26);
            this->tabPage5->Controls->Add(this->panel5);
            this->tabPage5->Location = System::Drawing::Point(4, 29);
            this->tabPage5->Name = L"tabPage5";
            this->tabPage5->Padding = System::Windows::Forms::Padding(3);
            this->tabPage5->Size = System::Drawing::Size(1047, 398);
            this->tabPage5->TabIndex = 4;
            this->tabPage5->Text = L"tabPage5";
            this->tabPage5->UseVisualStyleBackColor = true;
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::SystemColors::Highlight;
            this->button2->Location = System::Drawing::Point(547, 328);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(122, 50);
            this->button2->TabIndex = 21;
            this->button2->Text = L"Exit";
            this->button2->UseVisualStyleBackColor = false;
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::SystemColors::Highlight;
            this->button1->Location = System::Drawing::Point(157, 328);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(122, 50);
            this->button1->TabIndex = 20;
            this->button1->Text = L"LogIn";
            this->button1->UseVisualStyleBackColor = false;
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(340, 249);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(196, 26);
            this->textBox2->TabIndex = 19;
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(340, 186);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(196, 26);
            this->textBox1->TabIndex = 18;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(189, 249);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(108, 27);
            this->label4->TabIndex = 17;
            this->label4->Text = L"Password:";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(184, 186);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(113, 27);
            this->label3->TabIndex = 16;
            this->label3->Text = L"Username:";
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::SystemColors::Highlight;
            this->panel1->Controls->Add(this->label2);
            this->panel1->Controls->Add(this->label1);
            this->panel1->Location = System::Drawing::Point(0, -1);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(910, 128);
            this->panel1->TabIndex = 15;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(324, 66);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(134, 25);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Admin Panel";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(195, 16);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(391, 32);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Car Rental Mangment System";
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::SystemColors::Highlight;
            this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button5->Location = System::Drawing::Point(495, 338);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(195, 48);
            this->button5->TabIndex = 19;
            this->button5->Text = L"Add Driver";
            this->button5->UseVisualStyleBackColor = false;
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::SystemColors::Highlight;
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->Location = System::Drawing::Point(98, 338);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(195, 48);
            this->button4->TabIndex = 18;
            this->button4->Text = L"Manage Customer";
            this->button4->UseVisualStyleBackColor = false;
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::SystemColors::Highlight;
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->Location = System::Drawing::Point(734, 400);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(86, 48);
            this->button3->TabIndex = 17;
            this->button3->Text = L"Logout";
            this->button3->UseVisualStyleBackColor = false;
            // 
            // button6
            // 
            this->button6->BackColor = System::Drawing::SystemColors::Highlight;
            this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->Location = System::Drawing::Point(495, 200);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(195, 48);
            this->button6->TabIndex = 16;
            this->button6->Text = L"Book Car";
            this->button6->UseVisualStyleBackColor = false;
            // 
            // button7
            // 
            this->button7->BackColor = System::Drawing::SystemColors::Highlight;
            this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button7->Location = System::Drawing::Point(98, 200);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(195, 48);
            this->button7->TabIndex = 15;
            this->button7->Text = L"Manage Cars";
            this->button7->UseVisualStyleBackColor = false;
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::SystemColors::Highlight;
            this->panel2->Controls->Add(this->label5);
            this->panel2->Controls->Add(this->label6);
            this->panel2->Location = System::Drawing::Point(3, 3);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(907, 108);
            this->panel2->TabIndex = 14;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(336, 62);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(184, 25);
            this->label5->TabIndex = 1;
            this->label5->Text = L"Admin Dashboard";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(235, 15);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(391, 32);
            this->label6->TabIndex = 0;
            this->label6->Text = L"Car Rental Mangment System";
            // 
            // button8
            // 
            this->button8->BackColor = System::Drawing::SystemColors::Highlight;
            this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button8->Location = System::Drawing::Point(432, 228);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(195, 48);
            this->button8->TabIndex = 66;
            this->button8->Text = L"Reset";
            this->button8->UseVisualStyleBackColor = false;
            // 
            // button9
            // 
            this->button9->BackColor = System::Drawing::SystemColors::Highlight;
            this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button9->Location = System::Drawing::Point(432, 145);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(195, 48);
            this->button9->TabIndex = 65;
            this->button9->Text = L"Confirm Payment";
            this->button9->UseVisualStyleBackColor = false;
            // 
            // textBox6
            // 
            this->textBox6->Location = System::Drawing::Point(242, 145);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(138, 26);
            this->textBox6->TabIndex = 64;
            // 
            // textBox5
            // 
            this->textBox5->Location = System::Drawing::Point(242, 183);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(138, 26);
            this->textBox5->TabIndex = 63;
            // 
            // textBox4
            // 
            this->textBox4->Location = System::Drawing::Point(242, 228);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(138, 26);
            this->textBox4->TabIndex = 62;
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(242, 272);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(138, 26);
            this->textBox3->TabIndex = 61;
            // 
            // textBox7
            // 
            this->textBox7->Location = System::Drawing::Point(242, 316);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(138, 26);
            this->textBox7->TabIndex = 60;
            // 
            // textBox8
            // 
            this->textBox8->Location = System::Drawing::Point(242, 357);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(138, 26);
            this->textBox8->TabIndex = 59;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(30, 352);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(193, 30);
            this->label9->TabIndex = 58;
            this->label9->Text = L"Dropoff Location";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(133, 141);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(78, 30);
            this->label7->TabIndex = 57;
            this->label7->Text = L"Car ID";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(105, 183);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(106, 30);
            this->label8->TabIndex = 56;
            this->label8->Text = L"Driver ID";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(66, 223);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(145, 30);
            this->label10->TabIndex = 55;
            this->label10->Text = L"Customer ID";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(54, 267);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(157, 30);
            this->label11->TabIndex = 54;
            this->label11->Text = L"Booking Date";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(30, 311);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(181, 30);
            this->label12->TabIndex = 53;
            this->label12->Text = L"pickup Location";
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::SystemColors::Highlight;
            this->panel3->Controls->Add(this->label13);
            this->panel3->Controls->Add(this->label14);
            this->panel3->Location = System::Drawing::Point(27, 6);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(828, 102);
            this->panel3->TabIndex = 52;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(293, 63);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(128, 25);
            this->label13->TabIndex = 1;
            this->label13->Text = L"Book a Ride";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(195, 16);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(391, 32);
            this->label14->TabIndex = 0;
            this->label14->Text = L"Car Rental Mangment System";
            // 
            // textBox9
            // 
            this->textBox9->Location = System::Drawing::Point(692, 264);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(138, 26);
            this->textBox9->TabIndex = 70;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->Location = System::Drawing::Point(504, 260);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(169, 30);
            this->label15->TabIndex = 69;
            this->label15->Text = L"Discount Code";
            // 
            // dateTimePicker1
            // 
            this->dateTimePicker1->Location = System::Drawing::Point(285, 307);
            this->dateTimePicker1->Name = L"dateTimePicker1";
            this->dateTimePicker1->Size = System::Drawing::Size(142, 26);
            this->dateTimePicker1->TabIndex = 68;
            // 
            // comboBox1
            // 
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Credit Card", L"Debit Card ", L"Master Card" });
            this->comboBox1->Location = System::Drawing::Point(285, 178);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(138, 28);
            this->comboBox1->TabIndex = 67;
            // 
            // textBox10
            // 
            this->textBox10->Location = System::Drawing::Point(285, 224);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(138, 26);
            this->textBox10->TabIndex = 66;
            // 
            // textBox11
            // 
            this->textBox11->Location = System::Drawing::Point(285, 265);
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(138, 26);
            this->textBox11->TabIndex = 65;
            // 
            // textBox12
            // 
            this->textBox12->Location = System::Drawing::Point(285, 358);
            this->textBox12->Name = L"textBox12";
            this->textBox12->Size = System::Drawing::Size(138, 26);
            this->textBox12->TabIndex = 64;
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(36, 219);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(210, 30);
            this->label16->TabIndex = 63;
            this->label16->Text = L"Card Holder Name";
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->Location = System::Drawing::Point(90, 260);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(156, 30);
            this->label17->TabIndex = 62;
            this->label17->Text = L"Card Number";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->Location = System::Drawing::Point(72, 304);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(174, 30);
            this->label18->TabIndex = 61;
            this->label18->Text = L"Expiration Date";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->Location = System::Drawing::Point(90, 353);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(152, 30);
            this->label19->TabIndex = 60;
            this->label19->Text = L"CVV Number";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label20->Location = System::Drawing::Point(83, 176);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(163, 30);
            this->label20->TabIndex = 59;
            this->label20->Text = L"Payment Type";
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::SystemColors::Highlight;
            this->panel4->Controls->Add(this->label21);
            this->panel4->Controls->Add(this->label22);
            this->panel4->Location = System::Drawing::Point(23, 6);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(828, 105);
            this->panel4->TabIndex = 58;
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->Location = System::Drawing::Point(293, 63);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(165, 25);
            this->label21->TabIndex = 1;
            this->label21->Text = L"Online Payment";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->Location = System::Drawing::Point(195, 16);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(391, 32);
            this->label22->TabIndex = 0;
            this->label22->Text = L"Car Rental Mangment System";
            // 
            // comboBox2
            // 
            this->comboBox2->FormattingEnabled = true;
            this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1*", L"2*", L"3*", L"4*", L"5*" });
            this->comboBox2->Location = System::Drawing::Point(311, 237);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(196, 28);
            this->comboBox2->TabIndex = 52;
            // 
            // textBox13
            // 
            this->textBox13->Location = System::Drawing::Point(311, 139);
            this->textBox13->Name = L"textBox13";
            this->textBox13->Size = System::Drawing::Size(196, 26);
            this->textBox13->TabIndex = 51;
            // 
            // textBox14
            // 
            this->textBox14->Location = System::Drawing::Point(311, 298);
            this->textBox14->Multiline = true;
            this->textBox14->Name = L"textBox14";
            this->textBox14->Size = System::Drawing::Size(338, 103);
            this->textBox14->TabIndex = 50;
            // 
            // textBox15
            // 
            this->textBox15->Location = System::Drawing::Point(311, 186);
            this->textBox15->Name = L"textBox15";
            this->textBox15->Size = System::Drawing::Size(196, 26);
            this->textBox15->TabIndex = 49;
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->Location = System::Drawing::Point(125, 293);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(130, 30);
            this->label23->TabIndex = 48;
            this->label23->Text = L"Comment :";
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->Location = System::Drawing::Point(110, 134);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(145, 30);
            this->label24->TabIndex = 47;
            this->label24->Text = L"Customer ID";
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label25->Location = System::Drawing::Point(60, 181);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(195, 30);
            this->label25->TabIndex = 46;
            this->label25->Text = L"Booking Number";
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->Location = System::Drawing::Point(174, 232);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(81, 30);
            this->label26->TabIndex = 45;
            this->label26->Text = L"Rating";
            // 
            // panel5
            // 
            this->panel5->BackColor = System::Drawing::SystemColors::Highlight;
            this->panel5->Controls->Add(this->label27);
            this->panel5->Controls->Add(this->label28);
            this->panel5->Location = System::Drawing::Point(3, -2);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(907, 117);
            this->panel5->TabIndex = 44;
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label27->Location = System::Drawing::Point(293, 69);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(212, 25);
            this->label27->TabIndex = 1;
            this->label27->Text = L"Customer Mangment";
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label28->Location = System::Drawing::Point(195, 16);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(391, 32);
            this->label28->TabIndex = 0;
            this->label28->Text = L"Car Rental Mangment System";
            // 
            // tabPage6
            // 
            this->tabPage6->Controls->Add(this->textBox16);
            this->tabPage6->Controls->Add(this->label29);
            this->tabPage6->Controls->Add(this->comboBox3);
            this->tabPage6->Controls->Add(this->label30);
            this->tabPage6->Controls->Add(this->dataGridView1);
            this->tabPage6->Controls->Add(this->button10);
            this->tabPage6->Controls->Add(this->button11);
            this->tabPage6->Controls->Add(this->button12);
            this->tabPage6->Controls->Add(this->button13);
            this->tabPage6->Controls->Add(this->textBox17);
            this->tabPage6->Controls->Add(this->textBox18);
            this->tabPage6->Controls->Add(this->textBox19);
            this->tabPage6->Controls->Add(this->textBox20);
            this->tabPage6->Controls->Add(this->label31);
            this->tabPage6->Controls->Add(this->label32);
            this->tabPage6->Controls->Add(this->label33);
            this->tabPage6->Controls->Add(this->label34);
            this->tabPage6->Controls->Add(this->panel6);
            this->tabPage6->Location = System::Drawing::Point(4, 29);
            this->tabPage6->Name = L"tabPage6";
            this->tabPage6->Padding = System::Windows::Forms::Padding(3);
            this->tabPage6->Size = System::Drawing::Size(1047, 398);
            this->tabPage6->TabIndex = 5;
            this->tabPage6->Text = L"tabPage6";
            this->tabPage6->UseVisualStyleBackColor = true;
            // 
            // tabPage7
            // 
            this->tabPage7->Controls->Add(this->textBox21);
            this->tabPage7->Controls->Add(this->label37);
            this->tabPage7->Controls->Add(this->comboBox4);
            this->tabPage7->Controls->Add(this->label38);
            this->tabPage7->Controls->Add(this->dataGridView2);
            this->tabPage7->Controls->Add(this->button14);
            this->tabPage7->Controls->Add(this->button15);
            this->tabPage7->Controls->Add(this->button16);
            this->tabPage7->Controls->Add(this->button17);
            this->tabPage7->Controls->Add(this->textBox22);
            this->tabPage7->Controls->Add(this->textBox23);
            this->tabPage7->Controls->Add(this->textBox24);
            this->tabPage7->Controls->Add(this->textBox25);
            this->tabPage7->Controls->Add(this->label39);
            this->tabPage7->Controls->Add(this->label40);
            this->tabPage7->Controls->Add(this->label41);
            this->tabPage7->Controls->Add(this->label42);
            this->tabPage7->Controls->Add(this->panel7);
            this->tabPage7->Location = System::Drawing::Point(4, 29);
            this->tabPage7->Name = L"tabPage7";
            this->tabPage7->Padding = System::Windows::Forms::Padding(3);
            this->tabPage7->Size = System::Drawing::Size(1047, 398);
            this->tabPage7->TabIndex = 6;
            this->tabPage7->Text = L"tabPage7";
            this->tabPage7->UseVisualStyleBackColor = true;
            // 
            // tabPage8
            // 
            this->tabPage8->Controls->Add(this->dataGridView3);
            this->tabPage8->Controls->Add(this->button18);
            this->tabPage8->Controls->Add(this->button19);
            this->tabPage8->Controls->Add(this->button20);
            this->tabPage8->Controls->Add(this->button21);
            this->tabPage8->Controls->Add(this->textBox26);
            this->tabPage8->Controls->Add(this->textBox27);
            this->tabPage8->Controls->Add(this->textBox28);
            this->tabPage8->Controls->Add(this->textBox29);
            this->tabPage8->Controls->Add(this->label45);
            this->tabPage8->Controls->Add(this->label46);
            this->tabPage8->Controls->Add(this->label47);
            this->tabPage8->Controls->Add(this->label48);
            this->tabPage8->Controls->Add(this->panel8);
            this->tabPage8->Location = System::Drawing::Point(4, 29);
            this->tabPage8->Name = L"tabPage8";
            this->tabPage8->Padding = System::Windows::Forms::Padding(3);
            this->tabPage8->Size = System::Drawing::Size(1047, 398);
            this->tabPage8->TabIndex = 7;
            this->tabPage8->Text = L"tabPage8";
            this->tabPage8->UseVisualStyleBackColor = true;
            // 
            // textBox16
            // 
            this->textBox16->Location = System::Drawing::Point(171, 135);
            this->textBox16->Name = L"textBox16";
            this->textBox16->Size = System::Drawing::Size(138, 26);
            this->textBox16->TabIndex = 58;
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label29->Location = System::Drawing::Point(30, 135);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(78, 30);
            this->label29->TabIndex = 57;
            this->label29->Text = L"Car ID";
            // 
            // comboBox3
            // 
            this->comboBox3->FormattingEnabled = true;
            this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"SUV", L"Sedan", L"Pajero" });
            this->comboBox3->Location = System::Drawing::Point(171, 370);
            this->comboBox3->Name = L"comboBox3";
            this->comboBox3->Size = System::Drawing::Size(138, 28);
            this->comboBox3->TabIndex = 56;
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label30->Location = System::Drawing::Point(3, 368);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(64, 30);
            this->label30->TabIndex = 55;
            this->label30->Text = L"Type";
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->Modal,
                    this->Brand, this->Color, this->Milage
            });
            this->dataGridView1->Location = System::Drawing::Point(354, 147);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 62;
            this->dataGridView1->RowTemplate->Height = 28;
            this->dataGridView1->Size = System::Drawing::Size(603, 171);
            this->dataGridView1->TabIndex = 54;
            // 
            // Modal
            // 
            this->Modal->HeaderText = L"Modal of car";
            this->Modal->MinimumWidth = 8;
            this->Modal->Name = L"Modal";
            this->Modal->Width = 150;
            // 
            // Brand
            // 
            this->Brand->HeaderText = L"Brand";
            this->Brand->MinimumWidth = 8;
            this->Brand->Name = L"Brand";
            this->Brand->Width = 150;
            // 
            // Color
            // 
            this->Color->HeaderText = L"Color";
            this->Color->MinimumWidth = 8;
            this->Color->Name = L"Color";
            this->Color->Width = 150;
            // 
            // Milage
            // 
            this->Milage->HeaderText = L"Milaeage";
            this->Milage->MinimumWidth = 8;
            this->Milage->Name = L"Milage";
            this->Milage->Width = 150;
            // 
            // button10
            // 
            this->button10->BackColor = System::Drawing::SystemColors::Highlight;
            this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button10->Location = System::Drawing::Point(559, 362);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(92, 36);
            this->button10->TabIndex = 53;
            this->button10->Text = L"Update";
            this->button10->UseVisualStyleBackColor = false;
            // 
            // button11
            // 
            this->button11->BackColor = System::Drawing::SystemColors::Highlight;
            this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button11->Location = System::Drawing::Point(701, 362);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(92, 36);
            this->button11->TabIndex = 52;
            this->button11->Text = L"Search";
            this->button11->UseVisualStyleBackColor = false;
            // 
            // button12
            // 
            this->button12->BackColor = System::Drawing::SystemColors::Highlight;
            this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button12->Location = System::Drawing::Point(852, 362);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(92, 36);
            this->button12->TabIndex = 51;
            this->button12->Text = L"Reset";
            this->button12->UseVisualStyleBackColor = false;
            // 
            // button13
            // 
            this->button13->BackColor = System::Drawing::SystemColors::Highlight;
            this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button13->Location = System::Drawing::Point(397, 362);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(92, 36);
            this->button13->TabIndex = 50;
            this->button13->Text = L"ADD";
            this->button13->UseVisualStyleBackColor = false;
            // 
            // textBox17
            // 
            this->textBox17->Location = System::Drawing::Point(171, 232);
            this->textBox17->Name = L"textBox17";
            this->textBox17->Size = System::Drawing::Size(138, 26);
            this->textBox17->TabIndex = 49;
            // 
            // textBox18
            // 
            this->textBox18->Location = System::Drawing::Point(171, 276);
            this->textBox18->Name = L"textBox18";
            this->textBox18->Size = System::Drawing::Size(138, 26);
            this->textBox18->TabIndex = 48;
            // 
            // textBox19
            // 
            this->textBox19->Location = System::Drawing::Point(171, 325);
            this->textBox19->Name = L"textBox19";
            this->textBox19->Size = System::Drawing::Size(138, 26);
            this->textBox19->TabIndex = 47;
            // 
            // textBox20
            // 
            this->textBox20->Location = System::Drawing::Point(171, 181);
            this->textBox20->Name = L"textBox20";
            this->textBox20->Size = System::Drawing::Size(138, 26);
            this->textBox20->TabIndex = 46;
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label31->Location = System::Drawing::Point(8, 232);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(70, 30);
            this->label31->TabIndex = 45;
            this->label31->Text = L"Color";
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label32->Location = System::Drawing::Point(-8, 276);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(97, 30);
            this->label32->TabIndex = 44;
            this->label32->Text = L"Mileage";
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label33->Location = System::Drawing::Point(3, 325);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(75, 30);
            this->label33->TabIndex = 43;
            this->label33->Text = L"Brand";
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label34->Location = System::Drawing::Point(-47, 181);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(152, 30);
            this->label34->TabIndex = 42;
            this->label34->Text = L"Model of Car";
            // 
            // panel6
            // 
            this->panel6->BackColor = System::Drawing::SystemColors::Highlight;
            this->panel6->Controls->Add(this->label35);
            this->panel6->Controls->Add(this->label36);
            this->panel6->Location = System::Drawing::Point(-58, 1);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(1026, 118);
            this->panel6->TabIndex = 41;
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label35->Location = System::Drawing::Point(424, 70);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(166, 25);
            this->label35->TabIndex = 1;
            this->label35->Text = L"Car Managment";
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label36->Location = System::Drawing::Point(318, 18);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(391, 32);
            this->label36->TabIndex = 0;
            this->label36->Text = L"Car Rental Mangment System";
            // 
            // textBox21
            // 
            this->textBox21->Location = System::Drawing::Point(232, 137);
            this->textBox21->Name = L"textBox21";
            this->textBox21->Size = System::Drawing::Size(138, 26);
            this->textBox21->TabIndex = 58;
            // 
            // label37
            // 
            this->label37->AutoSize = true;
            this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label37->Location = System::Drawing::Point(91, 137);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(78, 30);
            this->label37->TabIndex = 57;
            this->label37->Text = L"Car ID";
            // 
            // comboBox4
            // 
            this->comboBox4->FormattingEnabled = true;
            this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"SUV", L"Sedan", L"Pajero" });
            this->comboBox4->Location = System::Drawing::Point(232, 372);
            this->comboBox4->Name = L"comboBox4";
            this->comboBox4->Size = System::Drawing::Size(138, 28);
            this->comboBox4->TabIndex = 56;
            // 
            // label38
            // 
            this->label38->AutoSize = true;
            this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label38->Location = System::Drawing::Point(64, 370);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(64, 30);
            this->label38->TabIndex = 55;
            this->label38->Text = L"Type";
            // 
            // dataGridView2
            // 
            this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->dataGridViewTextBoxColumn1,
                    this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
            });
            this->dataGridView2->Location = System::Drawing::Point(415, 149);
            this->dataGridView2->Name = L"dataGridView2";
            this->dataGridView2->RowHeadersWidth = 62;
            this->dataGridView2->RowTemplate->Height = 28;
            this->dataGridView2->Size = System::Drawing::Size(603, 171);
            this->dataGridView2->TabIndex = 54;
            // 
            // dataGridViewTextBoxColumn1
            // 
            this->dataGridViewTextBoxColumn1->HeaderText = L"Modal of car";
            this->dataGridViewTextBoxColumn1->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
            this->dataGridViewTextBoxColumn1->Width = 150;
            // 
            // dataGridViewTextBoxColumn2
            // 
            this->dataGridViewTextBoxColumn2->HeaderText = L"Brand";
            this->dataGridViewTextBoxColumn2->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
            this->dataGridViewTextBoxColumn2->Width = 150;
            // 
            // dataGridViewTextBoxColumn3
            // 
            this->dataGridViewTextBoxColumn3->HeaderText = L"Color";
            this->dataGridViewTextBoxColumn3->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
            this->dataGridViewTextBoxColumn3->Width = 150;
            // 
            // dataGridViewTextBoxColumn4
            // 
            this->dataGridViewTextBoxColumn4->HeaderText = L"Milaeage";
            this->dataGridViewTextBoxColumn4->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
            this->dataGridViewTextBoxColumn4->Width = 150;
            // 
            // button14
            // 
            this->button14->BackColor = System::Drawing::SystemColors::Highlight;
            this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button14->Location = System::Drawing::Point(620, 364);
            this->button14->Name = L"button14";
            this->button14->Size = System::Drawing::Size(92, 36);
            this->button14->TabIndex = 53;
            this->button14->Text = L"Update";
            this->button14->UseVisualStyleBackColor = false;
            // 
            // button15
            // 
            this->button15->BackColor = System::Drawing::SystemColors::Highlight;
            this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button15->Location = System::Drawing::Point(762, 364);
            this->button15->Name = L"button15";
            this->button15->Size = System::Drawing::Size(92, 36);
            this->button15->TabIndex = 52;
            this->button15->Text = L"Search";
            this->button15->UseVisualStyleBackColor = false;
            // 
            // button16
            // 
            this->button16->BackColor = System::Drawing::SystemColors::Highlight;
            this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button16->Location = System::Drawing::Point(913, 364);
            this->button16->Name = L"button16";
            this->button16->Size = System::Drawing::Size(92, 36);
            this->button16->TabIndex = 51;
            this->button16->Text = L"Reset";
            this->button16->UseVisualStyleBackColor = false;
            // 
            // button17
            // 
            this->button17->BackColor = System::Drawing::SystemColors::Highlight;
            this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button17->Location = System::Drawing::Point(458, 364);
            this->button17->Name = L"button17";
            this->button17->Size = System::Drawing::Size(92, 36);
            this->button17->TabIndex = 50;
            this->button17->Text = L"ADD";
            this->button17->UseVisualStyleBackColor = false;
            // 
            // textBox22
            // 
            this->textBox22->Location = System::Drawing::Point(232, 234);
            this->textBox22->Name = L"textBox22";
            this->textBox22->Size = System::Drawing::Size(138, 26);
            this->textBox22->TabIndex = 49;
            // 
            // textBox23
            // 
            this->textBox23->Location = System::Drawing::Point(232, 278);
            this->textBox23->Name = L"textBox23";
            this->textBox23->Size = System::Drawing::Size(138, 26);
            this->textBox23->TabIndex = 48;
            // 
            // textBox24
            // 
            this->textBox24->Location = System::Drawing::Point(232, 327);
            this->textBox24->Name = L"textBox24";
            this->textBox24->Size = System::Drawing::Size(138, 26);
            this->textBox24->TabIndex = 47;
            // 
            // textBox25
            // 
            this->textBox25->Location = System::Drawing::Point(232, 183);
            this->textBox25->Name = L"textBox25";
            this->textBox25->Size = System::Drawing::Size(138, 26);
            this->textBox25->TabIndex = 46;
            // 
            // label39
            // 
            this->label39->AutoSize = true;
            this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label39->Location = System::Drawing::Point(69, 234);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(70, 30);
            this->label39->TabIndex = 45;
            this->label39->Text = L"Color";
            // 
            // label40
            // 
            this->label40->AutoSize = true;
            this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label40->Location = System::Drawing::Point(53, 278);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(97, 30);
            this->label40->TabIndex = 44;
            this->label40->Text = L"Mileage";
            // 
            // label41
            // 
            this->label41->AutoSize = true;
            this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label41->Location = System::Drawing::Point(64, 327);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(75, 30);
            this->label41->TabIndex = 43;
            this->label41->Text = L"Brand";
            // 
            // label42
            // 
            this->label42->AutoSize = true;
            this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label42->Location = System::Drawing::Point(14, 183);
            this->label42->Name = L"label42";
            this->label42->Size = System::Drawing::Size(152, 30);
            this->label42->TabIndex = 42;
            this->label42->Text = L"Model of Car";
            // 
            // panel7
            // 
            this->panel7->BackColor = System::Drawing::SystemColors::Highlight;
            this->panel7->Controls->Add(this->label43);
            this->panel7->Controls->Add(this->label44);
            this->panel7->Location = System::Drawing::Point(3, 3);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(1026, 118);
            this->panel7->TabIndex = 41;
            // 
            // label43
            // 
            this->label43->AutoSize = true;
            this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label43->Location = System::Drawing::Point(424, 70);
            this->label43->Name = L"label43";
            this->label43->Size = System::Drawing::Size(166, 25);
            this->label43->TabIndex = 1;
            this->label43->Text = L"Car Managment";
            // 
            // label44
            // 
            this->label44->AutoSize = true;
            this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label44->Location = System::Drawing::Point(318, 18);
            this->label44->Name = L"label44";
            this->label44->Size = System::Drawing::Size(391, 32);
            this->label44->TabIndex = 0;
            this->label44->Text = L"Car Rental Mangment System";
            // 
            // dataGridView3
            // 
            this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->Name, this->Email,
                    this->Phonenumber, this->Adress
            });
            this->dataGridView3->Location = System::Drawing::Point(503, 194);
            this->dataGridView3->Name = L"dataGridView3";
            this->dataGridView3->RowHeadersWidth = 62;
            this->dataGridView3->RowTemplate->Height = 28;
            this->dataGridView3->Size = System::Drawing::Size(538, 80);
            this->dataGridView3->TabIndex = 52;
            this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_CellContentClick);
            // 
            // Name
            // 
            this->Name->HeaderText = L"CustomerName";
            this->Name->MinimumWidth = 15;
            this->Name->Name = L"Name";
            this->Name->Width = 150;
            // 
            // Email
            // 
            this->Email->HeaderText = L"Email";
            this->Email->MinimumWidth = 8;
            this->Email->Name = L"Email";
            this->Email->Width = 150;
            // 
            // Phonenumber
            // 
            this->Phonenumber->HeaderText = L"PhoneNumber";
            this->Phonenumber->MinimumWidth = 15;
            this->Phonenumber->Name = L"Phonenumber";
            this->Phonenumber->Width = 150;
            // 
            // Adress
            // 
            this->Adress->HeaderText = L"Adress";
            this->Adress->MinimumWidth = 8;
            this->Adress->Name = L"Adress";
            this->Adress->Width = 150;
            // 
            // button18
            // 
            this->button18->BackColor = System::Drawing::SystemColors::Highlight;
            this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button18->Location = System::Drawing::Point(224, 347);
            this->button18->Name = L"button18";
            this->button18->Size = System::Drawing::Size(195, 48);
            this->button18->TabIndex = 51;
            this->button18->Text = L"Search";
            this->button18->UseVisualStyleBackColor = false;
            // 
            // button19
            // 
            this->button19->BackColor = System::Drawing::SystemColors::Highlight;
            this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button19->Location = System::Drawing::Point(639, 347);
            this->button19->Name = L"button19";
            this->button19->Size = System::Drawing::Size(195, 48);
            this->button19->TabIndex = 50;
            this->button19->Text = L"Delete";
            this->button19->UseVisualStyleBackColor = false;
            // 
            // button20
            // 
            this->button20->BackColor = System::Drawing::SystemColors::Highlight;
            this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button20->Location = System::Drawing::Point(438, 347);
            this->button20->Name = L"button20";
            this->button20->Size = System::Drawing::Size(195, 48);
            this->button20->TabIndex = 49;
            this->button20->Text = L"Update";
            this->button20->UseVisualStyleBackColor = false;
            // 
            // button21
            // 
            this->button21->BackColor = System::Drawing::SystemColors::Highlight;
            this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button21->Location = System::Drawing::Point(6, 347);
            this->button21->Name = L"button21";
            this->button21->Size = System::Drawing::Size(195, 48);
            this->button21->TabIndex = 48;
            this->button21->Text = L"Add ";
            this->button21->UseVisualStyleBackColor = false;
            // 
            // textBox26
            // 
            this->textBox26->Location = System::Drawing::Point(281, 274);
            this->textBox26->Multiline = true;
            this->textBox26->Name = L"textBox26";
            this->textBox26->Size = System::Drawing::Size(196, 65);
            this->textBox26->TabIndex = 47;
            // 
            // textBox27
            // 
            this->textBox27->Location = System::Drawing::Point(281, 220);
            this->textBox27->Name = L"textBox27";
            this->textBox27->Size = System::Drawing::Size(196, 26);
            this->textBox27->TabIndex = 46;
            // 
            // textBox28
            // 
            this->textBox28->Location = System::Drawing::Point(281, 182);
            this->textBox28->Name = L"textBox28";
            this->textBox28->Size = System::Drawing::Size(196, 26);
            this->textBox28->TabIndex = 45;
            // 
            // textBox29
            // 
            this->textBox29->Location = System::Drawing::Point(281, 144);
            this->textBox29->Name = L"textBox29";
            this->textBox29->Size = System::Drawing::Size(196, 26);
            this->textBox29->TabIndex = 44;
            // 
            // label45
            // 
            this->label45->AutoSize = true;
            this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label45->Location = System::Drawing::Point(183, 180);
            this->label45->Name = L"label45";
            this->label45->Size = System::Drawing::Size(63, 27);
            this->label45->TabIndex = 43;
            this->label45->Text = L"Email";
            // 
            // label46
            // 
            this->label46->AutoSize = true;
            this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label46->Location = System::Drawing::Point(89, 218);
            this->label46->Name = L"label46";
            this->label46->Size = System::Drawing::Size(157, 27);
            this->label46->TabIndex = 42;
            this->label46->Text = L"Phone Number";
            // 
            // label47
            // 
            this->label47->AutoSize = true;
            this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label47->Location = System::Drawing::Point(170, 263);
            this->label47->Name = L"label47";
            this->label47->Size = System::Drawing::Size(76, 27);
            this->label47->TabIndex = 41;
            this->label47->Text = L"Adress";
            // 
            // label48
            // 
            this->label48->AutoSize = true;
            this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label48->Location = System::Drawing::Point(79, 142);
            this->label48->Name = L"label48";
            this->label48->Size = System::Drawing::Size(167, 27);
            this->label48->TabIndex = 40;
            this->label48->Text = L"Customer Name";
            // 
            // panel8
            // 
            this->panel8->BackColor = System::Drawing::SystemColors::Highlight;
            this->panel8->Controls->Add(this->label49);
            this->panel8->Controls->Add(this->label50);
            this->panel8->Location = System::Drawing::Point(6, 3);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(1038, 118);
            this->panel8->TabIndex = 39;
            // 
            // label49
            // 
            this->label49->AutoSize = true;
            this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label49->Location = System::Drawing::Point(415, 73);
            this->label49->Name = L"label49";
            this->label49->Size = System::Drawing::Size(212, 25);
            this->label49->TabIndex = 1;
            this->label49->Text = L"Customer Mangment";
            // 
            // label50
            // 
            this->label50->AutoSize = true;
            this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label50->Location = System::Drawing::Point(330, 12);
            this->label50->Name = L"label50";
            this->label50->Size = System::Drawing::Size(391, 32);
            this->label50->TabIndex = 0;
            this->label50->Text = L"Car Rental Mangment System";
            // 
            // tabPage9
            // 
            this->tabPage9->Controls->Add(this->comboBox5);
            this->tabPage9->Controls->Add(this->dataGridView4);
            this->tabPage9->Controls->Add(this->textBox30);
            this->tabPage9->Controls->Add(this->textBox31);
            this->tabPage9->Controls->Add(this->textBox32);
            this->tabPage9->Controls->Add(this->textBox33);
            this->tabPage9->Controls->Add(this->label51);
            this->tabPage9->Controls->Add(this->label52);
            this->tabPage9->Controls->Add(this->label53);
            this->tabPage9->Controls->Add(this->label54);
            this->tabPage9->Controls->Add(this->label55);
            this->tabPage9->Controls->Add(this->panel9);
            this->tabPage9->Location = System::Drawing::Point(4, 29);
            this->tabPage9->Name = L"tabPage9";
            this->tabPage9->Padding = System::Windows::Forms::Padding(3);
            this->tabPage9->Size = System::Drawing::Size(1047, 398);
            this->tabPage9->TabIndex = 8;
            this->tabPage9->Text = L"tabPage9";
            this->tabPage9->UseVisualStyleBackColor = true;
            // 
            // tabPage10
            // 
            this->tabPage10->Controls->Add(this->button22);
            this->tabPage10->Controls->Add(this->button23);
            this->tabPage10->Controls->Add(this->panel10);
            this->tabPage10->Location = System::Drawing::Point(4, 29);
            this->tabPage10->Name = L"tabPage10";
            this->tabPage10->Padding = System::Windows::Forms::Padding(3);
            this->tabPage10->Size = System::Drawing::Size(1047, 398);
            this->tabPage10->TabIndex = 9;
            this->tabPage10->Text = L"tabPage10";
            this->tabPage10->UseVisualStyleBackColor = true;
            // 
            // comboBox5
            // 
            this->comboBox5->FormattingEnabled = true;
            this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Yes", L"No" });
            this->comboBox5->Location = System::Drawing::Point(198, 298);
            this->comboBox5->Name = L"comboBox5";
            this->comboBox5->Size = System::Drawing::Size(196, 28);
            this->comboBox5->TabIndex = 57;
            // 
            // dataGridView4
            // 
            this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
                this->DriverID,
                    this->dataGridViewTextBoxColumn5, this->Age, this->Licence, this->dataGridViewTextBoxColumn6
            });
            this->dataGridView4->Location = System::Drawing::Point(425, 156);
            this->dataGridView4->Name = L"dataGridView4";
            this->dataGridView4->RowHeadersWidth = 62;
            this->dataGridView4->RowTemplate->Height = 28;
            this->dataGridView4->Size = System::Drawing::Size(616, 150);
            this->dataGridView4->TabIndex = 56;
            // 
            // DriverID
            // 
            this->DriverID->HeaderText = L"DriverID";
            this->DriverID->MinimumWidth = 10;
            this->DriverID->Name = L"DriverID";
            this->DriverID->Width = 150;
            // 
            // dataGridViewTextBoxColumn5
            // 
            this->dataGridViewTextBoxColumn5->HeaderText = L"Name";
            this->dataGridViewTextBoxColumn5->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
            this->dataGridViewTextBoxColumn5->Width = 150;
            // 
            // Age
            // 
            this->Age->HeaderText = L"Age";
            this->Age->MinimumWidth = 8;
            this->Age->Name = L"Age";
            this->Age->Width = 150;
            // 
            // Licence
            // 
            this->Licence->HeaderText = L"licence";
            this->Licence->MinimumWidth = 10;
            this->Licence->Name = L"Licence";
            this->Licence->Width = 150;
            // 
            // dataGridViewTextBoxColumn6
            // 
            this->dataGridViewTextBoxColumn6->HeaderText = L"Adress";
            this->dataGridViewTextBoxColumn6->MinimumWidth = 10;
            this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
            this->dataGridViewTextBoxColumn6->Width = 150;
            // 
            // textBox30
            // 
            this->textBox30->Location = System::Drawing::Point(198, 346);
            this->textBox30->Multiline = true;
            this->textBox30->Name = L"textBox30";
            this->textBox30->Size = System::Drawing::Size(196, 59);
            this->textBox30->TabIndex = 55;
            // 
            // textBox31
            // 
            this->textBox31->Location = System::Drawing::Point(198, 252);
            this->textBox31->Name = L"textBox31";
            this->textBox31->Size = System::Drawing::Size(196, 26);
            this->textBox31->TabIndex = 54;
            // 
            // textBox32
            // 
            this->textBox32->Location = System::Drawing::Point(198, 210);
            this->textBox32->Name = L"textBox32";
            this->textBox32->Size = System::Drawing::Size(196, 26);
            this->textBox32->TabIndex = 53;
            // 
            // textBox33
            // 
            this->textBox33->Location = System::Drawing::Point(198, 156);
            this->textBox33->Name = L"textBox33";
            this->textBox33->Size = System::Drawing::Size(196, 26);
            this->textBox33->TabIndex = 52;
            // 
            // label51
            // 
            this->label51->AutoSize = true;
            this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label51->Location = System::Drawing::Point(100, 206);
            this->label51->Name = L"label51";
            this->label51->Size = System::Drawing::Size(76, 30);
            this->label51->TabIndex = 51;
            this->label51->Text = L"Name";
            // 
            // label52
            // 
            this->label52->AutoSize = true;
            this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label52->Location = System::Drawing::Point(122, 248);
            this->label52->Name = L"label52";
            this->label52->Size = System::Drawing::Size(54, 30);
            this->label52->TabIndex = 50;
            this->label52->Text = L"Age";
            // 
            // label53
            // 
            this->label53->AutoSize = true;
            this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label53->Location = System::Drawing::Point(91, 293);
            this->label53->Name = L"label53";
            this->label53->Size = System::Drawing::Size(85, 30);
            this->label53->TabIndex = 49;
            this->label53->Text = L"licence";
            // 
            // label54
            // 
            this->label54->AutoSize = true;
            this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label54->Location = System::Drawing::Point(23, 341);
            this->label54->Name = L"label54";
            this->label54->Size = System::Drawing::Size(153, 30);
            this->label54->TabIndex = 48;
            this->label54->Text = L"Home Adress";
            // 
            // label55
            // 
            this->label55->AutoSize = true;
            this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label55->Location = System::Drawing::Point(70, 156);
            this->label55->Name = L"label55";
            this->label55->Size = System::Drawing::Size(106, 30);
            this->label55->TabIndex = 47;
            this->label55->Text = L"Driver ID";
            // 
            // panel9
            // 
            this->panel9->BackColor = System::Drawing::SystemColors::Highlight;
            this->panel9->Controls->Add(this->label56);
            this->panel9->Controls->Add(this->label57);
            this->panel9->Location = System::Drawing::Point(6, 6);
            this->panel9->Name = L"panel9";
            this->panel9->Size = System::Drawing::Size(1038, 117);
            this->panel9->TabIndex = 46;
            // 
            // label56
            // 
            this->label56->AutoSize = true;
            this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label56->Location = System::Drawing::Point(414, 68);
            this->label56->Name = L"label56";
            this->label56->Size = System::Drawing::Size(212, 25);
            this->label56->TabIndex = 1;
            this->label56->Text = L"Customer Mangment";
            // 
            // label57
            // 
            this->label57->AutoSize = true;
            this->label57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label57->Location = System::Drawing::Point(318, 11);
            this->label57->Name = L"label57";
            this->label57->Size = System::Drawing::Size(391, 32);
            this->label57->TabIndex = 0;
            this->label57->Text = L"Car Rental Mangment System";
            // 
            // button22
            // 
            this->button22->BackColor = System::Drawing::SystemColors::Highlight;
            this->button22->Location = System::Drawing::Point(447, 309);
            this->button22->Name = L"button22";
            this->button22->Size = System::Drawing::Size(182, 50);
            this->button22->TabIndex = 14;
            this->button22->Text = L"Ofline payment";
            this->button22->UseVisualStyleBackColor = false;
            // 
            // button23
            // 
            this->button23->BackColor = System::Drawing::SystemColors::Highlight;
            this->button23->Location = System::Drawing::Point(447, 195);
            this->button23->Name = L"button23";
            this->button23->Size = System::Drawing::Size(182, 50);
            this->button23->TabIndex = 13;
            this->button23->Text = L"Card Payment";
            this->button23->UseVisualStyleBackColor = false;
            // 
            // panel10
            // 
            this->panel10->BackColor = System::Drawing::SystemColors::Highlight;
            this->panel10->Controls->Add(this->label58);
            this->panel10->Controls->Add(this->label59);
            this->panel10->Location = System::Drawing::Point(3, 3);
            this->panel10->Name = L"panel10";
            this->panel10->Size = System::Drawing::Size(1048, 115);
            this->panel10->TabIndex = 12;
            // 
            // label58
            // 
            this->label58->AutoSize = true;
            this->label58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label58->Location = System::Drawing::Point(498, 70);
            this->label58->Name = L"label58";
            this->label58->Size = System::Drawing::Size(96, 25);
            this->label58->TabIndex = 1;
            this->label58->Text = L"Paymnet";
            // 
            // label59
            // 
            this->label59->AutoSize = true;
            this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label59->Location = System::Drawing::Point(342, 12);
            this->label59->Name = L"label59";
            this->label59->Size = System::Drawing::Size(391, 32);
            this->label59->TabIndex = 0;
            this->label59->Text = L"Car Rental Mangment System";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1070, 443);
            this->Controls->Add(this->tabControl1);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->tabControl1->ResumeLayout(false);
            this->tabPage1->ResumeLayout(false);
            this->tabPage1->PerformLayout();
            this->tabPage2->ResumeLayout(false);
            this->tabPage3->ResumeLayout(false);
            this->tabPage3->PerformLayout();
            this->tabPage4->ResumeLayout(false);
            this->tabPage4->PerformLayout();
            this->tabPage5->ResumeLayout(false);
            this->tabPage5->PerformLayout();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            this->tabPage6->ResumeLayout(false);
            this->tabPage6->PerformLayout();
            this->tabPage7->ResumeLayout(false);
            this->tabPage7->PerformLayout();
            this->tabPage8->ResumeLayout(false);
            this->tabPage8->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->panel6->ResumeLayout(false);
            this->panel6->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
            this->panel7->ResumeLayout(false);
            this->panel7->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
            this->panel8->ResumeLayout(false);
            this->panel8->PerformLayout();
            this->tabPage9->ResumeLayout(false);
            this->tabPage9->PerformLayout();
            this->tabPage10->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
            this->panel9->ResumeLayout(false);
            this->panel9->PerformLayout();
            this->panel10->ResumeLayout(false);
            this->panel10->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    }
};
}
