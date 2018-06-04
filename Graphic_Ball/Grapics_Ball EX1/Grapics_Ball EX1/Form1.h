#pragma once
#include "Ball.h"


namespace Grapics_BallEX1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 ���K�n
	///
	/// ĵ�i: �p�G�z�ܧ�o�����O���W�١A�N�����ܧ�P�o�����O�Ҩ̾ڤ��Ҧ� .resx �ɮ����p��
	///          Managed �귽�sĶ���u�㪺 'Resource File Name' �ݩʡC
	///          �_�h�A�o�ǳ]�p�u��
	///          �N�L�k�P�o�Ӫ�����p����a�y�t�Ƹ귽
	///          ���T���ʡC
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �b���[�J�غc�禡�{���X
			//
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// �]�p�u��һݪ��ܼơC
		/// </summary>

		Ball^ a;
		Ball^ b;
		Ball^ c;

		System::Drawing::SolidBrush^ myBrush1;
		System::Drawing::SolidBrush^ myBrush2;
		System::Drawing::SolidBrush^ myBrush3;
	private: System::Windows::Forms::Timer^  timer1;
			 System::Drawing::SolidBrush^ myBrush;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边�ק�o�Ӥ�k�����e�C
		///
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Location = System::Drawing::Point(33, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(600, 400);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(298, 418);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(665, 446);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 timer1->Enabled = true;
				 timer1->Interval = 10;

				 a->setMove(3);
				 a->setPosition(100,100);
			     b->setMove(1);
				 b->setPosition(200,50);
				 c->setMove(2);
				 c->setPosition(50,350);
			 }

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
			 {
				 a->ballMoving();
				 b->ballMoving();
				 c->ballMoving();

				 this->panel1->Invalidate();
			 }

private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) 
		 {
			 e->Graphics->FillEllipse(myBrush1,a->getX(),a->getY(),50,50);
			 e->Graphics->FillEllipse(myBrush2,b->getX(),b->getY(),50,50);
			 e->Graphics->FillEllipse(myBrush3,c->getX(),c->getY(),50,50);
		 }

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			 a = gcnew Ball(System::Drawing::Color::Red);
			 b = gcnew Ball(System::Drawing::Color::ForestGreen);
			 c = gcnew Ball(System::Drawing::Color::Yellow);
			 myBrush1 = gcnew SolidBrush(a->getColor());
			 myBrush2 = gcnew SolidBrush(b->getColor());
			 myBrush3 = gcnew SolidBrush(c->getColor());
		 }
};
}

