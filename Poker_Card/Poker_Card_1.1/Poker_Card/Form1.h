#pragma once
#include "PlayingCard.h"
#include "Card.h"


namespace Poker_Card {

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
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		PlayingCard ^myHand;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::ComponentModel::IContainer^  components;


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
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(523, 351);
			this->panel1->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel3->Controls->Add(this->label20);
			this->panel3->Controls->Add(this->label19);
			this->panel3->Controls->Add(this->label18);
			this->panel3->Controls->Add(this->label17);
			this->panel3->Controls->Add(this->label16);
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->pictureBox6);
			this->panel3->Controls->Add(this->pictureBox7);
			this->panel3->Controls->Add(this->pictureBox8);
			this->panel3->Controls->Add(this->pictureBox9);
			this->panel3->Controls->Add(this->pictureBox10);
			this->panel3->Location = System::Drawing::Point(3, 177);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(517, 171);
			this->panel3->TabIndex = 5;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(74, 143);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(39, 12);
			this->label20->TabIndex = 18;
			this->label20->Text = L"label20";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(22, 143);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(39, 12);
			this->label19->TabIndex = 17;
			this->label19->Text = L"label19";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(169, 143);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(39, 12);
			this->label18->TabIndex = 16;
			this->label18->Text = L"label18";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(119, 143);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(39, 12);
			this->label17->TabIndex = 15;
			this->label17->Text = L"label17";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(264, 143);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(39, 12);
			this->label16->TabIndex = 14;
			this->label16->Text = L"label16";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(214, 143);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(39, 12);
			this->label15->TabIndex = 13;
			this->label15->Text = L"label15";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(359, 143);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(39, 12);
			this->label14->TabIndex = 12;
			this->label14->Text = L"label14";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(309, 143);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(39, 12);
			this->label13->TabIndex = 11;
			this->label13->Text = L"label13";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(454, 143);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(39, 12);
			this->label12->TabIndex = 10;
			this->label12->Text = L"label12";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(404, 143);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(39, 12);
			this->label11->TabIndex = 9;
			this->label11->Text = L"label11";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(404, 26);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(89, 114);
			this->pictureBox6->TabIndex = 4;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(309, 26);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(89, 114);
			this->pictureBox7->TabIndex = 3;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(214, 26);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(89, 114);
			this->pictureBox8->TabIndex = 2;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Location = System::Drawing::Point(119, 26);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(89, 114);
			this->pictureBox9->TabIndex = 1;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Location = System::Drawing::Point(24, 26);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(89, 114);
			this->pictureBox10->TabIndex = 0;
			this->pictureBox10->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox5);
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(517, 168);
			this->panel2->TabIndex = 0;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(454, 143);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 12);
			this->label10->TabIndex = 14;
			this->label10->Text = L"label10";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(404, 143);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(33, 12);
			this->label9->TabIndex = 13;
			this->label9->Text = L"label9";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(365, 143);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(33, 12);
			this->label8->TabIndex = 12;
			this->label8->Text = L"label8";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(309, 143);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 12);
			this->label7->TabIndex = 11;
			this->label7->Text = L"label7";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(270, 143);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 12);
			this->label6->TabIndex = 10;
			this->label6->Text = L"label6";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(214, 143);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 12);
			this->label5->TabIndex = 9;
			this->label5->Text = L"label5";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(175, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 12);
			this->label4->TabIndex = 8;
			this->label4->Text = L"label4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(119, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 12);
			this->label3->TabIndex = 7;
			this->label3->Text = L"label3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(80, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 12);
			this->label2->TabIndex = 6;
			this->label2->Text = L"label2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 143);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 12);
			this->label1->TabIndex = 5;
			this->label1->Text = L"label1";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(404, 26);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(89, 114);
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(309, 26);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(89, 114);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(214, 26);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(89, 114);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(119, 26);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(89, 114);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(24, 26);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(89, 114);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 414);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
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
			this->imageList1->Images->SetKeyName(10, L"10.png");
			this->imageList1->Images->SetKeyName(11, L"11.png");
			this->imageList1->Images->SetKeyName(12, L"12.png");
			this->imageList1->Images->SetKeyName(13, L"13.png");
			this->imageList1->Images->SetKeyName(14, L"14.png");
			this->imageList1->Images->SetKeyName(15, L"15.png");
			this->imageList1->Images->SetKeyName(16, L"16.png");
			this->imageList1->Images->SetKeyName(17, L"17.png");
			this->imageList1->Images->SetKeyName(18, L"18.png");
			this->imageList1->Images->SetKeyName(19, L"19.png");
			this->imageList1->Images->SetKeyName(20, L"20.png");
			this->imageList1->Images->SetKeyName(21, L"21.png");
			this->imageList1->Images->SetKeyName(22, L"22.png");
			this->imageList1->Images->SetKeyName(23, L"23.png");
			this->imageList1->Images->SetKeyName(24, L"24.png");
			this->imageList1->Images->SetKeyName(25, L"25.png");
			this->imageList1->Images->SetKeyName(26, L"26.png");
			this->imageList1->Images->SetKeyName(27, L"27.png");
			this->imageList1->Images->SetKeyName(28, L"28.png");
			this->imageList1->Images->SetKeyName(29, L"29.png");
			this->imageList1->Images->SetKeyName(30, L"30.png");
			this->imageList1->Images->SetKeyName(31, L"31.png");
			this->imageList1->Images->SetKeyName(32, L"32.png");
			this->imageList1->Images->SetKeyName(33, L"33.png");
			this->imageList1->Images->SetKeyName(34, L"34.png");
			this->imageList1->Images->SetKeyName(35, L"35.png");
			this->imageList1->Images->SetKeyName(36, L"36.png");
			this->imageList1->Images->SetKeyName(37, L"37.png");
			this->imageList1->Images->SetKeyName(38, L"38.png");
			this->imageList1->Images->SetKeyName(39, L"39.png");
			this->imageList1->Images->SetKeyName(40, L"40.png");
			this->imageList1->Images->SetKeyName(41, L"41.png");
			this->imageList1->Images->SetKeyName(42, L"42.png");
			this->imageList1->Images->SetKeyName(43, L"43.png");
			this->imageList1->Images->SetKeyName(44, L"44.png");
			this->imageList1->Images->SetKeyName(45, L"45.png");
			this->imageList1->Images->SetKeyName(46, L"46.png");
			this->imageList1->Images->SetKeyName(47, L"47.png");
			this->imageList1->Images->SetKeyName(48, L"48.png");
			this->imageList1->Images->SetKeyName(49, L"49.png");
			this->imageList1->Images->SetKeyName(50, L"50.png");
			this->imageList1->Images->SetKeyName(51, L"51.png");
			this->imageList1->Images->SetKeyName(52, L"52.png");
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(134, 414);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(37, 380);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(39, 12);
			this->label21->TabIndex = 3;
			this->label21->Text = L"label21";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(151, 380);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(39, 12);
			this->label22->TabIndex = 4;
			this->label22->Text = L"label22";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(547, 449);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e)
		 {
                 this->pictureBox1->Image = this->imageList1->Images[0];
				 this->pictureBox2->Image = this->imageList1->Images[0];
				 this->pictureBox3->Image = this->imageList1->Images[0];
				 this->pictureBox4->Image = this->imageList1->Images[0];
				 this->pictureBox5->Image = this->imageList1->Images[0];
				 this->pictureBox6->Image = this->imageList1->Images[0];
				 this->pictureBox7->Image = this->imageList1->Images[0];
				 this->pictureBox8->Image = this->imageList1->Images[0];
				 this->pictureBox9->Image = this->imageList1->Images[0];
				 this->pictureBox10->Image = this->imageList1->Images[0];
		 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
//				 int x1,x2,x3,x4,x5;
				 int x[5] = {0,0,0,0,0};

				 myHand = gcnew PlayingCard();

				 x[0] = myHand->getHandCard(0);
				 x[1] = myHand->getHandCard(1);
				 x[2] = myHand->getHandCard(2);
				 x[3] = myHand->getHandCard(3);
				 x[4] = myHand->getHandCard(4);

				 this->label1->Text = myHand->getSuit(0).ToString();
				 this->label2->Text = myHand->getRank(0).ToString();
				 this->label3->Text = myHand->getSuit(1).ToString();
				 this->label4->Text = myHand->getRank(1).ToString();
				 this->label5->Text = myHand->getSuit(2).ToString();
				 this->label6->Text = myHand->getRank(2).ToString();
				 this->label7->Text = myHand->getSuit(3).ToString();
				 this->label8->Text = myHand->getRank(3).ToString();
				 this->label9->Text = myHand->getSuit(4).ToString();
				 this->label10->Text = myHand->getRank(4).ToString();

				 this->label11->Visible = false;
				 this->label12->Visible = false;
				 this->label13->Visible = false;
				 this->label14->Visible = false;
				 this->label15->Visible = false;
				 this->label16->Visible = false;
				 this->label17->Visible = false;
				 this->label18->Visible = false;
				 this->label19->Visible = false;
				 this->label20->Visible = false;

				 this->pictureBox1->Image = this->imageList1->Images[x[0]];
				 this->pictureBox2->Image = this->imageList1->Images[x[1]];
				 this->pictureBox3->Image = this->imageList1->Images[x[2]];
				 this->pictureBox4->Image = this->imageList1->Images[x[3]];
				 this->pictureBox5->Image = this->imageList1->Images[x[4]];
				 this->pictureBox6->Image = this->imageList1->Images[0];
				 this->pictureBox7->Image = this->imageList1->Images[0];
				 this->pictureBox8->Image = this->imageList1->Images[0];
				 this->pictureBox9->Image = this->imageList1->Images[0];
				 this->pictureBox10->Image = this->imageList1->Images[0];
//對子  
					 int i , j , pair=0;
				     for(i=0;i<5;i++)
				     {
					     for(j=0;j<5;j++)
					     {
						     if(myHand->getRank(i) == myHand->getRank(j))
						     {
							     pair = pair + 1;
						     }
					     }
				     }
                     if(pair >= 0)
				     {
					     pair = (pair-5) / 2;
				     }				     
					 if(0 <= pair < 3)
				     {
					     this->label21->Text = pair.ToString() + " Pair";
				     }
//三條					
					 int triple=0;
					 if(pair >= 3)
					 {
						 pair = 0;
						 triple = 1;
                         this->label21->Text = triple.ToString() + " Triple";
					 }                   
//葫蘆                     
					 int full_house = 0;
			         if (myHand->getRank(0) == myHand->getRank(1) == myHand->getRank(2) && myHand->getRank(3) == myHand->getRank(4) || 
						 myHand->getRank(0) == myHand->getRank(1) == myHand->getRank(3) && myHand->getRank(2) == myHand->getRank(4) || 
						 myHand->getRank(0) == myHand->getRank(1) == myHand->getRank(4) && myHand->getRank(2) == myHand->getRank(3) || 
						 myHand->getRank(0) == myHand->getRank(2) == myHand->getRank(3) && myHand->getRank(1) == myHand->getRank(4) || 
						 myHand->getRank(0) == myHand->getRank(2) == myHand->getRank(4) && myHand->getRank(1) == myHand->getRank(3) || 
						 myHand->getRank(1) == myHand->getRank(2) == myHand->getRank(3) && myHand->getRank(0) == myHand->getRank(4) || 
						 myHand->getRank(1) == myHand->getRank(2) == myHand->getRank(4) && myHand->getRank(0) == myHand->getRank(3) || 
						 myHand->getRank(1) == myHand->getRank(3) == myHand->getRank(4) && myHand->getRank(0) == myHand->getRank(2) || 
						 myHand->getRank(2) == myHand->getRank(3) == myHand->getRank(4) && myHand->getRank(0) == myHand->getRank(1))
					 {
                         pair = 0;
						 triple = 0;
						 full_house = 1;
                         this->label21->Text = full_house.ToString() + " Full house";
					 }
				 
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 int y1,y2,y3,y4,y5;

                 y1 = myHand->getHandCard(5);
				 y2 = myHand->getHandCard(6);
				 y3 = myHand->getHandCard(7);
				 y4 = myHand->getHandCard(8);
				 y5 = myHand->getHandCard(9);

				 this->label11->Text = myHand->getSuit(5).ToString();
				 this->label12->Text = myHand->getRank(5).ToString();
				 this->label13->Text = myHand->getSuit(6).ToString();
				 this->label14->Text = myHand->getRank(6).ToString();
				 this->label15->Text = myHand->getSuit(7).ToString();
				 this->label16->Text = myHand->getRank(7).ToString();
				 this->label17->Text = myHand->getSuit(8).ToString();
				 this->label18->Text = myHand->getRank(8).ToString();
				 this->label19->Text = myHand->getSuit(9).ToString();
				 this->label20->Text = myHand->getRank(9).ToString();

				 this->label11->Visible = true;
				 this->label12->Visible = true;
				 this->label13->Visible = true;
				 this->label14->Visible = true;
                 this->label15->Visible = true;
				 this->label16->Visible = true;
				 this->label17->Visible = true;
				 this->label18->Visible = true;
				 this->label19->Visible = true;
				 this->label20->Visible = true;

				 this->pictureBox6->Image = this->imageList1->Images[y1];
				 this->pictureBox7->Image = this->imageList1->Images[y2];
				 this->pictureBox8->Image = this->imageList1->Images[y3];
				 this->pictureBox9->Image = this->imageList1->Images[y4];
				 this->pictureBox10->Image = this->imageList1->Images[y5];
		 }

};
}

