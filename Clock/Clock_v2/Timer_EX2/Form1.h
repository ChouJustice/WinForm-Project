#pragma once
#include "Clock.h" 


namespace Timer_EX2 {

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
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		Clock t1;
		bool start , start1;
		float x1,y1,x2,y2,x3,y3,min_x2,min_y2,min_x3,min_y3,hr_x2,hr_y2,hr_x3,hr_y3;
		SolidBrush^ mywatch;
		Pen^ myhour;
		Pen^ myminute;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button2;
			 Pen^ mysecond;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改這個方法的內容。
		///
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(51, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(225, 61);
			this->label1->TabIndex = 0;
			this->label1->Text = L"00:00:00";
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(12, 83);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(300, 236);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 322);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 12);
			this->label2->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 344);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 12);
			this->label3->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 365);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 12);
			this->label4->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(237, 354);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"開始";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox1->Location = System::Drawing::Point(39, 339);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(32, 22);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox2->Location = System::Drawing::Point(101, 339);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(32, 22);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox3->Location = System::Drawing::Point(165, 339);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(34, 22);
			this->textBox3->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 342);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(17, 12);
			this->label5->TabIndex = 9;
			this->label5->Text = L"時";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(78, 342);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(17, 12);
			this->label6->TabIndex = 10;
			this->label6->Text = L"分";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(139, 342);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(17, 12);
			this->label7->TabIndex = 11;
			this->label7->Text = L"秒";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(237, 325);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"設定";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(331, 383);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = resources->GetString(L"$this.Text");
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 timer1->Enabled = true;
				 timer1->Interval = 1000;
				 //t1.set_Time(0,0,0);
				 x1 = 150;
				 y1 = 100;
				 //
				 x3 = 150;
				 y3 = 5;
				 x2 = x3;
				 y2 = y3;
				 //
				 min_x3 = 150;
				 min_y3 = 25;
				 min_x2 = min_x3;
				 min_y2 = min_y3;
				 //
				 hr_x3 = 150;
				 hr_y3 = 50;
				 hr_x2 = hr_x3;
				 hr_y2 = hr_y3;
				 
				 mywatch = gcnew SolidBrush(System::Drawing::Color::Yellow);
				 myhour = gcnew Pen(System::Drawing::Color::Red,9);
				 myminute = gcnew Pen(System::Drawing::Color::Purple,6);
				 mysecond = gcnew Pen(System::Drawing::Color::Black,3);
				 start = true;
				 start1 = false;
			 }

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
			 double z1,z2,z3,m1,m2,m3,h1,h2,h3;
			 String^ s="";
			 t1.incSecond();
			 s = (t1.get_Hour() < 10) ? "0"+t1.get_Hour().ToString() : t1.get_Hour().ToString();
			 s += ":"+((t1.get_Minute() < 10) ? "0"+t1.get_Minute().ToString() : t1.get_Minute().ToString());
			 s += ":"+((t1.get_Second() < 10) ? "0"+t1.get_Second().ToString() : t1.get_Second().ToString());
			 label1->Text = s;

			 z1 = Math::PI * 6 * t1.get_Second() / 180.0;
			 z2 = 95 * Math::Sin(z1);
			 z3 = 95 * Math::Cos(z1);
			 m1 = Math::PI * 0.1 * (t1.get_Minute()*60 + t1.get_Second()) / 180.0;
			 m2 = 75 * Math::Sin(m1);
			 m3 = 75 * Math::Cos(m1);
			 h1 = Math::PI * 0.5 * (t1.get_Hour()*60 + t1.get_Minute()) / 180.0;
			 h2 = 50 * Math::Sin(h1);
			 h3 = 50 * Math::Cos(h1);

//			 label2->Text = z1.ToString();
//			 label3->Text = m2.ToString();
//			 label4->Text = m3.ToString();

			 x2 = x3 + z2;
			 y2 = y3 + 95 - z3;
			 min_x2 = min_x3 + m2;
			 min_y2 = min_y3 + 75 - m3;
			 hr_x2 = hr_x3 + h2;
			 hr_y2 = hr_y3 + 50 - h3;
			 this->panel1->Invalidate();
		 }

private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) 
		 {
			 if(start)
			 {
				 e->Graphics->FillEllipse(mywatch, 50,1,200,200);
				 e->Graphics->DrawLine(myminute,x1,y1,min_x2,min_y2);
                 e->Graphics->DrawLine(myhour,x1,y1,hr_x2,hr_y2);
				 e->Graphics->DrawLine(mysecond,x1,y1,x2,y2);
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 timer1->Enabled = false;
			 int h1 , m1 , s1;
			     h1 = System::Convert::ToInt16(textBox1->Text);
			     m1 = System::Convert::ToInt16(textBox2->Text);
                 s1 = System::Convert::ToInt16(textBox3->Text);
                 t1.set_Time(h1,m1,s1);
		 }
};
}

