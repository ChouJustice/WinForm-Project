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
		int number_of_card;
        int player;
		int computer;
		int total_stake;

		int pair;
		int one_pair;
		int two_pair;
		int three_of_a_kind;
		int full_house;
		int straight;
		int four_of_a_kind;
		int flush;
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
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label35;
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
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
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
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
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
			this->panel3->Controls->Add(this->label34);
			this->panel3->Controls->Add(this->label32);
			this->panel3->Controls->Add(this->label29);
			this->panel3->Controls->Add(this->label26);
			this->panel3->Controls->Add(this->label25);
			this->panel3->Controls->Add(this->label20);
			this->panel3->Controls->Add(this->label19);
			this->panel3->Controls->Add(this->label22);
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
			// label28
			// 
			this->label28->Location = System::Drawing::Point(477, 414);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(45, 17);
			this->label28->TabIndex = 8;
			this->label28->Text = L"0";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(146, 11);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(39, 12);
			this->label26->TabIndex = 20;
			this->label26->Text = L"label26";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(47, 11);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(39, 12);
			this->label25->TabIndex = 19;
			this->label25->Text = L"label25";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(456, 143);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(39, 12);
			this->label20->TabIndex = 18;
			this->label20->Text = L"label20";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(404, 143);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(39, 12);
			this->label19->TabIndex = 17;
			this->label19->Text = L"label19";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(478, 159);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(39, 12);
			this->label22->TabIndex = 4;
			this->label22->Text = L"label22";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(359, 143);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(39, 12);
			this->label18->TabIndex = 16;
			this->label18->Text = L"label18";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(307, 143);
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
			this->label14->Location = System::Drawing::Point(169, 143);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(39, 12);
			this->label14->TabIndex = 12;
			this->label14->Text = L"label14";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(117, 143);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(39, 12);
			this->label13->TabIndex = 11;
			this->label13->Text = L"label13";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(67, 143);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(39, 12);
			this->label12->TabIndex = 10;
			this->label12->Text = L"label12";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(22, 143);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(39, 12);
			this->label11->TabIndex = 9;
			this->label11->Text = L"label11";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(24, 26);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(89, 114);
			this->pictureBox6->TabIndex = 4;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(119, 26);
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
			this->pictureBox9->Location = System::Drawing::Point(309, 26);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(89, 114);
			this->pictureBox9->TabIndex = 1;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Location = System::Drawing::Point(406, 26);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(89, 114);
			this->pictureBox10->TabIndex = 0;
			this->pictureBox10->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel2->Controls->Add(this->label33);
			this->panel2->Controls->Add(this->label31);
			this->panel2->Controls->Add(this->label30);
			this->panel2->Controls->Add(this->label24);
			this->panel2->Controls->Add(this->label23);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label21);
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
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(146, 11);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(39, 12);
			this->label24->TabIndex = 16;
			this->label24->Text = L"label24";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(47, 11);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(39, 12);
			this->label23->TabIndex = 15;
			this->label23->Text = L"label23";
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
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(478, 155);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(39, 12);
			this->label21->TabIndex = 3;
			this->label21->Text = L"label21";
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
			this->button1->Location = System::Drawing::Point(24, 391);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 31);
			this->button1->TabIndex = 1;
			this->button1->Text = L"翻牌";
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
			this->button2->Location = System::Drawing::Point(125, 379);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"下注";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox1->Location = System::Drawing::Point(218, 381);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(44, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(125, 414);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"跟注";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(493, 366);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(39, 12);
			this->label27->TabIndex = 7;
			this->label27->Text = L"label27";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(277, 390);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(84, 32);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Show Hand";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(376, 391);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(69, 31);
			this->button5->TabIndex = 9;
			this->button5->Text = L"翻底牌";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label29->Location = System::Drawing::Point(3, 7);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(40, 16);
			this->label29->TabIndex = 21;
			this->label29->Text = L"玩家";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label30->Location = System::Drawing::Point(3, 8);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(40, 16);
			this->label30->TabIndex = 22;
			this->label30->Text = L"電腦";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label31->Location = System::Drawing::Point(100, 8);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(40, 16);
			this->label31->TabIndex = 23;
			this->label31->Text = L"下注";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label32->Location = System::Drawing::Point(100, 7);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(40, 16);
			this->label32->TabIndex = 24;
			this->label32->Text = L"下注";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(4, 155);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(39, 12);
			this->label33->TabIndex = 24;
			this->label33->Text = L"label33";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(4, 155);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(39, 12);
			this->label34->TabIndex = 25;
			this->label34->Text = L"label34";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label35->Location = System::Drawing::Point(475, 384);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(47, 19);
			this->label35->TabIndex = 10;
			this->label35->Text = L"賭金";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(547, 449);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
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
                 myHand = gcnew PlayingCard();

		 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 this->label23->Text = myHand->get_computer_money().ToString();
				 this->label24->Text = myHand->get_computer_stake().ToString();

				 int x[5] = {0,0,0,0,0};
				 int p[5] = {0,0,0,0,0};

				 int y[5] = {0,0,0,0,0};
				 int q[5] = {0,0,0,0,0};

				 int z[5] = {0,0,0,0,0};
				 int r[5] = {0,0,0,0,0};

				 x[0] = myHand->getHandCard(0);
				 x[1] = myHand->getHandCard(1);
				 x[2] = myHand->getHandCard(2);
				 x[3] = myHand->getHandCard(3);
				 x[4] = myHand->getHandCard(4);
				 p[0] = myHand->getHandCard(5);
				 p[1] = myHand->getHandCard(6);
				 p[2] = myHand->getHandCard(7);
				 p[3] = myHand->getHandCard(8);
				 p[4] = myHand->getHandCard(9);

				 y[0] = myHand->getSuit(0);
				 y[1] = myHand->getSuit(1);
				 y[2] = myHand->getSuit(2);
				 y[3] = myHand->getSuit(3);
				 y[4] = myHand->getSuit(4);
				 q[0] = myHand->getSuit(5);
				 q[1] = myHand->getSuit(6);
				 q[2] = myHand->getSuit(7);
				 q[3] = myHand->getSuit(8);
				 q[4] = myHand->getSuit(9);

				 z[0] = myHand->getRank(0);
                 z[1] = myHand->getRank(1);
				 z[2] = myHand->getRank(2);
				 z[3] = myHand->getRank(3);
				 z[4] = myHand->getRank(4);
				 r[0] = myHand->getRank(5);
				 r[1] = myHand->getRank(6);
				 r[2] = myHand->getRank(7);
				 r[3] = myHand->getRank(8);
				 r[4] = myHand->getRank(9);
		/*		 
				 int temp=0;
				 int a , b;
				 for(a=0;a<5-1;a++)
				 {
					 for(b=0;b<5-1-a;b++)
					 {
						 if(z[b] < z[b+1])
						 {
                             temp = x[b];
							 x[b] = x[b+1];
							 x[b+1] = temp;

							 temp = y[b];
							 y[b] = y[b+1];
							 y[b+1] = temp;

							 temp = z[b];
							 z[b] = z[b+1];
							 z[b+1] = temp;
						 }
					 }
				 }
       */
				 this->label1->Text = y[0].ToString();
				 this->label2->Text = z[0].ToString();
				 this->label3->Text = y[1].ToString();
				 this->label4->Text = z[1].ToString();
				 this->label5->Text = y[2].ToString();
				 this->label6->Text = z[2].ToString();
				 this->label7->Text = y[3].ToString();
				 this->label8->Text = z[3].ToString();
				 this->label9->Text = y[4].ToString();
				 this->label10->Text = z[4].ToString();
				 this->label11->Text = q[0].ToString();
				 this->label12->Text = r[0].ToString();
				 this->label13->Text = q[1].ToString();
				 this->label14->Text = r[1].ToString();
				 this->label15->Text = q[2].ToString();
				 this->label16->Text = r[2].ToString();
				 this->label17->Text = q[3].ToString();
				 this->label18->Text = r[3].ToString();
				 this->label19->Text = q[4].ToString();
				 this->label20->Text = r[4].ToString();

				 if(number_of_card == 0)
				 {
                     this->pictureBox2->Image = this->imageList1->Images[x[1]];
					 this->pictureBox6->Image = this->imageList1->Images[p[0]];
					 this->pictureBox7->Image = this->imageList1->Images[p[1]];
					 if(y[1]*z[1] > q[1]*r[1])
					 {
						 myHand->set_computer_stake(1000);
						 myHand->set_computer_money(myHand->get_computer_money() - myHand->get_computer_stake());
						 this->label23->Text = myHand->get_computer_money().ToString();
				         this->label24->Text = myHand->get_computer_stake().ToString();
						 this->label25->Text = myHand->get_player_money().ToString();
						 this->label26->Text = myHand->get_player_stake().ToString();
					 }
					 else
					 {
                         this->label23->Text = myHand->get_computer_money().ToString();
				         this->label24->Text = myHand->get_computer_stake().ToString();
						 this->label25->Text = myHand->get_player_money().ToString();
						 this->label26->Text = myHand->get_player_stake().ToString();
					 }
				 }
				 //
				 if(number_of_card == 1)
				 {
					 this->pictureBox3->Image = this->imageList1->Images[x[2]];
					 this->pictureBox8->Image = this->imageList1->Images[p[2]];
					 if(y[2]*z[2] > q[2]*r[2])
					 {
						 myHand->set_computer_stake(1000);
						 myHand->set_computer_money(myHand->get_computer_money() - myHand->get_computer_stake());
						 this->label23->Text = myHand->get_computer_money().ToString();
				         this->label24->Text = myHand->get_computer_stake().ToString();
						 this->label25->Text = myHand->get_player_money().ToString();
						 this->label26->Text = myHand->get_player_stake().ToString();
					 }
					 else
					 {
                         this->label23->Text = myHand->get_computer_money().ToString();
				         this->label24->Text = myHand->get_computer_stake().ToString();
						 this->label25->Text = myHand->get_player_money().ToString();
						 this->label26->Text = myHand->get_player_stake().ToString();
					 }
				 }
				 if(number_of_card == 2)
				 {
					 this->pictureBox4->Image = this->imageList1->Images[x[3]];
                     this->pictureBox9->Image = this->imageList1->Images[p[3]];
					 if(y[3]*z[3] > q[3]*r[3])
					 {
						 myHand->set_computer_stake(1000);
						 myHand->set_computer_money(myHand->get_computer_money() - myHand->get_computer_stake());
						 this->label23->Text = myHand->get_computer_money().ToString();
				         this->label24->Text = myHand->get_computer_stake().ToString();
						 this->label25->Text = myHand->get_player_money().ToString();
						 this->label26->Text = myHand->get_player_stake().ToString();
					 }
					 else
					 {
                         this->label23->Text = myHand->get_computer_money().ToString();
				         this->label24->Text = myHand->get_computer_stake().ToString();
						 this->label25->Text = myHand->get_player_money().ToString();
						 this->label26->Text = myHand->get_player_stake().ToString();
					 }
				 }
				 if(number_of_card == 3)
				 {
                     this->pictureBox5->Image = this->imageList1->Images[x[4]];
                     this->pictureBox10->Image = this->imageList1->Images[p[4]];
					 if(y[4]*z[4] > q[4]*r[4])
					 {
						 myHand->set_computer_stake(1000);
						 myHand->set_computer_money(myHand->get_computer_money() - myHand->get_computer_stake());
						 this->label23->Text = myHand->get_computer_money().ToString();
				         this->label24->Text = myHand->get_computer_stake().ToString();
						 this->label25->Text = myHand->get_player_money().ToString();
						 this->label26->Text = myHand->get_player_stake().ToString();
					 }
					 else
					 {
                         this->label23->Text = myHand->get_computer_money().ToString();
				         this->label24->Text = myHand->get_computer_stake().ToString();
						 this->label25->Text = myHand->get_player_money().ToString();
						 this->label26->Text = myHand->get_player_stake().ToString();
				 }
					 /*
					 int temp=0;
				     int a , b;
				     for(a=0;a<5-1;a++)
				     {
					     for(b=0;b<5-1-a;b++)
					     {
						     if(r[b] < r[b+1])
						     {
                                 temp = p[b];
							     p[b] = p[b+1];
							     p[b+1] = temp;

							     temp = q[b];
							     q[b] = q[b+1];
							     q[b+1] = temp;

							     temp = r[b];
							     r[b] = r[b+1];
							     r[b+1] = temp;
						     }
					     }
				     }
					 */
				/* this->pictureBox6->Image = this->imageList1->Images[p[0]];
				 this->pictureBox7->Image = this->imageList1->Images[p[1]];
				 this->pictureBox8->Image = this->imageList1->Images[p[2]];
				 this->pictureBox9->Image = this->imageList1->Images[p[3]];
				 this->pictureBox10->Image = this->imageList1->Images[p[4]];
				 this->label11->Text = q[0].ToString();
				 this->label12->Text = r[0].ToString();
				 this->label13->Text = q[1].ToString();
				 this->label14->Text = r[1].ToString();
				 this->label15->Text = q[2].ToString();
				 this->label16->Text = r[2].ToString();
				 this->label17->Text = q[3].ToString();
				 this->label18->Text = r[3].ToString();
				 this->label19->Text = q[4].ToString();
				 this->label20->Text = r[4].ToString();*/
				 }
		//		 this->pictureBox2->Image = this->imageList1->Images[x[1]];
                 this->label27->Text = number_of_card.ToString();
                 number_of_card = number_of_card + 1;
                 if(number_of_card > 3)
				 {
                     number_of_card = 3;
				 }
 /*                
				 int pair=0;
				 int three_of_a_kind=0;
				 int full_house = 0;
				 int straight=0;
				 int four_of_a_kind=0;
				 int flush=0;
				// rank
				 int x1,x2,x3,x4,x5;
				 x1 = System::Convert::ToInt16(label2->Text);
				 x2 = System::Convert::ToInt16(label4->Text);
				 x3 = System::Convert::ToInt16(label6->Text);
				 x4 = System::Convert::ToInt16(label8->Text);
				 x5 = System::Convert::ToInt16(label10->Text);
				 p1 = System::Convert::ToInt16(label12->Text);
				 p2 = System::Convert::ToInt16(label14->Text);
				 p3 = System::Convert::ToInt16(label16->Text);
				 p4 = System::Convert::ToInt16(label18->Text);
				 p5 = System::Convert::ToInt16(label20->Text);
				// suit
				 int y1,y2,y3,y4,y5;
			     y1 = System::Convert::ToInt16(label1->Text);
				 y2 = System::Convert::ToInt16(label3->Text);
				 y3 = System::Convert::ToInt16(label5->Text);
				 y4 = System::Convert::ToInt16(label7->Text);
				 y5 = System::Convert::ToInt16(label9->Text);
				 q1 = System::Convert::ToInt16(label11->Text);
				 q2 = System::Convert::ToInt16(label13->Text);
				 q3 = System::Convert::ToInt16(label15->Text);
				 q4 = System::Convert::ToInt16(label17->Text);
				 q5 = System::Convert::ToInt16(label19->Text);
//對子  
				     int i , j;
				     for(i=0;i<5;i++)
				     {
					     for(j=0;j<5;j++)
					     {
						     if(r[i] == r[j])
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
					 if(pair >= 3)
					 {
					     pair = 0;
		 	             three_of_a_kind = 1;
				         full_house = 0;
				         straight = 0;
					     four_of_a_kind = 0;
					     flush = 0;
                         this->label21->Text = three_of_a_kind.ToString() + " Three of a kind";	     
					 }


//葫蘆                     
				 x1 = System::Convert::ToInt16(label2->Text);
				 x2 = System::Convert::ToInt16(label4->Text);
				 x3 = System::Convert::ToInt16(label6->Text);
				 x4 = System::Convert::ToInt16(label8->Text);
				 x5 = System::Convert::ToInt16(label10->Text);
				 y1 = System::Convert::ToInt16(label1->Text);
				 y2 = System::Convert::ToInt16(label3->Text);
				 y3 = System::Convert::ToInt16(label5->Text);
				 y4 = System::Convert::ToInt16(label7->Text);
				 y5 = System::Convert::ToInt16(label9->Text);
			     if(three_of_a_kind==1)
				 {
					 if(x1==x2 && x2==x3)
					 {
						 if(x4==x5)
						 {
                             pair = 0;
					         three_of_a_kind = 0;
					         full_house = 1;
					         straight = 0;
						     four_of_a_kind = 0;
						     flush = 0;
                             this->label21->Text = full_house.ToString() + " Full house";
						 }
					 }
					 if(x3==x4 && x4==x5)
					 {
						 if(x1==x2)
						 {
                             pair = 0;
					         three_of_a_kind = 0;
					         full_house = 1;
					         straight = 0;
						     four_of_a_kind = 0;
						     flush = 0;
                             this->label21->Text = full_house.ToString() + " Full house";
						 }
				     }	 
				 }
//順子
			     x1 = System::Convert::ToInt16(label2->Text);
				 x2 = System::Convert::ToInt16(label4->Text);
				 x3 = System::Convert::ToInt16(label6->Text);
				 x4 = System::Convert::ToInt16(label8->Text);
				 x5 = System::Convert::ToInt16(label10->Text);
				 y1 = System::Convert::ToInt16(label1->Text);
				 y2 = System::Convert::ToInt16(label3->Text);
				 y3 = System::Convert::ToInt16(label5->Text);
				 y4 = System::Convert::ToInt16(label7->Text);
				 y5 = System::Convert::ToInt16(label9->Text);
					 if(x1==x2+1 && x2==x3+1 && x3==x4+1 && x4==x5+1)
					 {
                         pair = 0;
						 three_of_a_kind = 0;
		     		     full_house = 0;
					     straight = 1;
						 four_of_a_kind = 0;
						 flush = 0;
                         this->label21->Text = straight.ToString() + " Straight";
					 }
//鐵支
				 x1 = System::Convert::ToInt16(label2->Text);
				 x2 = System::Convert::ToInt16(label4->Text);
				 x3 = System::Convert::ToInt16(label6->Text);
				 x4 = System::Convert::ToInt16(label8->Text);
				 x5 = System::Convert::ToInt16(label10->Text);
			     y1 = System::Convert::ToInt16(label1->Text);
				 y2 = System::Convert::ToInt16(label3->Text);
				 y3 = System::Convert::ToInt16(label5->Text);
				 y4 = System::Convert::ToInt16(label7->Text);
				 y5 = System::Convert::ToInt16(label9->Text);
						 if(x1==x2 && x2==x3 && x3==x4)
						 {
							 pair = 0;
						     three_of_a_kind = 0;
						     full_house = 0;
						     straight = 0;
							 four_of_a_kind = 1;
							 flush = 0;
                             this->label21->Text = four_of_a_kind.ToString() + " Four of a kind";
						 }
						 if(x2==x3 && x3==x4 && x4==x5)
						 {
							 pair = 0;
						     three_of_a_kind = 0;
						     full_house = 0;
						     straight = 0;
							 four_of_a_kind = 1;
							 flush = 0;
                             this->label21->Text = four_of_a_kind.ToString() + " Four of a kind";
						 }
//同花順
				 x1 = System::Convert::ToInt16(label2->Text);
				 x2 = System::Convert::ToInt16(label4->Text);
				 x3 = System::Convert::ToInt16(label6->Text);
				 x4 = System::Convert::ToInt16(label8->Text);
				 x5 = System::Convert::ToInt16(label10->Text);
				 y1 = System::Convert::ToInt16(label1->Text);
				 y2 = System::Convert::ToInt16(label3->Text);
				 y3 = System::Convert::ToInt16(label5->Text);
				 y4 = System::Convert::ToInt16(label7->Text);
				 y5 = System::Convert::ToInt16(label9->Text);
					 if(y1 == y2 == y3 == y4 == y5)
					 {
						 if(x1==x2+1 && x2==x3+1 && x3==x4+1 && x4==x5+1)
						 {
                             pair = 0;
						     three_of_a_kind = 0;
						     full_house = 0;
						     straight = 0;
							 four_of_a_kind = 0;
							 flush = 1;
                             this->label21->Text = flush.ToString() + " Flush";
						 }
					 }
*/
					 
				 
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
                 int x[5] = {0,0,0,0,0};
				 int p[5] = {0,0,0,0,0};

				 int y[5] = {0,0,0,0,0};
				 int q[5] = {0,0,0,0,0};

				 int z[5] = {0,0,0,0,0};
				 int r[5] = {0,0,0,0,0};

				 x[0] = myHand->getHandCard(0);
				 x[1] = myHand->getHandCard(1);
				 x[2] = myHand->getHandCard(2);
				 x[3] = myHand->getHandCard(3);
				 x[4] = myHand->getHandCard(4);
				 p[0] = myHand->getHandCard(5);
				 p[1] = myHand->getHandCard(6);
				 p[2] = myHand->getHandCard(7);
				 p[3] = myHand->getHandCard(8);
				 p[4] = myHand->getHandCard(9);

				 y[0] = myHand->getSuit(0);
				 y[1] = myHand->getSuit(1);
				 y[2] = myHand->getSuit(2);
				 y[3] = myHand->getSuit(3);
				 y[4] = myHand->getSuit(4);
				 q[0] = myHand->getSuit(5);
				 q[1] = myHand->getSuit(6);
				 q[2] = myHand->getSuit(7);
				 q[3] = myHand->getSuit(8);
				 q[4] = myHand->getSuit(9);

				 z[0] = myHand->getRank(0);
                 z[1] = myHand->getRank(1);
				 z[2] = myHand->getRank(2);
				 z[3] = myHand->getRank(3);
				 z[4] = myHand->getRank(4);
				 r[0] = myHand->getRank(5);
				 r[1] = myHand->getRank(6);
				 r[2] = myHand->getRank(7);
				 r[3] = myHand->getRank(8);
				 r[4] = myHand->getRank(9);

                 int stake;
				 stake = System::Convert::ToInt16(textBox1->Text);
				 int zero = 0;

				 int round;
				 round = System::Convert::ToInt16(label27->Text);

				 int player_stake;
				 int computer_stake;
				 int player_money;
				 int computer_money;
				 player_money = System::Convert::ToInt16(label25->Text);
				 player_stake = System::Convert::ToInt16(label26->Text);
				 computer_money = System::Convert::ToInt16(label23->Text);
				 computer_stake = System::Convert::ToInt16(label24->Text);

             if(round == 0)
			 {
				 if(y[1]*z[1] < q[1]*r[1])
				 {
                      if(stake > 0)
					  {
						  myHand->set_player_stake(stake);
                          this->label26->Text = myHand->get_player_stake().ToString();
                          player_stake = System::Convert::ToInt16(label26->Text);
						  myHand->set_player_money(player_money - player_stake);
						  myHand->set_computer_stake(player_stake);
                          this->label24->Text = myHand->get_computer_stake().ToString();
                          computer_stake = System::Convert::ToInt16(label24->Text);
						  myHand->set_computer_money(computer_money - computer_stake);

						  this->textBox1->Text = zero.ToString();
						  this->label23->Text = myHand->get_computer_money().ToString();
				          this->label24->Text = myHand->get_computer_stake().ToString();
						  this->label25->Text = myHand->get_player_money().ToString();
						  this->label26->Text = myHand->get_player_stake().ToString();
						  player_stake = System::Convert::ToInt16(label26->Text);
						  computer_stake = System::Convert::ToInt16(label24->Text);
						  total_stake = total_stake + player_stake + computer_stake;
						  this->label28->Text = total_stake.ToString();
					  }
				 }
			 }
			 if(round == 1)
			 {
				 if(y[2]*z[2] < q[2]*r[2])
				 {
                      if(stake > 0)
					  {
						  myHand->set_player_stake(stake);
                          this->label26->Text = myHand->get_player_stake().ToString();
                          player_stake = System::Convert::ToInt16(label26->Text);
						  myHand->set_player_money(player_money - player_stake);
						  myHand->set_computer_stake(player_stake);
                          this->label24->Text = myHand->get_computer_stake().ToString();
                          computer_stake = System::Convert::ToInt16(label24->Text);
						  myHand->set_computer_money(computer_money - computer_stake);

						  this->textBox1->Text = zero.ToString();
						  this->label23->Text = myHand->get_computer_money().ToString();
				          this->label24->Text = myHand->get_computer_stake().ToString();
						  this->label25->Text = myHand->get_player_money().ToString();
						  this->label26->Text = myHand->get_player_stake().ToString();
						  player_stake = System::Convert::ToInt16(label26->Text);
						  computer_stake = System::Convert::ToInt16(label24->Text);
						  total_stake = total_stake + player_stake + computer_stake;
						  this->label28->Text = total_stake.ToString();
					  }
				 }
			 }
			 if(round == 2)
			 {
				 if(y[3]*z[3] < q[3]*r[3])
				 {
                      if(stake > 0)
					  {
						  myHand->set_player_stake(stake);
                          this->label26->Text = myHand->get_player_stake().ToString();
                          player_stake = System::Convert::ToInt16(label26->Text);
						  myHand->set_player_money(player_money - player_stake);
						  myHand->set_computer_stake(player_stake);
                          this->label24->Text = myHand->get_computer_stake().ToString();
                          computer_stake = System::Convert::ToInt16(label24->Text);
						  myHand->set_computer_money(computer_money - computer_stake);

						  this->textBox1->Text = zero.ToString();
						  this->label23->Text = myHand->get_computer_money().ToString();
				          this->label24->Text = myHand->get_computer_stake().ToString();
						  this->label25->Text = myHand->get_player_money().ToString();
						  this->label26->Text = myHand->get_player_stake().ToString();
						  player_stake = System::Convert::ToInt16(label26->Text);
						  computer_stake = System::Convert::ToInt16(label24->Text);
						  total_stake = total_stake + player_stake + computer_stake;
						  this->label28->Text = total_stake.ToString();
					  }
				 }
			 }
			 if(round == 3)
			 {
				 if(y[4]*z[4] < q[4]*r[4])
				 {
                      if(stake > 0)
					  {
						  myHand->set_player_stake(stake);
                          this->label26->Text = myHand->get_player_stake().ToString();
                          player_stake = System::Convert::ToInt16(label26->Text);
						  myHand->set_player_money(player_money - player_stake);
						  myHand->set_computer_stake(player_stake);
                          this->label24->Text = myHand->get_computer_stake().ToString();
                          computer_stake = System::Convert::ToInt16(label24->Text);
						  myHand->set_computer_money(computer_money - computer_stake);

						  this->textBox1->Text = zero.ToString();
						  this->label23->Text = myHand->get_computer_money().ToString();
				          this->label24->Text = myHand->get_computer_stake().ToString();
						  this->label25->Text = myHand->get_player_money().ToString();
						  this->label26->Text = myHand->get_player_stake().ToString();
						  player_stake = System::Convert::ToInt16(label26->Text);
						  computer_stake = System::Convert::ToInt16(label24->Text);
						  total_stake = total_stake + player_stake + computer_stake;
						  this->label28->Text = total_stake.ToString();
					  }
				 }
			 }
             

		 }

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			     int x[5] = {0,0,0,0,0};
				 int p[5] = {0,0,0,0,0};

				 int y[5] = {0,0,0,0,0};
				 int q[5] = {0,0,0,0,0};

				 int z[5] = {0,0,0,0,0};
				 int r[5] = {0,0,0,0,0};

				 x[0] = myHand->getHandCard(0);
				 x[1] = myHand->getHandCard(1);
				 x[2] = myHand->getHandCard(2);
				 x[3] = myHand->getHandCard(3);
				 x[4] = myHand->getHandCard(4);
				 p[0] = myHand->getHandCard(5);
				 p[1] = myHand->getHandCard(6);
				 p[2] = myHand->getHandCard(7);
				 p[3] = myHand->getHandCard(8);
				 p[4] = myHand->getHandCard(9);

				 y[0] = myHand->getSuit(0);
				 y[1] = myHand->getSuit(1);
				 y[2] = myHand->getSuit(2);
				 y[3] = myHand->getSuit(3);
				 y[4] = myHand->getSuit(4);
				 q[0] = myHand->getSuit(5);
				 q[1] = myHand->getSuit(6);
				 q[2] = myHand->getSuit(7);
				 q[3] = myHand->getSuit(8);
				 q[4] = myHand->getSuit(9);

				 z[0] = myHand->getRank(0);
                 z[1] = myHand->getRank(1);
				 z[2] = myHand->getRank(2);
				 z[3] = myHand->getRank(3);
				 z[4] = myHand->getRank(4);
				 r[0] = myHand->getRank(5);
				 r[1] = myHand->getRank(6);
				 r[2] = myHand->getRank(7);
				 r[3] = myHand->getRank(8);
				 r[4] = myHand->getRank(9);

				 int round;
				 round = System::Convert::ToInt16(label27->Text);

				 int player_stake;
				 int computer_stake;
				 int player_money;
				 int computer_money;
				 player_money = System::Convert::ToInt16(label25->Text);
				 player_stake = System::Convert::ToInt16(label26->Text);
				 computer_money = System::Convert::ToInt16(label23->Text);
				 computer_stake = System::Convert::ToInt16(label24->Text);
			 
			 if(round == 0)
			 {
                 if(y[1]*z[1] > q[1]*r[1])
				 {
					 myHand->set_player_stake(computer_stake);
					 this->label26->Text = myHand->get_player_stake().ToString();
					 player_stake = System::Convert::ToInt16(label26->Text);
					 myHand->set_player_money(player_money - player_stake);
					 this->label23->Text = myHand->get_computer_money().ToString();
			         this->label24->Text = myHand->get_computer_stake().ToString();
					 this->label25->Text = myHand->get_player_money().ToString();
					 this->label26->Text = myHand->get_player_stake().ToString();
					 player_stake = System::Convert::ToInt16(label26->Text);
					 computer_stake = System::Convert::ToInt16(label24->Text);
					 total_stake = total_stake + player_stake + computer_stake;
					 this->label28->Text = total_stake.ToString();
				 }
			 }

			 if(round == 1)
			 {
                 if(y[2]*z[2] > q[2]*r[2])
				 {
					 myHand->set_player_stake(computer_stake);
					 this->label26->Text = myHand->get_player_stake().ToString();
					 player_stake = System::Convert::ToInt16(label26->Text);
					 myHand->set_player_money(player_money - player_stake);
					 this->label23->Text = myHand->get_computer_money().ToString();
			         this->label24->Text = myHand->get_computer_stake().ToString();
					 this->label25->Text = myHand->get_player_money().ToString();
					 this->label26->Text = myHand->get_player_stake().ToString();
					 player_stake = System::Convert::ToInt16(label26->Text);
					 computer_stake = System::Convert::ToInt16(label24->Text);
					 total_stake = total_stake + player_stake + computer_stake;
					 this->label28->Text = total_stake.ToString();
				 }
			 }

			 if(round == 2)
			 {
                 if(y[3]*z[3] > q[3]*r[3])
				 {
					 myHand->set_player_stake(computer_stake);
					 this->label26->Text = myHand->get_player_stake().ToString();
					 player_stake = System::Convert::ToInt16(label26->Text);
					 myHand->set_player_money(player_money - player_stake);
					 this->label23->Text = myHand->get_computer_money().ToString();
			         this->label24->Text = myHand->get_computer_stake().ToString();
					 this->label25->Text = myHand->get_player_money().ToString();
					 this->label26->Text = myHand->get_player_stake().ToString();
					 player_stake = System::Convert::ToInt16(label26->Text);
					 computer_stake = System::Convert::ToInt16(label24->Text);
					 total_stake = total_stake + player_stake + computer_stake;
					 this->label28->Text = total_stake.ToString();
				 }
			 }

			 if(round == 3)
			 {
                 if(y[4]*z[4] > q[4]*r[4])
				 {
					 myHand->set_player_stake(computer_stake);
					 this->label26->Text = myHand->get_player_stake().ToString();
					 player_stake = System::Convert::ToInt16(label26->Text);
					 myHand->set_player_money(player_money - player_stake);
					 this->label23->Text = myHand->get_computer_money().ToString();
			         this->label24->Text = myHand->get_computer_stake().ToString();
					 this->label25->Text = myHand->get_player_money().ToString();
					 this->label26->Text = myHand->get_player_stake().ToString();
					 player_stake = System::Convert::ToInt16(label26->Text);
					 computer_stake = System::Convert::ToInt16(label24->Text);
					 total_stake = total_stake + player_stake + computer_stake;
					 this->label28->Text = total_stake.ToString();
				 }
			 }
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->button2->Enabled = false;
			 this->textBox1->Enabled = false;
			 this->button3->Enabled = false;
			 int player_money = System::Convert::ToInt16(label25->Text);
			 int player_stake = System::Convert::ToInt16(label26->Text);
			 int x;
			 x = System::Convert::ToInt16(label25->Text);
             if(x > 0)
			 {
				 myHand->set_player_stake(x);
				 this->label26->Text = myHand->get_player_stake().ToString();
				 myHand->set_player_money(player_money - x);
				 this->label25->Text = myHand->get_player_money().ToString();
				 total_stake = total_stake + x;
                 this->label28->Text = total_stake.ToString();
			 }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->button1->Enabled = false;
			 this->button2->Enabled = false;
			 this->button3->Enabled = false;
			 this->button4->Enabled = false;
			 this->textBox1->Enabled = false;
			     int x[5] = {0,0,0,0,0};
				 int p[5] = {0,0,0,0,0};

				 int y[5] = {0,0,0,0,0};
				 int q[5] = {0,0,0,0,0};

				 int z[5] = {0,0,0,0,0};
				 int r[5] = {0,0,0,0,0};

				 x[0] = myHand->getHandCard(0);
				 x[1] = myHand->getHandCard(1);
				 x[2] = myHand->getHandCard(2);
				 x[3] = myHand->getHandCard(3);
				 x[4] = myHand->getHandCard(4);
				 p[0] = myHand->getHandCard(5);
				 p[1] = myHand->getHandCard(6);
				 p[2] = myHand->getHandCard(7);
				 p[3] = myHand->getHandCard(8);
				 p[4] = myHand->getHandCard(9);

				 y[0] = myHand->getSuit(0);
				 y[1] = myHand->getSuit(1);
				 y[2] = myHand->getSuit(2);
				 y[3] = myHand->getSuit(3);
				 y[4] = myHand->getSuit(4);
				 q[0] = myHand->getSuit(5);
				 q[1] = myHand->getSuit(6);
				 q[2] = myHand->getSuit(7);
				 q[3] = myHand->getSuit(8);
				 q[4] = myHand->getSuit(9);

				 z[0] = myHand->getRank(0);
                 z[1] = myHand->getRank(1);
				 z[2] = myHand->getRank(2);
				 z[3] = myHand->getRank(3);
				 z[4] = myHand->getRank(4);
				 r[0] = myHand->getRank(5);
				 r[1] = myHand->getRank(6);
				 r[2] = myHand->getRank(7);
				 r[3] = myHand->getRank(8);
				 r[4] = myHand->getRank(9);
			 
				 this->pictureBox1->Image = this->imageList1->Images[x[0]];

			 int temp=0;
				 int a , b;
				 for(a=0;a<5-1;a++)
				 {
					 for(b=0;b<5-1-a;b++)
					 {
						 if(z[b] < z[b+1])
						 {
                             temp = x[b];
							 x[b] = x[b+1];
							 x[b+1] = temp;

							 temp = y[b];
							 y[b] = y[b+1];
							 y[b+1] = temp;

							 temp = z[b];
							 z[b] = z[b+1];
							 z[b+1] = temp;
						 }
					 }
				 }
              int temp1=0;
			     int i , j;
				 for(i=0;i<5-1;i++)
				 {
					 for(j=0;j<5-1-i;j++)
					 {
                        if(r[j] < r[j+1])
						 {
                             temp1 = p[j];
							 p[j] = p[j+1];
							 p[j+1] = temp1;

							 temp1 = q[j];
							 q[j] = q[j+1];
							 q[j+1] = temp1;

							 temp1 = r[j];
							 r[j] = r[j+1];
							 r[j+1] = temp1;
						 }
					 }
				 }
		     this->pictureBox6->Image = this->imageList1->Images[p[0]];
			 this->pictureBox7->Image = this->imageList1->Images[p[1]];
			 this->pictureBox8->Image = this->imageList1->Images[p[2]];
			 this->pictureBox9->Image = this->imageList1->Images[p[3]];
			 this->pictureBox10->Image = this->imageList1->Images[p[4]];
				 this->label11->Text = q[0].ToString();
				 this->label12->Text = r[0].ToString();
				 this->label13->Text = q[1].ToString();
				 this->label14->Text = r[1].ToString();
				 this->label15->Text = q[2].ToString();
				 this->label16->Text = r[2].ToString();
				 this->label17->Text = q[3].ToString();
				 this->label18->Text = r[3].ToString();
				 this->label19->Text = q[4].ToString();
				 this->label20->Text = r[4].ToString();
			 this->pictureBox1->Image = this->imageList1->Images[x[0]];
			 this->pictureBox2->Image = this->imageList1->Images[x[1]];
			 this->pictureBox3->Image = this->imageList1->Images[x[2]];
			 this->pictureBox4->Image = this->imageList1->Images[x[3]];
			 this->pictureBox5->Image = this->imageList1->Images[x[4]];
			     this->label1->Text = y[0].ToString();
				 this->label2->Text = z[0].ToString();
				 this->label3->Text = y[1].ToString();
				 this->label4->Text = z[1].ToString();
				 this->label5->Text = y[2].ToString();
				 this->label6->Text = z[2].ToString();
				 this->label7->Text = y[3].ToString();
				 this->label8->Text = z[3].ToString();
				 this->label9->Text = y[4].ToString();
				 this->label10->Text = z[4].ToString();


                 // rank
				 int x1,x2,x3,x4,x5;
				 x1 = System::Convert::ToInt16(label2->Text);
				 x2 = System::Convert::ToInt16(label4->Text);
				 x3 = System::Convert::ToInt16(label6->Text);
				 x4 = System::Convert::ToInt16(label8->Text);
				 x5 = System::Convert::ToInt16(label10->Text);
				 int p1,p2,p3,p4,p5;
				 p1 = System::Convert::ToInt16(label12->Text);
				 p2 = System::Convert::ToInt16(label14->Text);
				 p3 = System::Convert::ToInt16(label16->Text);
				 p4 = System::Convert::ToInt16(label18->Text);
				 p5 = System::Convert::ToInt16(label20->Text);
				// suit
				 int y1,y2,y3,y4,y5;
			     y1 = System::Convert::ToInt16(label1->Text);
				 y2 = System::Convert::ToInt16(label3->Text);
				 y3 = System::Convert::ToInt16(label5->Text);
				 y4 = System::Convert::ToInt16(label7->Text);
				 y5 = System::Convert::ToInt16(label9->Text);
				 int q1,q2,q3,q4,q5;
				 q1 = System::Convert::ToInt16(label11->Text);
				 q2 = System::Convert::ToInt16(label13->Text);
				 q3 = System::Convert::ToInt16(label15->Text);
				 q4 = System::Convert::ToInt16(label17->Text);
				 q5 = System::Convert::ToInt16(label19->Text);

//對子  
				     int m , n;
				     for(m=0;m<5;m++)
				     {
					     for(n=0;n<5;n++)
					     {
						     if(z[m] == z[n])
						     {
							     pair = pair + 1;
					         }
					     }
				     }
                     if(pair > 0)
				     {
					     pair = (pair-5) / 2;
				     }				     
					 if(pair == 0)
					 {
						 this->label33->Text = " ";
					 }
					 if(0 < pair < 3)
				     {
					     this->label21->Text = pair.ToString();
						 this->label33->Text = "Pair";
				     }
//三條					
					 if(pair >= 3)
					 {
					     pair = 0;
		 	             three_of_a_kind = 4;
				         full_house = 0;
				         straight = 0;
					     four_of_a_kind = 0;
					     flush = 0;
                         this->label21->Text = three_of_a_kind.ToString();
						 this->label33->Text = "Three of a kind";
					 }


//葫蘆                     
			     if(three_of_a_kind==4)
				 {
					 if(x1==x2 && x2==x3)
					 {
						 if(x4==x5)
						 {
                             pair = 0;
					         three_of_a_kind = 0;
					         full_house = 5;
					         straight = 0;
						     four_of_a_kind = 0;
						     flush = 0;
                             this->label21->Text = full_house.ToString();
							 this->label33->Text = "Full house";
						 }
					 }
					 if(x3==x4 && x4==x5)
					 {
						 if(x1==x2)
						 {
                             pair = 0;
					         three_of_a_kind = 0;
					         full_house = 5;
					         straight = 0;
						     four_of_a_kind = 0;
						     flush = 0;
                             this->label21->Text = full_house.ToString();
							 this->label33->Text = "Full house";
						 }
				     }	 
				 }
//順子
					 if(x1==x2+1 && x2==x3+1 && x3==x4+1 && x4==x5+1)
					 {
                         pair = 0;
						 three_of_a_kind = 0;
		     		     full_house = 0;
					     straight = 6;
						 four_of_a_kind = 0;
						 flush = 0;
                         this->label21->Text = straight.ToString();
						 this->label33->Text = "Straight";
					 }
//鐵支
						 if(x1==x2 && x2==x3 && x3==x4)
						 {
							 pair = 0;
						     three_of_a_kind = 0;
						     full_house = 0;
						     straight = 0;
							 four_of_a_kind = 7;
							 flush = 0;
                             this->label21->Text = four_of_a_kind.ToString();
							 this->label33->Text = "Four of a kind";
						 }
						 if(x2==x3 && x3==x4 && x4==x5)
						 {
							 pair = 0;
						     three_of_a_kind = 0;
						     full_house = 0;
						     straight = 0;
							 four_of_a_kind = 7;
							 flush = 0;
                             this->label21->Text = four_of_a_kind.ToString();
							 this->label33->Text = "Four of a kind";
						 }
//同花順
					 if(y1 == y2 && y2 == y3 && y3 == y4 && y4 == y5)
					 {
						 if(x1==x2+1 && x2==x3+1 && x3==x4+1 && x4==x5+1)
						 {
                             pair = 0;
						     three_of_a_kind = 0;
						     full_house = 0;
						     straight = 0;
							 four_of_a_kind = 0;
							 flush = 8;
                             this->label21->Text = flush.ToString();
							 this->label33->Text = "Flush";
						 }
					 }


					 ////////////////////玩家////////////////////
                             pair = 0;
						     three_of_a_kind = 0;
						     full_house = 0;
						     straight = 0;
							 four_of_a_kind = 0;
							 flush = 0;

//對子  
				     int v , w;
				     for(v=0;v<5;v++)
				     {
					     for(w=0;w<5;w++)
					     {
						     if(r[v] == r[w])
						     {
							     pair = pair + 1;
					         }
					     }
				     }
                     if(pair > 0)
				     {
					     pair = (pair-5) / 2;
				     }
					 if(pair == 0)
					 {
						 this->label34->Text = " ";
					 }
					 if(0 < pair < 3)
				     {
					     this->label22->Text = pair.ToString();
						 this->label34->Text = "Pair";
				     }
//三條					
					 if(pair >= 3)
					 {
					     pair = 0;
		 	             three_of_a_kind = 4;
				         full_house = 0;
				         straight = 0;
					     four_of_a_kind = 0;
					     flush = 0;
                         this->label22->Text = three_of_a_kind.ToString();
						 this->label34->Text = "Three of a kind";
					 }


//葫蘆                     
			     if(three_of_a_kind==4)
				 {
					 if(p1==p2 && p2==p3)
					 {
						 if(p4==p5)
						 {
							 pair = 0;
		 	                 three_of_a_kind = 0;
				             full_house = 5;
				             straight = 0;
					         four_of_a_kind = 0;
					         flush = 0;
                             this->label22->Text = full_house.ToString();
							 this->label34->Text = "Full house";
						 }
					 }
					 else
					 if(p3==p4 && p4==p5)
					 {
						 if(p1==p2)
						 {
                             this->label22->Text = full_house.ToString();
							 this->label34->Text = "Full house";
						 }
				     }	 
				 }
//順子
					 if(p1==p2+1 && p2==p3+1 && p3==p4+1 && p4==p5+1)
					 {
						 pair = 0;
		 	             three_of_a_kind = 0;
				         full_house = 0;
				         straight = 6;
					     four_of_a_kind = 0;
					     flush = 0;
                         this->label22->Text = straight.ToString();
						 this->label34->Text = "Straight";
					 }
//鐵支
						 if(p1==p2 && p2==p3 && p3==p4)
						 {
							 pair = 0;
		 	                 three_of_a_kind = 0;
				             full_house = 0;
				             straight = 0;
					         four_of_a_kind = 7;
					         flush = 0;
                             this->label22->Text = four_of_a_kind.ToString();
							 this->label34->Text = "Four of a kind";
						 }
						 if(p2==p3 && p3==p4 && p4==p5)
						 {
							 pair = 0;
		 	                 three_of_a_kind = 0;
				             full_house = 0;
				             straight = 0;
					         four_of_a_kind = 7;
					         flush = 0;
                             this->label22->Text = four_of_a_kind.ToString();
							 this->label34->Text = "Four of a kind";
						 }
//同花順
					 if(q1 == q2 && q2 == q3 && q3 == q4 && q4 == q5)
					 {
						 if(p1==p2+1 && p2==p3+1 && p3==p4+1 && p4==p5+1)
						 {
                             pair = 0;
		 	                 three_of_a_kind = 0;
				             full_house = 0;
				             straight = 0;
					         four_of_a_kind = 0;
					         flush = 8;
                             this->label22->Text = flush.ToString();
							 this->label34->Text = "Flush";
						 }
					 }


			 int bouns1;
				 bouns1 = System::Convert::ToInt16(label21->Text);
				 if(bouns1 == 0)
				 {
					 bouns1 = 1;
				 }
			 int bouns2;
			     bouns2 = System::Convert::ToInt16(label22->Text);
				 if(bouns2 == 0)
				 {
					 bouns2 = 1;
				 }
                 
				 // rank
				 x1 = System::Convert::ToInt16(label2->Text);
				 x2 = System::Convert::ToInt16(label4->Text);
				 x3 = System::Convert::ToInt16(label6->Text);
				 x4 = System::Convert::ToInt16(label8->Text);
				 x5 = System::Convert::ToInt16(label10->Text);
				 p1 = System::Convert::ToInt16(label12->Text);
				 p2 = System::Convert::ToInt16(label14->Text);
				 p3 = System::Convert::ToInt16(label16->Text);
				 p4 = System::Convert::ToInt16(label18->Text);
				 p5 = System::Convert::ToInt16(label20->Text);
				// suit
			     y1 = System::Convert::ToInt16(label1->Text);
				 y2 = System::Convert::ToInt16(label3->Text);
				 y3 = System::Convert::ToInt16(label5->Text);
				 y4 = System::Convert::ToInt16(label7->Text);
				 y5 = System::Convert::ToInt16(label9->Text);
				 q1 = System::Convert::ToInt16(label11->Text);
				 q2 = System::Convert::ToInt16(label13->Text);
				 q3 = System::Convert::ToInt16(label15->Text);
				 q4 = System::Convert::ToInt16(label17->Text);
				 q5 = System::Convert::ToInt16(label19->Text);
				 
				 int computer_score;

				 computer_score = ( (x1*y1) + (x2*y2) + (x3*y3) + (x4*y4) + (x5*y5) ) * bouns1;

				 int player_score;
				 
				 player_score = ( (p1*q1) + (p2*q2) + (p3*q3) + (p4*q4) + (p5*q5) ) * bouns2;

				 if(computer_score > player_score)
				 {
					 System::Windows::Forms::MessageBox::Show("Computer Win!!");
				 }
				 else
				 if(player_score > computer_score)
				 {
					 System::Windows::Forms::MessageBox::Show("Player Win!!");
				 }
				 

		 }
};
}

