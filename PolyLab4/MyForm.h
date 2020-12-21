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
	int m_p[12];

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






	private: System::Windows::Forms::TextBox^ textBoxRad;


	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBoxb;

	private: System::Windows::Forms::TextBox^ textBoxa;







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




















private: System::Windows::Forms::PictureBox^ pictureBox1;

private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Button^ buttonPrint;
private: System::Windows::Forms::TextBox^ textBoxPrint;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ buttonSetsize;
private: System::Windows::Forms::TextBox^ textBoxSetsize;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::TextBox^ textBox3;

private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::RichTextBox^ richTextBox1;
private: System::Windows::Forms::Button^ button10;

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
			this->textBoxRad = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBoxb = (gcnew System::Windows::Forms::TextBox());
			this->textBoxa = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonOut1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->buttonPrint = (gcnew System::Windows::Forms::Button());
			this->textBoxPrint = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->buttonSetsize = (gcnew System::Windows::Forms::Button());
			this->textBoxSetsize = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
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
			this->buttonEnterTri->Click += gcnew System::EventHandler(this, &MyForm::buttonEnterTri_Click);
			// 
			// buttonEnterCiar
			// 
			this->buttonEnterCiar->Location = System::Drawing::Point(6, 30);
			this->buttonEnterCiar->Name = L"buttonEnterCiar";
			this->buttonEnterCiar->Size = System::Drawing::Size(123, 23);
			this->buttonEnterCiar->TabIndex = 19;
			this->buttonEnterCiar->Text = L"Ввод";
			this->buttonEnterCiar->UseVisualStyleBackColor = true;
			this->buttonEnterCiar->Click += gcnew System::EventHandler(this, &MyForm::buttonEnterCiar_Click);
			// 
			// buttonEnterElips
			// 
			this->buttonEnterElips->Location = System::Drawing::Point(6, 30);
			this->buttonEnterElips->Name = L"buttonEnterElips";
			this->buttonEnterElips->Size = System::Drawing::Size(123, 23);
			this->buttonEnterElips->TabIndex = 20;
			this->buttonEnterElips->Text = L"Ввод";
			this->buttonEnterElips->UseVisualStyleBackColor = true;
			this->buttonEnterElips->Click += gcnew System::EventHandler(this, &MyForm::buttonEnterElips_Click);
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
			this->label8->Size = System::Drawing::Size(45, 13);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Высота";
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
			// textBoxRad
			// 
			this->textBoxRad->Location = System::Drawing::Point(6, 79);
			this->textBoxRad->Name = L"textBoxRad";
			this->textBoxRad->Size = System::Drawing::Size(123, 20);
			this->textBoxRad->TabIndex = 32;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(44, 63);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(43, 13);
			this->label13->TabIndex = 33;
			this->label13->Text = L"Радиус";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(90, 63);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(13, 13);
			this->label15->TabIndex = 37;
			this->label15->Text = L"b";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(30, 63);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(13, 13);
			this->label16->TabIndex = 36;
			this->label16->Text = L"a";
			// 
			// textBoxb
			// 
			this->textBoxb->Location = System::Drawing::Point(70, 79);
			this->textBoxb->Name = L"textBoxb";
			this->textBoxb->Size = System::Drawing::Size(59, 20);
			this->textBoxb->TabIndex = 35;
			// 
			// textBoxa
			// 
			this->textBoxa->Location = System::Drawing::Point(6, 79);
			this->textBoxa->Name = L"textBoxa";
			this->textBoxa->Size = System::Drawing::Size(58, 20);
			this->textBoxa->TabIndex = 34;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBoxHei);
			this->groupBox1->Controls->Add(this->textBoxLen);
			this->groupBox1->Controls->Add(this->buttonEnterRect);
			this->groupBox1->Location = System::Drawing::Point(8, 67);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(144, 204);
			this->groupBox1->TabIndex = 42;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Прямоугольник";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 510);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 27;
			this->label2->Text = L"P";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(20, 526);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(123, 20);
			this->textBox2->TabIndex = 26;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 462);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 25;
			this->label1->Text = L"S";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(20, 478);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(123, 20);
			this->textBox1->TabIndex = 24;
			// 
			// buttonOut1
			// 
			this->buttonOut1->Location = System::Drawing::Point(20, 429);
			this->buttonOut1->Name = L"buttonOut1";
			this->buttonOut1->Size = System::Drawing::Size(123, 23);
			this->buttonOut1->TabIndex = 23;
			this->buttonOut1->Text = L"Вывод";
			this->buttonOut1->UseVisualStyleBackColor = true;
			this->buttonOut1->Click += gcnew System::EventHandler(this, &MyForm::buttonOut1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->buttonEnterSq);
			this->groupBox2->Controls->Add(this->textBoxSide);
			this->groupBox2->Location = System::Drawing::Point(158, 67);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(137, 204);
			this->groupBox2->TabIndex = 43;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Квадрат";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->textBoxWeigh);
			this->groupBox3->Controls->Add(this->textBoxBott);
			this->groupBox3->Controls->Add(this->buttonEnterTri);
			this->groupBox3->Location = System::Drawing::Point(301, 67);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(139, 204);
			this->groupBox3->TabIndex = 44;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Треугольник";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->textBoxRad);
			this->groupBox4->Controls->Add(this->buttonEnterCiar);
			this->groupBox4->Location = System::Drawing::Point(446, 67);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(137, 204);
			this->groupBox4->TabIndex = 45;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Круг";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label15);
			this->groupBox5->Controls->Add(this->label16);
			this->groupBox5->Controls->Add(this->textBoxb);
			this->groupBox5->Controls->Add(this->textBoxa);
			this->groupBox5->Controls->Add(this->buttonEnterElips);
			this->groupBox5->Location = System::Drawing::Point(590, 67);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(135, 204);
			this->groupBox5->TabIndex = 46;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Элипс";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox1->Location = System::Drawing::Point(887, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(320, 318);
			this->pictureBox1->TabIndex = 47;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(602, 39);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(123, 20);
			this->textBox11->TabIndex = 33;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(584, 23);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(149, 13);
			this->label23->TabIndex = 33;
			this->label23->Text = L"Номер элемента в массиве";
			// 
			// buttonPrint
			// 
			this->buttonPrint->Location = System::Drawing::Point(887, 410);
			this->buttonPrint->Name = L"buttonPrint";
			this->buttonPrint->Size = System::Drawing::Size(123, 23);
			this->buttonPrint->TabIndex = 33;
			this->buttonPrint->Text = L"Нарисовать";
			this->buttonPrint->UseVisualStyleBackColor = true;
			this->buttonPrint->Click += gcnew System::EventHandler(this, &MyForm::buttonPrint_Click);
			// 
			// textBoxPrint
			// 
			this->textBoxPrint->Location = System::Drawing::Point(887, 384);
			this->textBoxPrint->Name = L"textBoxPrint";
			this->textBoxPrint->Size = System::Drawing::Size(123, 20);
			this->textBoxPrint->TabIndex = 48;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(1084, 355);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(55, 20);
			this->textBox12->TabIndex = 50;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1084, 381);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 23);
			this->button2->TabIndex = 49;
			this->button2->Text = L"Поворот";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// buttonSetsize
			// 
			this->buttonSetsize->Location = System::Drawing::Point(8, 39);
			this->buttonSetsize->Name = L"buttonSetsize";
			this->buttonSetsize->Size = System::Drawing::Size(144, 20);
			this->buttonSetsize->TabIndex = 33;
			this->buttonSetsize->Text = L"Задать размер массива";
			this->buttonSetsize->UseVisualStyleBackColor = true;
			this->buttonSetsize->Click += gcnew System::EventHandler(this, &MyForm::buttonSetsize_Click);
			// 
			// textBoxSetsize
			// 
			this->textBoxSetsize->Location = System::Drawing::Point(158, 39);
			this->textBoxSetsize->Name = L"textBoxSetsize";
			this->textBoxSetsize->Size = System::Drawing::Size(123, 20);
			this->textBoxSetsize->TabIndex = 33;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(20, 301);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 23);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Умножить на";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(20, 359);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(123, 20);
			this->textBox3->TabIndex = 24;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(20, 330);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(123, 23);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Разделить на";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(307, 301);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(123, 20);
			this->button4->TabIndex = 53;
			this->button4->Text = L">";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(178, 330);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(123, 20);
			this->textBox4->TabIndex = 52;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(307, 330);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(123, 20);
			this->button5->TabIndex = 51;
			this->button5->Text = L"==";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(307, 356);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(123, 20);
			this->button6->TabIndex = 54;
			this->button6->Text = L"<";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(436, 330);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(123, 20);
			this->textBox5->TabIndex = 55;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(307, 382);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(123, 20);
			this->textBox6->TabIndex = 56;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(887, 355);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(56, 20);
			this->textBox7->TabIndex = 57;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(949, 355);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(61, 20);
			this->textBox8->TabIndex = 58;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(971, 339);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 13);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Y";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(909, 339);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 13);
			this->label4->TabIndex = 28;
			this->label4->Text = L"X";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(449, 315);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 13);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Второая фигура";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(197, 315);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(84, 13);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Первая фигура";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(449, 463);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(88, 13);
			this->label12->TabIndex = 60;
			this->label12->Text = L"Второая фигура";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(197, 463);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(84, 13);
			this->label14->TabIndex = 59;
			this->label14->Text = L"Первая фигура";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(436, 478);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(123, 20);
			this->textBox9->TabIndex = 63;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(178, 478);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(123, 20);
			this->textBox10->TabIndex = 62;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(307, 478);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(123, 20);
			this->button7->TabIndex = 61;
			this->button7->Text = L"Копировать в";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(307, 525);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(123, 20);
			this->button8->TabIndex = 64;
			this->button8->Text = L"Сортировка";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(1155, 355);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(52, 20);
			this->textBox13->TabIndex = 65;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(647, 405);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(123, 20);
			this->button9->TabIndex = 66;
			this->button9->Text = L"ВЫВОД";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(590, 431);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(242, 164);
			this->richTextBox1->TabIndex = 67;
			this->richTextBox1->Text = L"";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(158, 12);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(123, 20);
			this->button10->TabIndex = 68;
			this->button10->Text = L"Задать случайно";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1219, 639);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBoxSetsize);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonSetsize);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->buttonOut1);
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
	int type = 1;
	a->settype(i, type);
	a->SET(i, type, Convert::ToInt32(textBoxLen->Text), Convert::ToInt32(textBoxHei->Text));
}
private: System::Void buttonEnterSq_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox11->Text->Length < 1)
		return;
	unsigned int i = Convert::ToInt32(textBox11->Text);
	int type = 2;
	a->settype(i, type);
	a->SET(i, type, 0, Convert::ToInt32(textBoxSide->Text));
}
private: System::Void buttonEnterTri_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox11->Text->Length < 1)
		return;
	unsigned int i = Convert::ToInt32(textBox11->Text);
	int type = 3;
	a->settype(i, type);
	a->SET(i, type, Convert::ToInt32(textBoxBott->Text), Convert::ToInt32(textBoxWeigh->Text));
}
private: System::Void buttonEnterCiar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox11->Text->Length < 1)
		return;
	unsigned int i = Convert::ToInt32(textBox11->Text);
	int type = 4;
	a->settype(i, type);
	a->SET(i, type, Convert::ToInt32(textBoxRad->Text), 0);
}
private: System::Void buttonEnterElips_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox11->Text->Length < 1)
		return;
	unsigned int i = Convert::ToInt32(textBox11->Text);
	int type = 5;
	a->settype(i, type);
	a->SET(i, type, Convert::ToInt32(textBoxa->Text), Convert::ToInt32(textBoxb->Text));
}
private: System::Void buttonOut1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox11->Text->Length < 1)
		return;
	unsigned int i = Convert::ToInt32(textBox11->Text);
	String^ s = a->ret(i);
	String^ token1 = s->Split('/')[0]; // 0- до +     1- после
	String^ token2 = s->Split('/')[1];
	textBox1->Text = token1;
	textBox2->Text = token2;
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox11->Text->Length < 1)
		return;
	unsigned int i = Convert::ToInt32(textBox11->Text);
	a->Change(i, 1, Convert::ToInt32(textBox3->Text));
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox11->Text->Length < 1)
		return;
	unsigned int i = Convert::ToInt32(textBox11->Text);
	a->Change(i, 1, Convert::ToInt32(textBox3->Text));
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox4->Text->Length < 1 || textBox5->Text->Length < 1)
		return;
	textBox6->Text = Convert::ToString(a->comparison(Convert::ToInt32(textBox4->Text), Convert::ToInt32(textBox5->Text), 3));
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox4->Text->Length < 1 || textBox5->Text->Length < 1)
		return;
	textBox6->Text = Convert::ToString(a->comparison(Convert::ToInt32(textBox4->Text), Convert::ToInt32(textBox5->Text), 1));
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox4->Text->Length < 1 || textBox5->Text->Length < 1)
		return;
	textBox6->Text = Convert::ToString(a->comparison(Convert::ToInt32(textBox4->Text), Convert::ToInt32(textBox5->Text), 2));
}
private: System::Void buttonPrint_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int i = Convert::ToInt32(textBoxPrint->Text);
	int x = Convert::ToInt32(textBox7->Text);
	int y = Convert::ToInt32(textBox8->Text);
	if (i < (*a).getSize())
	{
		int h = a->type(i);
		switch (h) 
		{
		case 1:
			m_p[0] = x;
			m_p[1] = y;
			m_p[2] = x + (*a)[i].GetWidth() * 3;
			m_p[3] = y;
			m_p[4] = x;
			m_p[5] = y + (*a)[i].GetHeight() * 3;
			m_p[6] = x + (*a)[i].GetWidth() * 3;
			m_p[7] = y + (*a)[i].GetHeight() * 3;
			m_p[8] = 0;
			m_p[9] = 0;
			m_p[10] = 0;
			m_p[11] = 0;
			pictureBox1->Refresh();
			break;
		case 2:
			m_p[0] = x;
			m_p[1] = y;
			m_p[2] = x + (*a)[i].GetHeight() * 3;
			m_p[3] = y;
			m_p[4] = x;
			m_p[5] = y + (*a)[i].GetHeight() * 3;
			m_p[6] = x + (*a)[i].GetHeight() * 3;
			m_p[7] = y + (*a)[i].GetHeight() * 3;
			m_p[8] = 0;
			m_p[9] = 0;
			m_p[10] = 0;
			m_p[11] = 0;
			pictureBox1->Refresh();
			break;
		case 3:
			m_p[0] = x;
			m_p[1] = y;
			m_p[2] = x + (*a)[i].GetWidth() * 3;
			m_p[3] = y + (*a)[i].GetHeight() * 3;
			m_p[4] = x - (*a)[i].GetWidth() * 3;
			m_p[5] = y - (*a)[i].GetHeight() * 3;
			m_p[6] = 0;
			m_p[7] = 0;
			m_p[8] = 0;
			m_p[9] = 0;
			m_p[10] = 0;
			m_p[11] = 0;
			pictureBox1->Refresh();
			break;
		case 4:
			m_p[0] = 0;
			m_p[1] = 0;
			m_p[2] = 0;
			m_p[3] = 0;
			m_p[4] = 0;
			m_p[5] = 0;
			m_p[6] = 0;
			m_p[7] = 0;
			m_p[8] = x;
			m_p[9] = y;
			m_p[10] = x + (*a)[i].GetWidth() * 1.5;
			m_p[11] = y + (*a)[i].GetWidth() * 1.5;
			pictureBox1->Refresh();
			break;
		case 5:
			m_p[0] = 0;
			m_p[1] = 0;
			m_p[2] = 0;
			m_p[3] = 0;
			m_p[4] = 0;
			m_p[5] = 0;
			m_p[6] = 0;
			m_p[7] = 0;
			m_p[8] = x;
			m_p[9] = y;
			m_p[10] = x + (*a)[i].GetWidth() * 3;
			m_p[11] = y + (*a)[i].GetHeight() * 3;
			pictureBox1->Refresh();
			break;
		}
	}
	return;
}
private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) 
{
	/*int l = a->type(Convert::ToInt32(textBoxPrint->Text));
	switch(l)
	{ 
	case 1:
	{
		e->Graphics->DrawLine(System::Drawing::Pens::Green, m_p[0] * 5, m_p[1] * 5, m_p[2] * 5, m_p[3] * 5);
		e->Graphics->DrawLine(System::Drawing::Pens::Black, m_p[0] * 5, m_p[1] * 5, m_p[4] * 5, m_p[5] * 5);
		e->Graphics->DrawLine(System::Drawing::Pens::Black, m_p[2] * 5, m_p[3] * 5, m_p[7] * 5, m_p[8] * 5);
		e->Graphics->DrawLine(System::Drawing::Pens::Black, m_p[4] * 5, m_p[5] * 5, m_p[7] * 5, m_p[8] * 5);
	}
	case 2:
	{
		e->Graphics->DrawLine(System::Drawing::Pens::Green, m_p[0] * 5, m_p[1] * 5, m_p[2] * 5, m_p[3] * 5);
		e->Graphics->DrawLine(System::Drawing::Pens::Black, m_p[0] * 5, m_p[1] * 5, m_p[4] * 5, m_p[5] * 5);
		e->Graphics->DrawLine(System::Drawing::Pens::Black, m_p[2] * 5, m_p[3] * 5, m_p[7] * 5, m_p[8] * 5);
		e->Graphics->DrawLine(System::Drawing::Pens::Black, m_p[4] * 5, m_p[5] * 5, m_p[7] * 5, m_p[8] * 5);
	}
	case 3:
	{
		e->Graphics->DrawLine(System::Drawing::Pens::Green, m_p[0], m_p[1], m_p[2], m_p[3]);
		e->Graphics->DrawLine(System::Drawing::Pens::Black, m_p[0], m_p[1], m_p[4], m_p[5]);
	}
	case 4:
	{
		e->Graphics->DrawEllipse(System::Drawing::Pens::Green, m_p[0], m_p[1], m_p[2], m_p[3]);
	}
	case 5:
	{
		e->Graphics->DrawEllipse(System::Drawing::Pens::Green, m_p[0], m_p[1], m_p[2], m_p[3]);
	}
	}*/
	e->Graphics->DrawLine(System::Drawing::Pens::Green, m_p[0], m_p[1], m_p[2], m_p[3]);
	e->Graphics->DrawLine(System::Drawing::Pens::Black, m_p[0], m_p[1], m_p[4], m_p[5]);
	e->Graphics->DrawLine(System::Drawing::Pens::Black, m_p[2], m_p[3], m_p[6], m_p[7]);
	e->Graphics->DrawLine(System::Drawing::Pens::Black, m_p[4], m_p[5], m_p[6], m_p[7]);
	e->Graphics->DrawEllipse(System::Drawing::Pens::Black, m_p[8], m_p[9], m_p[10], m_p[11]);

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int i = Convert::ToInt32(textBoxPrint->Text);
	int x = Convert::ToInt32(textBox7->Text);
	int y = Convert::ToInt32(textBox8->Text);
	int k = Convert::ToInt32(textBox13->Text);
	if (i < (*a).getSize())
	{
		int h = a->type(i);
		switch (h)
		{
		case 1:
			m_p[0] = x;
			m_p[1] = y + k;
			m_p[2] = x + (*a)[i].GetWidth() * 3 ;
			m_p[3] = y + k;
			m_p[4] = x;
			m_p[5] = y + (*a)[i].GetHeight() * 3 + k;
			m_p[6] = x + (*a)[i].GetWidth() * 3;
			m_p[7] = y + (*a)[i].GetHeight() * 3 + k;
			m_p[8] = 0;
			m_p[9] = 0;
			m_p[10] = 0;
			m_p[11] = 0;
			pictureBox1->Refresh();
			break;
		case 2:
			m_p[0] = x;
			m_p[1] = y + k;
			m_p[2] = x + (*a)[i].GetHeight() * 3 - k;
			m_p[3] = y;
			m_p[4] = x;
			m_p[5] = y + (*a)[i].GetHeight() * 3;
			m_p[6] = x + (*a)[i].GetHeight() * 3 - k;
			m_p[7] = y + (*a)[i].GetHeight() * 3 + k;
			m_p[8] = 0;
			m_p[9] = 0;
			m_p[10] = 0;
			m_p[11] = 0;
			pictureBox1->Refresh();
			break;
		case 3:
			m_p[0] = x;
			m_p[1] = y + k;
			m_p[2] = x + (*a)[i].GetWidth() * 3;
			m_p[3] = y + (*a)[i].GetHeight() * 3 + k;
			m_p[4] = x - (*a)[i].GetWidth() * 3;
			m_p[5] = y - (*a)[i].GetHeight() * 3 + k;
			m_p[6] = 0;
			m_p[7] = 0;
			m_p[8] = 0;
			m_p[9] = 0;
			m_p[10] = 0;
			m_p[11] = 0;
			pictureBox1->Refresh();
			break;
		case 4:
			m_p[0] = 0;
			m_p[1] = 0;
			m_p[2] = 0;
			m_p[3] = 0;
			m_p[4] = 0;
			m_p[5] = 0;
			m_p[6] = 0;
			m_p[7] = 0;
			m_p[8] = x;
			m_p[9] = y + k;
			m_p[10] = x + (*a)[i].GetWidth() * 1.5;
			m_p[11] = y + (*a)[i].GetWidth() * 1.5;
			pictureBox1->Refresh();
			break;
		case 5:
			m_p[0] = 0;
			m_p[1] = 0;
			m_p[2] = 0;
			m_p[3] = 0;
			m_p[4] = 0;
			m_p[5] = 0;
			m_p[6] = 0;
			m_p[7] = 0;
			m_p[8] = x;
			m_p[9] = y + 20;
			m_p[10] = x + (*a)[i].GetWidth() * 3;
			m_p[11] = y + (*a)[i].GetHeight() * 3 + k;
			pictureBox1->Refresh();
			break;
		}
	}
	return;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox10->Text->Length < 1 || textBox9->Text->Length < 1)
		return;
	int i = Convert::ToInt32(textBox10->Text);
	int k = Convert::ToInt32(textBox9->Text);
	a->Change(i, 3, k);

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) 
{
	a->sort();

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (richTextBox1->Text->Length > 0)
		richTextBox1->Text = " ";
	for (int i; i < a->getSize(); i++)
	{
		richTextBox1->Text += Convert::ToString(i) + " - " + "  Тип-  " + Convert::ToString(a->type(i)) + "  S/P-  " + Convert::ToString(a->ret(i)) + "\n";
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBoxSetsize->Text->Length < 1)
		return;
	int g = Convert::ToInt32(textBoxSetsize->Text);
	a->setSizerand(g);

}
};
}
