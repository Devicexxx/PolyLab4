#pragma once

#include "figure.h"
#include <stdlib.h>


namespace PolyLab4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	
	BaseArr *a;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			a = new BaseArr();

		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonEnterRect;
	private: System::Windows::Forms::TextBox^ textBoxLen;
	private: System::Windows::Forms::TextBox^ textBoxHei;
	private: System::Windows::Forms::TextBox^ textBoxSide;
	protected:

	protected:





	private: System::Windows::Forms::Button^ buttonEnterSq;
	private: System::Windows::Forms::Button^ buttonEnterTri;
	private: System::Windows::Forms::Button^ buttonEnterCiar;
	private: System::Windows::Forms::Button^ buttonEnterElips;









	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBoxWeigh;

	private: System::Windows::Forms::TextBox^ textBoxBott;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBoxY;

	private: System::Windows::Forms::TextBox^ textBoxX;
	private: System::Windows::Forms::TextBox^ textBoxRad;


	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBoxb;

	private: System::Windows::Forms::TextBox^ textBoxa;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBoxY1;

	private: System::Windows::Forms::TextBox^ textBoxX1;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ buttonOut1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ buttonOut2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ buttonOut3;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ buttonOut4;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ buttonOut5;
private: System::Windows::Forms::PictureBox^ pictureBox1;

private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Button^ buttonPrint;
private: System::Windows::Forms::TextBox^ textBoxPrint;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ buttonSetsize;
private: System::Windows::Forms::TextBox^ textBoxSetsize;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonEnterRect = (gcnew System::Windows::Forms::Button());
			this->textBoxLen = (gcnew System::Windows::Forms::TextBox());
			this->textBoxHei = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSide = (gcnew System::Windows::Forms::TextBox());
			this->buttonEnterSq = (gcnew System::Windows::Forms::Button());
			this->buttonEnterTri = (gcnew System::Windows::Forms::Button());
			this->buttonEnterCiar = (gcnew System::Windows::Forms::Button());
			this->buttonEnterElips = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxWeigh = (gcnew System::Windows::Forms::TextBox());
			this->textBoxBott = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBoxY = (gcnew System::Windows::Forms::TextBox());
			this->textBoxX = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRad = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBoxb = (gcnew System::Windows::Forms::TextBox());
			this->textBoxa = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBoxY1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxX1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonOut1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->buttonOut2 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->buttonOut3 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->buttonOut4 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->buttonOut5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->buttonPrint = (gcnew System::Windows::Forms::Button());
			this->textBoxPrint = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->buttonSetsize = (gcnew System::Windows::Forms::Button());
			this->textBoxSetsize = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonEnterRect
			// 
			this->buttonEnterRect->Location = System::Drawing::Point(12, 30);
			this->buttonEnterRect->Name = L"buttonEnterRect";
			this->buttonEnterRect->Size = System::Drawing::Size(123, 23);
			this->buttonEnterRect->TabIndex = 0;
			this->buttonEnterRect->Text = L"Ввод";
			this->buttonEnterRect->UseVisualStyleBackColor = true;
			this->buttonEnterRect->Click += gcnew System::EventHandler(this, &MyForm::buttonEnterRect_Click);
			// 
			// textBoxLen
			// 
			this->textBoxLen->Location = System::Drawing::Point(12, 79);
			this->textBoxLen->Name = L"textBoxLen";
			this->textBoxLen->Size = System::Drawing::Size(58, 20);
			this->textBoxLen->TabIndex = 3;
			// 
			// textBoxHei
			// 
			this->textBoxHei->Location = System::Drawing::Point(76, 79);
			this->textBoxHei->Name = L"textBoxHei";
			this->textBoxHei->Size = System::Drawing::Size(59, 20);
			this->textBoxHei->TabIndex = 5;
			// 
			// textBoxSide
			// 
			this->textBoxSide->Location = System::Drawing::Point(8, 79);
			this->textBoxSide->Name = L"textBoxSide";
			this->textBoxSide->Size = System::Drawing::Size(123, 20);
			this->textBoxSide->TabIndex = 11;
			// 
			// buttonEnterSq
			// 
			this->buttonEnterSq->Location = System::Drawing::Point(8, 30);
			this->buttonEnterSq->Name = L"buttonEnterSq";
			this->buttonEnterSq->Size = System::Drawing::Size(123, 23);
			this->buttonEnterSq->TabIndex = 17;
			this->buttonEnterSq->Text = L"Ввод";
			this->buttonEnterSq->UseVisualStyleBackColor = true;
			this->buttonEnterSq->Click += gcnew System::EventHandler(this, &MyForm::buttonEnterSq_Click);
			// 
			// buttonEnterTri
			// 
			this->buttonEnterTri->Location = System::Drawing::Point(6, 30);
			this->buttonEnterTri->Name = L"buttonEnterTri";
			this->buttonEnterTri->Size = System::Drawing::Size(123, 23);
			this->buttonEnterTri->TabIndex = 18;
			this->buttonEnterTri->Text = L"Ввод";
			this->buttonEnterTri->UseVisualStyleBackColor = true;
			// 
			// buttonEnterCiar
			// 
			this->buttonEnterCiar->Location = System::Drawing::Point(6, 30);
			this->buttonEnterCiar->Name = L"buttonEnterCiar";
			this->buttonEnterCiar->Size = System::Drawing::Size(123, 23);
			this->buttonEnterCiar->TabIndex = 19;
			this->buttonEnterCiar->Text = L"Ввод";
			this->buttonEnterCiar->UseVisualStyleBackColor = true;
			// 
			// buttonEnterElips
			// 
			this->buttonEnterElips->Location = System::Drawing::Point(15, 30);
			this->buttonEnterElips->Name = L"buttonEnterElips";
			this->buttonEnterElips->Size = System::Drawing::Size(123, 23);
			this->buttonEnterElips->TabIndex = 20;
			this->buttonEnterElips->Text = L"Ввод";
			this->buttonEnterElips->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 63);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 13);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Длинна";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(73, 63);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 13);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Ширина";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(47, 63);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(49, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Сторона";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(67, 63);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 13);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Ширина";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(3, 63);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(63, 13);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Основание";
			// 
			// textBoxWeigh
			// 
			this->textBoxWeigh->Location = System::Drawing::Point(70, 79);
			this->textBoxWeigh->Name = L"textBoxWeigh";
			this->textBoxWeigh->Size = System::Drawing::Size(59, 20);
			this->textBoxWeigh->TabIndex = 25;
			// 
			// textBoxBott
			// 
			this->textBoxBott->Location = System::Drawing::Point(6, 79);
			this->textBoxBott->Name = L"textBoxBott";
			this->textBoxBott->Size = System::Drawing::Size(58, 20);
			this->textBoxBott->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(101, 63);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(12, 13);
			this->label11->TabIndex = 31;
			this->label11->Text = L"y";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(30, 63);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(12, 13);
			this->label12->TabIndex = 30;
			this->label12->Text = L"x";
			// 
			// textBoxY
			// 
			this->textBoxY->Location = System::Drawing::Point(70, 79);
			this->textBoxY->Name = L"textBoxY";
			this->textBoxY->Size = System::Drawing::Size(59, 20);
			this->textBoxY->TabIndex = 29;
			// 
			// textBoxX
			// 
			this->textBoxX->Location = System::Drawing::Point(6, 79);
			this->textBoxX->Name = L"textBoxX";
			this->textBoxX->Size = System::Drawing::Size(58, 20);
			this->textBoxX->TabIndex = 28;
			// 
			// textBoxRad
			// 
			this->textBoxRad->Location = System::Drawing::Point(6, 118);
			this->textBoxRad->Name = L"textBoxRad";
			this->textBoxRad->Size = System::Drawing::Size(123, 20);
			this->textBoxRad->TabIndex = 32;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(44, 102);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(43, 13);
			this->label13->TabIndex = 33;
			this->label13->Text = L"Радиус";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(99, 63);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(13, 13);
			this->label15->TabIndex = 37;
			this->label15->Text = L"b";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(39, 63);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(13, 13);
			this->label16->TabIndex = 36;
			this->label16->Text = L"a";
			// 
			// textBoxb
			// 
			this->textBoxb->Location = System::Drawing::Point(79, 79);
			this->textBoxb->Name = L"textBoxb";
			this->textBoxb->Size = System::Drawing::Size(59, 20);
			this->textBoxb->TabIndex = 35;
			// 
			// textBoxa
			// 
			this->textBoxa->Location = System::Drawing::Point(15, 79);
			this->textBoxa->Name = L"textBoxa";
			this->textBoxa->Size = System::Drawing::Size(58, 20);
			this->textBoxa->TabIndex = 34;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(100, 102);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(12, 13);
			this->label14->TabIndex = 41;
			this->label14->Text = L"y";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(39, 102);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(12, 13);
			this->label17->TabIndex = 40;
			this->label17->Text = L"x";
			// 
			// textBoxY1
			// 
			this->textBoxY1->Location = System::Drawing::Point(79, 118);
			this->textBoxY1->Name = L"textBoxY1";
			this->textBoxY1->Size = System::Drawing::Size(59, 20);
			this->textBoxY1->TabIndex = 39;
			// 
			// textBoxX1
			// 
			this->textBoxX1->Location = System::Drawing::Point(15, 118);
			this->textBoxX1->Name = L"textBoxX1";
			this->textBoxX1->Size = System::Drawing::Size(58, 20);
			this->textBoxX1->TabIndex = 38;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->buttonOut1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBoxHei);
			this->groupBox1->Controls->Add(this->textBoxLen);
			this->groupBox1->Controls->Add(this->buttonEnterRect);
			this->groupBox1->Location = System::Drawing::Point(8, 67);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(144, 288);
			this->groupBox1->TabIndex = 42;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Прямоугольник";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 235);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 27;
			this->label2->Text = L"P";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(15, 251);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(123, 20);
			this->textBox2->TabIndex = 26;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 187);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 25;
			this->label1->Text = L"S";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 203);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(123, 20);
			this->textBox1->TabIndex = 24;
			// 
			// buttonOut1
			// 
			this->buttonOut1->Location = System::Drawing::Point(15, 154);
			this->buttonOut1->Name = L"buttonOut1";
			this->buttonOut1->Size = System::Drawing::Size(123, 23);
			this->buttonOut1->TabIndex = 23;
			this->buttonOut1->Text = L"Вывод";
			this->buttonOut1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->buttonEnterSq);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->textBoxSide);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->buttonOut2);
			this->groupBox2->Location = System::Drawing::Point(158, 67);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(137, 288);
			this->groupBox2->TabIndex = 43;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Квадрат";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 235);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 13);
			this->label3->TabIndex = 32;
			this->label3->Text = L"P";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(8, 251);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(123, 20);
			this->textBox3->TabIndex = 31;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(5, 187);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 13);
			this->label4->TabIndex = 30;
			this->label4->Text = L"S";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(8, 203);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(123, 20);
			this->textBox4->TabIndex = 29;
			// 
			// buttonOut2
			// 
			this->buttonOut2->Location = System::Drawing::Point(8, 154);
			this->buttonOut2->Name = L"buttonOut2";
			this->buttonOut2->Size = System::Drawing::Size(123, 23);
			this->buttonOut2->TabIndex = 28;
			this->buttonOut2->Text = L"Вывод";
			this->buttonOut2->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->textBoxWeigh);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->textBoxBott);
			this->groupBox3->Controls->Add(this->buttonOut3);
			this->groupBox3->Controls->Add(this->buttonEnterTri);
			this->groupBox3->Location = System::Drawing::Point(301, 67);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(139, 288);
			this->groupBox3->TabIndex = 44;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Треугольник";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 235);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 13);
			this->label5->TabIndex = 37;
			this->label5->Text = L"P";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(10, 251);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(123, 20);
			this->textBox5->TabIndex = 36;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(7, 187);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(14, 13);
			this->label18->TabIndex = 35;
			this->label18->Text = L"S";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(10, 203);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(123, 20);
			this->textBox6->TabIndex = 34;
			// 
			// buttonOut3
			// 
			this->buttonOut3->Location = System::Drawing::Point(10, 154);
			this->buttonOut3->Name = L"buttonOut3";
			this->buttonOut3->Size = System::Drawing::Size(123, 23);
			this->buttonOut3->TabIndex = 33;
			this->buttonOut3->Text = L"Вывод";
			this->buttonOut3->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label19);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->textBox7);
			this->groupBox4->Controls->Add(this->textBoxRad);
			this->groupBox4->Controls->Add(this->label20);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->textBox8);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->buttonOut4);
			this->groupBox4->Controls->Add(this->textBoxY);
			this->groupBox4->Controls->Add(this->textBoxX);
			this->groupBox4->Controls->Add(this->buttonEnterCiar);
			this->groupBox4->Location = System::Drawing::Point(446, 67);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(148, 288);
			this->groupBox4->TabIndex = 45;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Круг";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(3, 235);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(14, 13);
			this->label19->TabIndex = 42;
			this->label19->Text = L"P";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(6, 251);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(123, 20);
			this->textBox7->TabIndex = 41;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(3, 187);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(14, 13);
			this->label20->TabIndex = 40;
			this->label20->Text = L"S";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(6, 203);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(123, 20);
			this->textBox8->TabIndex = 39;
			// 
			// buttonOut4
			// 
			this->buttonOut4->Location = System::Drawing::Point(6, 154);
			this->buttonOut4->Name = L"buttonOut4";
			this->buttonOut4->Size = System::Drawing::Size(123, 23);
			this->buttonOut4->TabIndex = 38;
			this->buttonOut4->Text = L"Вывод";
			this->buttonOut4->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label21);
			this->groupBox5->Controls->Add(this->label14);
			this->groupBox5->Controls->Add(this->textBox9);
			this->groupBox5->Controls->Add(this->label17);
			this->groupBox5->Controls->Add(this->label22);
			this->groupBox5->Controls->Add(this->textBoxY1);
			this->groupBox5->Controls->Add(this->textBox10);
			this->groupBox5->Controls->Add(this->textBoxX1);
			this->groupBox5->Controls->Add(this->buttonOut5);
			this->groupBox5->Controls->Add(this->label15);
			this->groupBox5->Controls->Add(this->label16);
			this->groupBox5->Controls->Add(this->textBoxb);
			this->groupBox5->Controls->Add(this->textBoxa);
			this->groupBox5->Controls->Add(this->buttonEnterElips);
			this->groupBox5->Location = System::Drawing::Point(600, 67);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(153, 288);
			this->groupBox5->TabIndex = 46;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Элипс";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(12, 235);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(14, 13);
			this->label21->TabIndex = 47;
			this->label21->Text = L"P";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(15, 251);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(123, 20);
			this->textBox9->TabIndex = 46;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(12, 187);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(14, 13);
			this->label22->TabIndex = 45;
			this->label22->Text = L"S";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(15, 203);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(123, 20);
			this->textBox10->TabIndex = 44;
			// 
			// buttonOut5
			// 
			this->buttonOut5->Location = System::Drawing::Point(15, 154);
			this->buttonOut5->Name = L"buttonOut5";
			this->buttonOut5->Size = System::Drawing::Size(123, 23);
			this->buttonOut5->TabIndex = 43;
			this->buttonOut5->Text = L"Вывод";
			this->buttonOut5->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox1->Location = System::Drawing::Point(887, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(320, 318);
			this->pictureBox1->TabIndex = 47;
			this->pictureBox1->TabStop = false;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(630, 41);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(123, 20);
			this->textBox11->TabIndex = 33;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(612, 25);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(149, 13);
			this->label23->TabIndex = 33;
			this->label23->Text = L"Номер элемента в массиве";
			// 
			// buttonPrint
			// 
			this->buttonPrint->Location = System::Drawing::Point(887, 372);
			this->buttonPrint->Name = L"buttonPrint";
			this->buttonPrint->Size = System::Drawing::Size(123, 23);
			this->buttonPrint->TabIndex = 33;
			this->buttonPrint->Text = L"Нарисовать";
			this->buttonPrint->UseVisualStyleBackColor = true;
			// 
			// textBoxPrint
			// 
			this->textBoxPrint->Location = System::Drawing::Point(887, 346);
			this->textBoxPrint->Name = L"textBoxPrint";
			this->textBoxPrint->Size = System::Drawing::Size(123, 20);
			this->textBoxPrint->TabIndex = 48;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(1084, 346);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(123, 20);
			this->textBox12->TabIndex = 50;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1084, 372);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 23);
			this->button2->TabIndex = 49;
			this->button2->Text = L"Поворот";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// buttonSetsize
			// 
			this->buttonSetsize->Location = System::Drawing::Point(8, 39);
			this->buttonSetsize->Name = L"buttonSetsize";
			this->buttonSetsize->Size = System::Drawing::Size(144, 23);
			this->buttonSetsize->TabIndex = 33;
			this->buttonSetsize->Text = L"Задать размер массива";
			this->buttonSetsize->UseVisualStyleBackColor = true;
			this->buttonSetsize->Click += gcnew System::EventHandler(this, &MyForm::buttonSetsize_Click);
			// 
			// textBoxSetsize
			// 
			this->textBoxSetsize->Location = System::Drawing::Point(158, 42);
			this->textBoxSetsize->Name = L"textBoxSetsize";
			this->textBoxSetsize->Size = System::Drawing::Size(123, 20);
			this->textBoxSetsize->TabIndex = 33;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1219, 639);
			this->Controls->Add(this->textBoxSetsize);
			this->Controls->Add(this->buttonSetsize);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBoxPrint);
			this->Controls->Add(this->buttonPrint);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void buttonSetsize_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBoxSetsize->Text->Length < 1)
		return;
	int g = Convert::ToInt32(textBoxSetsize->Text);
	a->setSize(g);

}
private: System::Void buttonEnterRect_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox11->Text->Length < 1)
		return;
	unsigned int i = Convert::ToInt32(textBox11->Text);
	int j = 1;
	rectangle *k = new rectangle();
	a->settype(i, j);
	a->setLen(Convert::ToInt32(textBoxLen->Text));
	k->setHei(Convert::ToInt32(textBoxHei->Text));
}
private: System::Void buttonEnterSq_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox11->Text->Length < 1)
		return;
	unsigned int i = Convert::ToInt32(textBox11->Text);
	int j = 2;
	square* k = new square();
	k->setLen(Convert::ToInt32(textBoxLen->Text));
	k->setHei(Convert::ToInt32(textBoxHei->Text));
	a->settype(i, j);
}
};
}
