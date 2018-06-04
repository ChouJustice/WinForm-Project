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
	/// Form1 的摘要
	///
	/// 警告: 如果您變更這個類別的名稱，就必須變更與這個類別所依據之所有 .resx 檔案關聯的
	///          Managed 資源編譯器工具的 'Resource File Name' 屬性。
	///          否則，這些設計工具
	///          將無法與這個表單關聯的當地語系化資源
	///          正確互動。
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
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
	private: System::Windows::Forms::TextBox^  textBox1;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>

		array <Ball^> ^myBall;
		array <SolidBrush^> ^myBrush;
		bool start;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Timer^  timer1;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改這個方法的內容。
		///
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(172, 418);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(73, 22);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label1->Location = System::Drawing::Point(126, 421);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"球數";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(665, 446);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 int num = System::Convert::ToInt16(textBox1->Text);

				 myBall = gcnew array<Ball^> (num);
				 myBrush = gcnew array<SolidBrush^> (num);

				 for(int i=0;i< myBall->Length;i++)
				 {
			//		 System::Random^ rand = gcnew System::Random(i+1) * (int)System::DateTime::Now::get().Millisecond);

					 myBall[i] = gcnew Ball();
					 myBall[i]->setColor(i);
					 myBall[i]->setMove(i+1);
					 myBall[i]->setPosition(i*2+10,i*4+4);
					 myBrush[i] = gcnew SolidBrush(myBall[i]->getColor());
				 }
				 
				 timer1->Enabled = true;
				 timer1->Interval = 30;

				 start = true;
			 }

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
			 {
				 for(int i=0;i< myBall->Length;i++)
					 myBall[i]->ballMoving();

				 this->panel1->Invalidate();
			 }

private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) 
		 {
			 if(start)
			 {
			     for(int i=0;i< myBall->Length;i++)
			     {
                     e->Graphics->FillEllipse(myBrush[i],myBall[i]->getX(),myBall[i]->getY(),50,50);
			     }
			 }
		 }
};
}

