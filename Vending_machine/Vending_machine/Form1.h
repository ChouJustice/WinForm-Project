#pragma once
#include "Machine.h"

namespace Vending_machine {

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
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Panel^  panel9;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Panel^  panel10;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Panel^  panel11;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Panel^  panel12;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::Panel^  panel13;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Button^  button11;
	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::Panel^  panel14;
	private: System::Windows::Forms::Panel^  panel15;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label21;


	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		Machine a;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改這個方法的內容。
		///
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			this->panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			this->panel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			this->panel14->SuspendLayout();
			this->panel15->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(781, 424);
			this->panel1->TabIndex = 0;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->panel9);
			this->panel8->Controls->Add(this->panel10);
			this->panel8->Controls->Add(this->panel11);
			this->panel8->Controls->Add(this->panel12);
			this->panel8->Controls->Add(this->panel13);
			this->panel8->Location = System::Drawing::Point(3, 213);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(773, 207);
			this->panel8->TabIndex = 1;
			// 
			// panel9
			// 
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Controls->Add(this->label22);
			this->panel9->Controls->Add(this->button6);
			this->panel9->Controls->Add(this->label6);
			this->panel9->Controls->Add(this->pictureBox6);
			this->panel9->Location = System::Drawing::Point(619, 3);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(151, 201);
			this->panel9->TabIndex = 1;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(15, 152);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(29, 12);
			this->label22->TabIndex = 6;
			this->label22->Text = L"數量";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(64, 172);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 2;
			this->button6->Text = L"0 元";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(16, 176);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 19);
			this->label6->TabIndex = 1;
			this->label6->Text = L"●";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(38, 45);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(75, 70);
			this->pictureBox6->TabIndex = 0;
			this->pictureBox6->TabStop = false;
			// 
			// panel10
			// 
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel10->Controls->Add(this->label23);
			this->panel10->Controls->Add(this->button7);
			this->panel10->Controls->Add(this->label7);
			this->panel10->Controls->Add(this->pictureBox7);
			this->panel10->Location = System::Drawing::Point(465, 3);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(151, 201);
			this->panel10->TabIndex = 1;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(15, 152);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(29, 12);
			this->label23->TabIndex = 7;
			this->label23->Text = L"數量";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(64, 172);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 2;
			this->button7->Text = L"0 元";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(16, 176);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 19);
			this->label7->TabIndex = 1;
			this->label7->Text = L"●";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(38, 45);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(75, 70);
			this->pictureBox7->TabIndex = 0;
			this->pictureBox7->TabStop = false;
			// 
			// panel11
			// 
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel11->Controls->Add(this->label24);
			this->panel11->Controls->Add(this->button8);
			this->panel11->Controls->Add(this->label8);
			this->panel11->Controls->Add(this->pictureBox8);
			this->panel11->Location = System::Drawing::Point(311, 3);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(151, 201);
			this->panel11->TabIndex = 1;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(18, 152);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(29, 12);
			this->label24->TabIndex = 8;
			this->label24->Text = L"數量";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(64, 172);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 2;
			this->button8->Text = L"0 元";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label8->Location = System::Drawing::Point(16, 176);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 19);
			this->label8->TabIndex = 1;
			this->label8->Text = L"●";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(38, 45);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(75, 70);
			this->pictureBox8->TabIndex = 0;
			this->pictureBox8->TabStop = false;
			// 
			// panel12
			// 
			this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel12->Controls->Add(this->label25);
			this->panel12->Controls->Add(this->button9);
			this->panel12->Controls->Add(this->label9);
			this->panel12->Controls->Add(this->pictureBox9);
			this->panel12->Location = System::Drawing::Point(157, 3);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(151, 201);
			this->panel12->TabIndex = 3;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(15, 152);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(29, 12);
			this->label25->TabIndex = 7;
			this->label25->Text = L"數量";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(64, 172);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 2;
			this->button9->Text = L"0 元";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label9->Location = System::Drawing::Point(16, 176);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(28, 19);
			this->label9->TabIndex = 1;
			this->label9->Text = L"●";
			// 
			// pictureBox9
			// 
			this->pictureBox9->Location = System::Drawing::Point(38, 45);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(75, 70);
			this->pictureBox9->TabIndex = 0;
			this->pictureBox9->TabStop = false;
			// 
			// panel13
			// 
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel13->Controls->Add(this->label26);
			this->panel13->Controls->Add(this->button10);
			this->panel13->Controls->Add(this->label10);
			this->panel13->Controls->Add(this->pictureBox10);
			this->panel13->Location = System::Drawing::Point(3, 3);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(151, 201);
			this->panel13->TabIndex = 0;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(15, 152);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(29, 12);
			this->label26->TabIndex = 7;
			this->label26->Text = L"數量";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(64, 172);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 2;
			this->button10->Text = L"0 元";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label10->Location = System::Drawing::Point(16, 176);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(28, 19);
			this->label10->TabIndex = 1;
			this->label10->Text = L"●";
			// 
			// pictureBox10
			// 
			this->pictureBox10->Location = System::Drawing::Point(38, 45);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(75, 70);
			this->pictureBox10->TabIndex = 0;
			this->pictureBox10->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(773, 207);
			this->panel2->TabIndex = 0;
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->label21);
			this->panel7->Controls->Add(this->button5);
			this->panel7->Controls->Add(this->label5);
			this->panel7->Controls->Add(this->pictureBox5);
			this->panel7->Location = System::Drawing::Point(619, 3);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(151, 201);
			this->panel7->TabIndex = 1;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(15, 151);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(29, 12);
			this->label21->TabIndex = 5;
			this->label21->Text = L"數量";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(64, 172);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 2;
			this->button5->Text = L"0 元";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(16, 176);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 19);
			this->label5->TabIndex = 1;
			this->label5->Text = L"●";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(38, 45);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(75, 70);
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->label20);
			this->panel6->Controls->Add(this->button4);
			this->panel6->Controls->Add(this->label4);
			this->panel6->Controls->Add(this->pictureBox4);
			this->panel6->Location = System::Drawing::Point(465, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(151, 201);
			this->panel6->TabIndex = 1;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(15, 151);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(29, 12);
			this->label20->TabIndex = 4;
			this->label20->Text = L"數量";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(64, 172);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"0 元";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(16, 176);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 19);
			this->label4->TabIndex = 1;
			this->label4->Text = L"●";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(38, 45);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(75, 70);
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->label19);
			this->panel5->Controls->Add(this->button3);
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->pictureBox3);
			this->panel5->Location = System::Drawing::Point(311, 3);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(151, 201);
			this->panel5->TabIndex = 1;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(15, 151);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(29, 12);
			this->label19->TabIndex = 5;
			this->label19->Text = L"數量";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(64, 172);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"0 元";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(16, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 19);
			this->label3->TabIndex = 1;
			this->label3->Text = L"●";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(38, 45);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(75, 70);
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->label18);
			this->panel4->Controls->Add(this->button2);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->pictureBox2);
			this->panel4->Location = System::Drawing::Point(157, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(151, 201);
			this->panel4->TabIndex = 3;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(15, 151);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(29, 12);
			this->label18->TabIndex = 4;
			this->label18->Text = L"數量";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(64, 172);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"0 元";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(16, 176);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"●";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(38, 45);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(75, 70);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->label17);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Location = System::Drawing::Point(3, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(151, 201);
			this->panel3->TabIndex = 0;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(15, 151);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(29, 12);
			this->label17->TabIndex = 3;
			this->label17->Text = L"數量";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(64, 172);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"0 元";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(16, 176);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(28, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"●";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(38, 45);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(75, 70);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"0.png");
			this->imageList1->Images->SetKeyName(1, L"1.png");
			this->imageList1->Images->SetKeyName(2, L"2.png");
			this->imageList1->Images->SetKeyName(3, L"3.png");
			this->imageList1->Images->SetKeyName(4, L"4.png");
			this->imageList1->Images->SetKeyName(5, L"5.png");
			this->imageList1->Images->SetKeyName(6, L"6.png");
			this->imageList1->Images->SetKeyName(7, L"7.png");
			this->imageList1->Images->SetKeyName(8, L"8.png");
			this->imageList1->Images->SetKeyName(9, L"9.png");
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(21, 459);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 1;
			this->button11->Text = L"啟    動";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(38, 500);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 2;
			this->button12->Text = L"10 元";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(38, 543);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 3;
			this->button13->Text = L"50 元";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(3, 8);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(22, 24);
			this->label11->TabIndex = 4;
			this->label11->Text = L"0";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(72, 8);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(35, 24);
			this->label12->TabIndex = 5;
			this->label12->Text = L"元";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label13->ForeColor = System::Drawing::Color::Cyan;
			this->label13->Location = System::Drawing::Point(3, 8);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(21, 24);
			this->label13->TabIndex = 6;
			this->label13->Text = L"0";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label14->ForeColor = System::Drawing::Color::Cyan;
			this->label14->Location = System::Drawing::Point(72, 8);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(34, 24);
			this->label14->TabIndex = 7;
			this->label14->Text = L"元";
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"新細明體", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button14->Location = System::Drawing::Point(191, 500);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(122, 50);
			this->button14->TabIndex = 8;
			this->button14->Text = L"退幣";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(38, 584);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 23);
			this->button15->TabIndex = 9;
			this->button15->Text = L"100 元";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Location = System::Drawing::Point(645, 486);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(75, 70);
			this->pictureBox11->TabIndex = 10;
			this->pictureBox11->TabStop = false;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::Black;
			this->panel14->Controls->Add(this->label11);
			this->panel14->Controls->Add(this->label12);
			this->panel14->Location = System::Drawing::Point(462, 459);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(109, 38);
			this->panel14->TabIndex = 11;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::Gray;
			this->panel15->Controls->Add(this->label13);
			this->panel15->Controls->Add(this->label14);
			this->panel15->Location = System::Drawing::Point(462, 543);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(109, 38);
			this->panel15->TabIndex = 12;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label15->Location = System::Drawing::Point(396, 467);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(60, 24);
			this->label15->TabIndex = 13;
			this->label15->Text = L"金額";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label16->Location = System::Drawing::Point(396, 551);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(60, 24);
			this->label16->TabIndex = 14;
			this->label16->Text = L"找零";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(805, 619);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->panel15);
			this->Controls->Add(this->panel14);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->Text = L"秉澄的商店";
			this->panel1->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 a.machine_initialization();
				 Show_item();
				 a.setBalance(0);
				 a.setMoney(0);
				 label11->Text = a.getMoney().ToString();
			     label13->Text = a.getBalance().ToString();
			 }
	private: System::Void Show_item()
			 {
				 pictureBox1->Image = imageList1->Images[0];
				 pictureBox2->Image = imageList1->Images[1];
				 pictureBox3->Image = imageList1->Images[2];
				 pictureBox4->Image = imageList1->Images[3];
				 pictureBox5->Image = imageList1->Images[4];
				 pictureBox6->Image = imageList1->Images[5];
				 pictureBox7->Image = imageList1->Images[6];
				 pictureBox8->Image = imageList1->Images[7];
				 pictureBox9->Image = imageList1->Images[8];
				 pictureBox10->Image = imageList1->Images[9];
				 pictureBox11->Visible = false;

				 button1->Text = a.getPrice(0).ToString()+" 元";
				 button2->Text = a.getPrice(1).ToString()+" 元";
				 button3->Text = a.getPrice(2).ToString()+" 元";
				 button4->Text = a.getPrice(3).ToString()+" 元";
				 button5->Text = a.getPrice(4).ToString()+" 元";
				 button6->Text = a.getPrice(5).ToString()+" 元";
				 button7->Text = a.getPrice(6).ToString()+" 元";
				 button8->Text = a.getPrice(7).ToString()+" 元";
				 button9->Text = a.getPrice(8).ToString()+" 元";
				 button10->Text = a.getPrice(9).ToString()+" 元";

				 label1->ForeColor = System::Drawing::Color::Black;
				 label2->ForeColor = System::Drawing::Color::Black;
				 label3->ForeColor = System::Drawing::Color::Black;
				 label4->ForeColor = System::Drawing::Color::Black;
				 label5->ForeColor = System::Drawing::Color::Black;
				 label6->ForeColor = System::Drawing::Color::Black;
				 label7->ForeColor = System::Drawing::Color::Black;
				 label8->ForeColor = System::Drawing::Color::Black;
				 label9->ForeColor = System::Drawing::Color::Black;
				 label10->ForeColor = System::Drawing::Color::Black;

				 label17->Text = "數量 "+ a.getStock(0);
				 label18->Text = "數量 "+ a.getStock(1);
				 label19->Text = "數量 "+ a.getStock(2);
				 label20->Text = "數量 "+ a.getStock(3);
				 label21->Text = "數量 "+ a.getStock(4);
				 label22->Text = "數量 "+ a.getStock(5);
				 label23->Text = "數量 "+ a.getStock(6);
				 label24->Text = "數量 "+ a.getStock(7);
				 label25->Text = "數量 "+ a.getStock(8);
				 label26->Text = "數量 "+ a.getStock(9);
			 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) 
		 {	 
			 //int x; 
			 //x = System::Convert::ToInt16(label11->Text);
			 //x = x + 10;
			 //label11->Text = x.ToString();
			 pictureBox11->Visible = false; 
			 a.setBalance(0);
			 a.plus_10();
			 label11->Text = a.getMoney().ToString();
			 label13->Text = a.getBalance().ToString();
			     if(a.getMoney()>=a.getPrice(0)) label1->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(1)) label2->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(2)) label3->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(3)) label4->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(4)) label5->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(5)) label6->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(6)) label7->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(7)) label8->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(8)) label9->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(9)) label10->ForeColor = System::Drawing::Color::Lime;
				 if(a.getStock(0)<=0) label1->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(1)<=0) label2->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(2)<=0) label3->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(3)<=0) label4->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(4)<=0) label5->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(5)<=0) label6->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(6)<=0) label7->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(7)<=0) label8->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(8)<=0) label9->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(9)<=0) label10->ForeColor = System::Drawing::Color::Red;
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 pictureBox11->Visible = false; 
			 a.setBalance(0);
			 a.plus_50();
             label11->Text = a.getMoney().ToString();
			 label13->Text = a.getBalance().ToString();
			     if(a.getMoney()>=a.getPrice(0)) label1->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(1)) label2->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(2)) label3->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(3)) label4->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(4)) label5->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(5)) label6->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(6)) label7->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(7)) label8->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(8)) label9->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(9)) label10->ForeColor = System::Drawing::Color::Lime;
				 if(a.getStock(0)<=0) label1->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(1)<=0) label2->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(2)<=0) label3->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(3)<=0) label4->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(4)<=0) label5->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(5)<=0) label6->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(6)<=0) label7->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(7)<=0) label8->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(8)<=0) label9->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(9)<=0) label10->ForeColor = System::Drawing::Color::Red;
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 pictureBox11->Visible = false; 
			 a.setBalance(0);
			 a.plus_100();
			 label11->Text = a.getMoney().ToString();
			 label13->Text = a.getBalance().ToString();
			     if(a.getMoney()>=a.getPrice(0)) label1->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(1)) label2->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(2)) label3->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(3)) label4->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(4)) label5->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(5)) label6->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(6)) label7->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(7)) label8->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(8)) label9->ForeColor = System::Drawing::Color::Lime;
				 if(a.getMoney()>=a.getPrice(9)) label10->ForeColor = System::Drawing::Color::Lime;
				 if(a.getStock(0)<=0) label1->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(1)<=0) label2->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(2)<=0) label3->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(3)<=0) label4->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(4)<=0) label5->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(5)<=0) label6->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(6)<=0) label7->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(7)<=0) label8->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(8)<=0) label9->ForeColor = System::Drawing::Color::Red;
				 if(a.getStock(9)<=0) label10->ForeColor = System::Drawing::Color::Red;
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 //int x; 
			 //x = System::Convert::ToInt16(label11->Text);

			 //if(a.getStock(9)>0 && a.getPrice(0)<=x)
			 //{
			 //	 x = x - a.getPrice(0);
			 //}

             //label11->Text = x.ToString();
			 if(a.getStock(0)>0 && a.getMoney()>=a.getPrice(0))
			 {
			 a.setStock(0,a.getStock(0) - 1) ;
			 a.setBalance(a.getMoney() - a.getPrice(0));
			 a.setMoney(0);
			 label1->ForeColor = System::Drawing::Color::Black;
		     label2->ForeColor = System::Drawing::Color::Black;
			 label3->ForeColor = System::Drawing::Color::Black;
			 label4->ForeColor = System::Drawing::Color::Black;
			 label5->ForeColor = System::Drawing::Color::Black;
			 label6->ForeColor = System::Drawing::Color::Black;
			 label7->ForeColor = System::Drawing::Color::Black;
			 label8->ForeColor = System::Drawing::Color::Black;
			 label9->ForeColor = System::Drawing::Color::Black;
			 label10->ForeColor = System::Drawing::Color::Black;
			 pictureBox11->Image = imageList1->Images[0];
			 pictureBox11->Visible = true;
			 }

             label11->Text = a.getMoney().ToString();
             label13->Text = a.getBalance().ToString();
			 label17->Text = "數量 "+ a.getStock(0);

			 if(a.getStock(0)<=0) label1->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(1)<=0) label2->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(2)<=0) label3->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(3)<=0) label4->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(4)<=0) label5->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(5)<=0) label6->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(6)<=0) label7->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(7)<=0) label8->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(8)<=0) label9->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(9)<=0) label10->ForeColor = System::Drawing::Color::Red;
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 if(a.getStock(1)>0 && a.getMoney()>=a.getPrice(1))
			 {
			 a.setStock(1,a.getStock(1) - 1) ;
			 a.setBalance(a.getMoney() - a.getPrice(1));
			 a.setMoney(0);
			 label1->ForeColor = System::Drawing::Color::Black;
		     label2->ForeColor = System::Drawing::Color::Black;
			 label3->ForeColor = System::Drawing::Color::Black;
			 label4->ForeColor = System::Drawing::Color::Black;
			 label5->ForeColor = System::Drawing::Color::Black;
			 label6->ForeColor = System::Drawing::Color::Black;
			 label7->ForeColor = System::Drawing::Color::Black;
			 label8->ForeColor = System::Drawing::Color::Black;
			 label9->ForeColor = System::Drawing::Color::Black;
			 label10->ForeColor = System::Drawing::Color::Black;
			 pictureBox11->Image = imageList1->Images[1];
			 pictureBox11->Visible = true;
			 }

             label11->Text = a.getMoney().ToString();
             label13->Text = a.getBalance().ToString();
			 label18->Text = "數量 "+ a.getStock(1);

			 if(a.getStock(0)<=0) label1->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(1)<=0) label2->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(2)<=0) label3->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(3)<=0) label4->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(4)<=0) label5->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(5)<=0) label6->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(6)<=0) label7->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(7)<=0) label8->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(8)<=0) label9->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(9)<=0) label10->ForeColor = System::Drawing::Color::Red;
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(a.getStock(2)>0 && a.getMoney()>=a.getPrice(2))
			 {
			 a.setStock(2,a.getStock(2) - 1) ;
			 a.setBalance(a.getMoney() - a.getPrice(2));
			 a.setMoney(0);
			 label1->ForeColor = System::Drawing::Color::Black;
		     label2->ForeColor = System::Drawing::Color::Black;
			 label3->ForeColor = System::Drawing::Color::Black;
			 label4->ForeColor = System::Drawing::Color::Black;
			 label5->ForeColor = System::Drawing::Color::Black;
			 label6->ForeColor = System::Drawing::Color::Black;
			 label7->ForeColor = System::Drawing::Color::Black;
			 label8->ForeColor = System::Drawing::Color::Black;
			 label9->ForeColor = System::Drawing::Color::Black;
			 label10->ForeColor = System::Drawing::Color::Black;
			 pictureBox11->Image = imageList1->Images[2];
			 pictureBox11->Visible = true;
			 }

             label11->Text = a.getMoney().ToString();
             label13->Text = a.getBalance().ToString();
			 label19->Text = "數量 "+ a.getStock(2);

			 if(a.getStock(0)<=0) label1->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(1)<=0) label2->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(2)<=0) label3->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(3)<=0) label4->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(4)<=0) label5->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(5)<=0) label6->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(6)<=0) label7->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(7)<=0) label8->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(8)<=0) label9->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(9)<=0) label10->ForeColor = System::Drawing::Color::Red;
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(a.getStock(3)>0 && a.getMoney()>=a.getPrice(3))
			 {
			 a.setStock(3,a.getStock(3) - 1) ;
			 a.setBalance(a.getMoney() - a.getPrice(3));
			 a.setMoney(0);
			 label1->ForeColor = System::Drawing::Color::Black;
		     label2->ForeColor = System::Drawing::Color::Black;
			 label3->ForeColor = System::Drawing::Color::Black;
			 label4->ForeColor = System::Drawing::Color::Black;
			 label5->ForeColor = System::Drawing::Color::Black;
			 label6->ForeColor = System::Drawing::Color::Black;
			 label7->ForeColor = System::Drawing::Color::Black;
			 label8->ForeColor = System::Drawing::Color::Black;
			 label9->ForeColor = System::Drawing::Color::Black;
			 label10->ForeColor = System::Drawing::Color::Black;
			 pictureBox11->Image = imageList1->Images[3];
			 pictureBox11->Visible = true;
			 }

             label11->Text = a.getMoney().ToString();
             label13->Text = a.getBalance().ToString();
			 label20->Text = "數量 "+ a.getStock(3);

			 if(a.getStock(0)<=0) label1->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(1)<=0) label2->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(2)<=0) label3->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(3)<=0) label4->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(4)<=0) label5->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(5)<=0) label6->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(6)<=0) label7->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(7)<=0) label8->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(8)<=0) label9->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(9)<=0) label10->ForeColor = System::Drawing::Color::Red;
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(a.getStock(4)>0 && a.getMoney()>=a.getPrice(4))
			 {
			 a.setStock(4,a.getStock(4) - 1) ;
			 a.setBalance(a.getMoney() - a.getPrice(4));
			 a.setMoney(0);
			 label1->ForeColor = System::Drawing::Color::Black;
		     label2->ForeColor = System::Drawing::Color::Black;
			 label3->ForeColor = System::Drawing::Color::Black;
			 label4->ForeColor = System::Drawing::Color::Black;
			 label5->ForeColor = System::Drawing::Color::Black;
			 label6->ForeColor = System::Drawing::Color::Black;
			 label7->ForeColor = System::Drawing::Color::Black;
			 label8->ForeColor = System::Drawing::Color::Black;
			 label9->ForeColor = System::Drawing::Color::Black;
			 label10->ForeColor = System::Drawing::Color::Black;
			 pictureBox11->Image = imageList1->Images[4];
			 pictureBox11->Visible = true;
			 }

             label11->Text = a.getMoney().ToString();
             label13->Text = a.getBalance().ToString();
			 label21->Text = "數量 "+ a.getStock(4);

			 if(a.getStock(0)<=0) label1->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(1)<=0) label2->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(2)<=0) label3->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(3)<=0) label4->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(4)<=0) label5->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(5)<=0) label6->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(6)<=0) label7->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(7)<=0) label8->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(8)<=0) label9->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(9)<=0) label10->ForeColor = System::Drawing::Color::Red;
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(a.getStock(5)>0 && a.getMoney()>=a.getPrice(5))
			 {
			 a.setStock(5,a.getStock(5) - 1) ;
			 a.setBalance(a.getMoney() - a.getPrice(5));
			 a.setMoney(0);
			 label1->ForeColor = System::Drawing::Color::Black;
		     label2->ForeColor = System::Drawing::Color::Black;
			 label3->ForeColor = System::Drawing::Color::Black;
			 label4->ForeColor = System::Drawing::Color::Black;
			 label5->ForeColor = System::Drawing::Color::Black;
			 label6->ForeColor = System::Drawing::Color::Black;
			 label7->ForeColor = System::Drawing::Color::Black;
			 label8->ForeColor = System::Drawing::Color::Black;
			 label9->ForeColor = System::Drawing::Color::Black;
			 label10->ForeColor = System::Drawing::Color::Black;
			 pictureBox11->Image = imageList1->Images[5];
			 pictureBox11->Visible = true;
			 }

             label11->Text = a.getMoney().ToString();
             label13->Text = a.getBalance().ToString();
			 label22->Text = "數量 "+ a.getStock(5);

			 if(a.getStock(0)<=0) label1->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(1)<=0) label2->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(2)<=0) label3->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(3)<=0) label4->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(4)<=0) label5->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(5)<=0) label6->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(6)<=0) label7->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(7)<=0) label8->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(8)<=0) label9->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(9)<=0) label10->ForeColor = System::Drawing::Color::Red;
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(a.getStock(6)>0 && a.getMoney()>=a.getPrice(6))
			 {
			 a.setStock(6,a.getStock(6) - 1) ;
			 a.setBalance(a.getMoney() - a.getPrice(6));
			 a.setMoney(0);
			 label1->ForeColor = System::Drawing::Color::Black;
		     label2->ForeColor = System::Drawing::Color::Black;
			 label3->ForeColor = System::Drawing::Color::Black;
			 label4->ForeColor = System::Drawing::Color::Black;
			 label5->ForeColor = System::Drawing::Color::Black;
			 label6->ForeColor = System::Drawing::Color::Black;
			 label7->ForeColor = System::Drawing::Color::Black;
			 label8->ForeColor = System::Drawing::Color::Black;
			 label9->ForeColor = System::Drawing::Color::Black;
			 label10->ForeColor = System::Drawing::Color::Black;
			 pictureBox11->Image = imageList1->Images[6];
			 pictureBox11->Visible = true;
			 }

             label11->Text = a.getMoney().ToString();
             label13->Text = a.getBalance().ToString();
			 label23->Text = "數量 "+ a.getStock(6);

			 if(a.getStock(0)<=0) label1->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(1)<=0) label2->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(2)<=0) label3->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(3)<=0) label4->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(4)<=0) label5->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(5)<=0) label6->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(6)<=0) label7->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(7)<=0) label8->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(8)<=0) label9->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(9)<=0) label10->ForeColor = System::Drawing::Color::Red;
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(a.getStock(7)>0 && a.getMoney()>=a.getPrice(7))
			 {
			 a.setStock(7,a.getStock(7) - 1) ;
			 a.setBalance(a.getMoney() - a.getPrice(7));
			 a.setMoney(0);
			 label1->ForeColor = System::Drawing::Color::Black;
		     label2->ForeColor = System::Drawing::Color::Black;
			 label3->ForeColor = System::Drawing::Color::Black;
			 label4->ForeColor = System::Drawing::Color::Black;
			 label5->ForeColor = System::Drawing::Color::Black;
			 label6->ForeColor = System::Drawing::Color::Black;
			 label7->ForeColor = System::Drawing::Color::Black;
			 label8->ForeColor = System::Drawing::Color::Black;
			 label9->ForeColor = System::Drawing::Color::Black;
			 label10->ForeColor = System::Drawing::Color::Black;
			 pictureBox11->Image = imageList1->Images[7];
			 pictureBox11->Visible = true;
			 }

             label11->Text = a.getMoney().ToString();
             label13->Text = a.getBalance().ToString();
			 label24->Text = "數量 "+ a.getStock(7);

			 if(a.getStock(0)<=0) label1->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(1)<=0) label2->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(2)<=0) label3->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(3)<=0) label4->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(4)<=0) label5->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(5)<=0) label6->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(6)<=0) label7->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(7)<=0) label8->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(8)<=0) label9->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(9)<=0) label10->ForeColor = System::Drawing::Color::Red;
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(a.getStock(8)>0 && a.getMoney()>=a.getPrice(8))
			 {
			 a.setStock(8,a.getStock(8) - 1) ;
			 a.setBalance(a.getMoney() - a.getPrice(8));
			 a.setMoney(0);
			 label1->ForeColor = System::Drawing::Color::Black;
		     label2->ForeColor = System::Drawing::Color::Black;
			 label3->ForeColor = System::Drawing::Color::Black;
			 label4->ForeColor = System::Drawing::Color::Black;
			 label5->ForeColor = System::Drawing::Color::Black;
			 label6->ForeColor = System::Drawing::Color::Black;
			 label7->ForeColor = System::Drawing::Color::Black;
			 label8->ForeColor = System::Drawing::Color::Black;
			 label9->ForeColor = System::Drawing::Color::Black;
			 label10->ForeColor = System::Drawing::Color::Black;
			 pictureBox11->Image = imageList1->Images[8];
			 pictureBox11->Visible = true;
			 }

             label11->Text = a.getMoney().ToString();
             label13->Text = a.getBalance().ToString();
			 label25->Text = "數量 "+ a.getStock(8);

			 if(a.getStock(0)<=0) label1->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(1)<=0) label2->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(2)<=0) label3->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(3)<=0) label4->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(4)<=0) label5->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(5)<=0) label6->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(6)<=0) label7->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(7)<=0) label8->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(8)<=0) label9->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(9)<=0) label10->ForeColor = System::Drawing::Color::Red;
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(a.getStock(9)>0 && a.getMoney()>=a.getPrice(9))
			 {
			 a.setStock(9,a.getStock(9) - 1) ;
			 a.setBalance(a.getMoney() - a.getPrice(9));
			 a.setMoney(0);
			 label1->ForeColor = System::Drawing::Color::Black;
		     label2->ForeColor = System::Drawing::Color::Black;
			 label3->ForeColor = System::Drawing::Color::Black;
			 label4->ForeColor = System::Drawing::Color::Black;
			 label5->ForeColor = System::Drawing::Color::Black;
			 label6->ForeColor = System::Drawing::Color::Black;
			 label7->ForeColor = System::Drawing::Color::Black;
			 label8->ForeColor = System::Drawing::Color::Black;
			 label9->ForeColor = System::Drawing::Color::Black;
			 label10->ForeColor = System::Drawing::Color::Black;
			 pictureBox11->Image = imageList1->Images[9];
			 pictureBox11->Visible = true;
			 }

             label11->Text = a.getMoney().ToString();
             label13->Text = a.getBalance().ToString();
			 label26->Text = "數量 "+ a.getStock(9);

			 if(a.getStock(0)<=0) label1->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(1)<=0) label2->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(2)<=0) label3->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(3)<=0) label4->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(4)<=0) label5->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(5)<=0) label6->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(6)<=0) label7->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(7)<=0) label8->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(8)<=0) label9->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(9)<=0) label10->ForeColor = System::Drawing::Color::Red;
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(a.getBalance() == 0)
			 {
			     pictureBox11->Visible = false;
			 }
			 if(a.getMoney() > 0)
			 {
			     a.setBalance(a.getMoney());
			     a.setMoney(0);
			 }
			 label11->Text = a.getMoney().ToString();
             label13->Text = a.getBalance().ToString();

			 label1->ForeColor = System::Drawing::Color::Black;
		     label2->ForeColor = System::Drawing::Color::Black;
			 label3->ForeColor = System::Drawing::Color::Black;
			 label4->ForeColor = System::Drawing::Color::Black;
			 label5->ForeColor = System::Drawing::Color::Black;
			 label6->ForeColor = System::Drawing::Color::Black;
			 label7->ForeColor = System::Drawing::Color::Black;
			 label8->ForeColor = System::Drawing::Color::Black;
			 label9->ForeColor = System::Drawing::Color::Black;
			 label10->ForeColor = System::Drawing::Color::Black;

			 if(a.getStock(0)<=0) label1->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(1)<=0) label2->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(2)<=0) label3->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(3)<=0) label4->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(4)<=0) label5->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(5)<=0) label6->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(6)<=0) label7->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(7)<=0) label8->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(8)<=0) label9->ForeColor = System::Drawing::Color::Red;
			 if(a.getStock(9)<=0) label10->ForeColor = System::Drawing::Color::Red;
		 }
};
}

