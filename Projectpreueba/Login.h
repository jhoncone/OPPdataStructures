#pragma once
#include "conexiones.h"
#include "MyForm.h"
namespace Projectpreueba {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private:  MyForm^ ventana = gcnew MyForm();
	private: Bunifu::Framework::UI::BunifuGradientPanel^ bunifuGradientPanel1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: Bunifu::Framework::UI::BunifuThinButton2^ btnSign;

	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: Bunifu::Framework::UI::BunifuGradientPanel^ bunifuGradientPanel2;




	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel4;
	private: Guna::UI2::WinForms::Guna2GradientButton^ guna2GradientButton1;


	private: Guna::UI2::WinForms::Guna2GradientButton^ guna2GradientButton3;

	private: Bunifu::Framework::UI::BunifuGradientPanel^ bunifuGradientPanel3;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel1;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel7;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel5;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: Guna::UI2::WinForms::Guna2GradientPanel^ guna2GradientPanel1;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: Bunifu::Framework::UI::BunifuImageButton^ btnClose;
	private: Bunifu::Framework::UI::BunifuImageButton^ btnMinimizar;
	private: Guna::UI2::WinForms::Guna2AnimateWindow^ guna2AnimateWindow1;
	private: System::ComponentModel::IContainer^ components;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->bunifuGradientPanel1 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->btnSign = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuGradientPanel2 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->bunifuCustomLabel1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel7 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel5 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuCustomLabel4 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->guna2GradientPanel1 = (gcnew Guna::UI2::WinForms::Guna2GradientPanel());
			this->btnMinimizar = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->btnClose = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->guna2GradientButton1 = (gcnew Guna::UI2::WinForms::Guna2GradientButton());
			this->guna2GradientButton3 = (gcnew Guna::UI2::WinForms::Guna2GradientButton());
			this->bunifuGradientPanel3 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->guna2AnimateWindow1 = (gcnew Guna::UI2::WinForms::Guna2AnimateWindow(this->components));
			this->bunifuGradientPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->bunifuGradientPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->guna2GradientPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMinimizar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnClose))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->bunifuGradientPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// bunifuGradientPanel1
			// 
			this->bunifuGradientPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel1.BackgroundImage")));
			this->bunifuGradientPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel1->Controls->Add(this->btnSign);
			this->bunifuGradientPanel1->Controls->Add(this->pictureBox6);
			this->bunifuGradientPanel1->Controls->Add(this->textBox2);
			this->bunifuGradientPanel1->Controls->Add(this->pictureBox4);
			this->bunifuGradientPanel1->Controls->Add(this->pictureBox3);
			this->bunifuGradientPanel1->Controls->Add(this->textBox1);
			this->bunifuGradientPanel1->Controls->Add(this->pictureBox2);
			this->bunifuGradientPanel1->Controls->Add(this->pictureBox1);
			this->bunifuGradientPanel1->GradientBottomLeft = System::Drawing::Color::Navy;
			this->bunifuGradientPanel1->GradientBottomRight = System::Drawing::Color::SeaGreen;
			this->bunifuGradientPanel1->GradientTopLeft = System::Drawing::Color::SeaGreen;
			this->bunifuGradientPanel1->GradientTopRight = System::Drawing::Color::White;
			this->bunifuGradientPanel1->Location = System::Drawing::Point(249, 39);
			this->bunifuGradientPanel1->Name = L"bunifuGradientPanel1";
			this->bunifuGradientPanel1->Quality = 10;
			this->bunifuGradientPanel1->Size = System::Drawing::Size(380, 293);
			this->bunifuGradientPanel1->TabIndex = 0;
			// 
			// btnSign
			// 
			this->btnSign->ActiveBorderThickness = 1;
			this->btnSign->ActiveCornerRadius = 20;
			this->btnSign->ActiveFillColor = System::Drawing::Color::SeaGreen;
			this->btnSign->ActiveForecolor = System::Drawing::Color::White;
			this->btnSign->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->btnSign->BackColor = System::Drawing::SystemColors::Control;
			this->btnSign->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSign.BackgroundImage")));
			this->btnSign->ButtonText = L"SignIn";
			this->btnSign->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSign->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSign->ForeColor = System::Drawing::Color::White;
			this->btnSign->IdleBorderThickness = 1;
			this->btnSign->IdleCornerRadius = 20;
			this->btnSign->IdleFillColor = System::Drawing::Color::White;
			this->btnSign->IdleForecolor = System::Drawing::Color::SeaGreen;
			this->btnSign->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->btnSign->Location = System::Drawing::Point(86, 238);
			this->btnSign->Margin = System::Windows::Forms::Padding(5);
			this->btnSign->Name = L"btnSign";
			this->btnSign->Size = System::Drawing::Size(181, 41);
			this->btnSign->TabIndex = 8;
			this->btnSign->Tag = L"";
			this->btnSign->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnSign->Click += gcnew System::EventHandler(this, &Login::btnSign_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(152, 11);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(66, 50);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 7;
			this->pictureBox6->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Silver;
			this->textBox2->Location = System::Drawing::Point(96, 193);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(227, 15);
			this->textBox2->TabIndex = 6;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(34, 171);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(44, 37);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(22, 171);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(334, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(96, 91);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(227, 13);
			this->textBox1->TabIndex = 3;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(34, 80);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(49, 36);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(22, 67);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(334, 49);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// bunifuGradientPanel2
			// 
			this->bunifuGradientPanel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel2.BackgroundImage")));
			this->bunifuGradientPanel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel2->Controls->Add(this->bunifuCustomLabel1);
			this->bunifuGradientPanel2->Controls->Add(this->bunifuCustomLabel7);
			this->bunifuGradientPanel2->Controls->Add(this->bunifuCustomLabel5);
			this->bunifuGradientPanel2->Controls->Add(this->pictureBox5);
			this->bunifuGradientPanel2->Controls->Add(this->bunifuCustomLabel4);
			this->bunifuGradientPanel2->GradientBottomLeft = System::Drawing::Color::White;
			this->bunifuGradientPanel2->GradientBottomRight = System::Drawing::Color::White;
			this->bunifuGradientPanel2->GradientTopLeft = System::Drawing::Color::White;
			this->bunifuGradientPanel2->GradientTopRight = System::Drawing::Color::White;
			this->bunifuGradientPanel2->Location = System::Drawing::Point(3, 3);
			this->bunifuGradientPanel2->Name = L"bunifuGradientPanel2";
			this->bunifuGradientPanel2->Quality = 10;
			this->bunifuGradientPanel2->Size = System::Drawing::Size(249, 326);
			this->bunifuGradientPanel2->TabIndex = 2;
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->BackColor = System::Drawing::Color::White;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->bunifuCustomLabel1->Location = System::Drawing::Point(3, 216);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(165, 42);
			this->bunifuCustomLabel1->TabIndex = 11;
			this->bunifuCustomLabel1->Text = L"With,Data Structures\r\n\r\n";
			// 
			// bunifuCustomLabel7
			// 
			this->bunifuCustomLabel7->AutoSize = true;
			this->bunifuCustomLabel7->BackColor = System::Drawing::Color::Transparent;
			this->bunifuCustomLabel7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bunifuCustomLabel7->Location = System::Drawing::Point(37, 36);
			this->bunifuCustomLabel7->Name = L"bunifuCustomLabel7";
			this->bunifuCustomLabel7->Size = System::Drawing::Size(155, 46);
			this->bunifuCustomLabel7->TabIndex = 10;
			this->bunifuCustomLabel7->Text = L"BIENVENIDO A\r\n UNITED DISK";
			// 
			// bunifuCustomLabel5
			// 
			this->bunifuCustomLabel5->AutoSize = true;
			this->bunifuCustomLabel5->BackColor = System::Drawing::Color::White;
			this->bunifuCustomLabel5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->bunifuCustomLabel5->Location = System::Drawing::Point(0, 110);
			this->bunifuCustomLabel5->Name = L"bunifuCustomLabel5";
			this->bunifuCustomLabel5->Size = System::Drawing::Size(150, 42);
			this->bunifuCustomLabel5->TabIndex = 9;
			this->bunifuCustomLabel5->Text = L"Desarrollado  por :\r\n\r\n";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(0, 36);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(249, 290);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 5;
			this->pictureBox5->TabStop = false;
			// 
			// bunifuCustomLabel4
			// 
			this->bunifuCustomLabel4->AutoSize = true;
			this->bunifuCustomLabel4->BackColor = System::Drawing::Color::White;
			this->bunifuCustomLabel4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->bunifuCustomLabel4->Location = System::Drawing::Point(8, 236);
			this->bunifuCustomLabel4->Name = L"bunifuCustomLabel4";
			this->bunifuCustomLabel4->Size = System::Drawing::Size(165, 21);
			this->bunifuCustomLabel4->TabIndex = 4;
			this->bunifuCustomLabel4->Text = L"With Data Structures";
			// 
			// guna2GradientPanel1
			// 
			this->guna2GradientPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->guna2GradientPanel1->Controls->Add(this->btnMinimizar);
			this->guna2GradientPanel1->Controls->Add(this->btnClose);
			this->guna2GradientPanel1->Controls->Add(this->pictureBox7);
			this->guna2GradientPanel1->Location = System::Drawing::Point(3, 2);
			this->guna2GradientPanel1->Name = L"guna2GradientPanel1";
			this->guna2GradientPanel1->ShadowDecoration->Parent = this->guna2GradientPanel1;
			this->guna2GradientPanel1->Size = System::Drawing::Size(628, 34);
			this->guna2GradientPanel1->TabIndex = 8;
			// 
			// btnMinimizar
			// 
			this->btnMinimizar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->btnMinimizar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimizar.Image")));
			this->btnMinimizar->ImageActive = nullptr;
			this->btnMinimizar->Location = System::Drawing::Point(557, 0);
			this->btnMinimizar->Name = L"btnMinimizar";
			this->btnMinimizar->Size = System::Drawing::Size(31, 28);
			this->btnMinimizar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnMinimizar->TabIndex = 19;
			this->btnMinimizar->TabStop = false;
			this->btnMinimizar->Zoom = 10;
			this->btnMinimizar->Click += gcnew System::EventHandler(this, &Login::btnMinimizar_Click);
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->btnClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClose.Image")));
			this->btnClose->ImageActive = nullptr;
			this->btnClose->Location = System::Drawing::Point(594, 1);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(31, 28);
			this->btnClose->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnClose->TabIndex = 18;
			this->btnClose->TabStop = false;
			this->btnClose->Zoom = 10;
			this->btnClose->Click += gcnew System::EventHandler(this, &Login::btnClose_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(0, 7);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(86, 27);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 0;
			this->pictureBox7->TabStop = false;
			// 
			// guna2GradientButton1
			// 
			this->guna2GradientButton1->CheckedState->Parent = this->guna2GradientButton1;
			this->guna2GradientButton1->CustomImages->Parent = this->guna2GradientButton1;
			this->guna2GradientButton1->FillColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->guna2GradientButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2GradientButton1->ForeColor = System::Drawing::Color::White;
			this->guna2GradientButton1->HoverState->Parent = this->guna2GradientButton1;
			this->guna2GradientButton1->Location = System::Drawing::Point(335, 356);
			this->guna2GradientButton1->Name = L"guna2GradientButton1";
			this->guna2GradientButton1->ShadowDecoration->Parent = this->guna2GradientButton1;
			this->guna2GradientButton1->Size = System::Drawing::Size(129, 27);
			this->guna2GradientButton1->TabIndex = 3;
			this->guna2GradientButton1->Text = L"With, Data Structures ";
			// 
			// guna2GradientButton3
			// 
			this->guna2GradientButton3->CheckedState->Parent = this->guna2GradientButton3;
			this->guna2GradientButton3->CustomImages->Parent = this->guna2GradientButton3;
			this->guna2GradientButton3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2GradientButton3->ForeColor = System::Drawing::Color::White;
			this->guna2GradientButton3->HoverState->Parent = this->guna2GradientButton3;
			this->guna2GradientButton3->Location = System::Drawing::Point(72, 338);
			this->guna2GradientButton3->Name = L"guna2GradientButton3";
			this->guna2GradientButton3->ShadowDecoration->Parent = this->guna2GradientButton3;
			this->guna2GradientButton3->Size = System::Drawing::Size(180, 45);
			this->guna2GradientButton3->TabIndex = 7;
			this->guna2GradientButton3->Text = L"Developep";
			// 
			// bunifuGradientPanel3
			// 
			this->bunifuGradientPanel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel3.BackgroundImage")));
			this->bunifuGradientPanel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel3->Controls->Add(this->guna2GradientPanel1);
			this->bunifuGradientPanel3->Controls->Add(this->guna2GradientButton3);
			this->bunifuGradientPanel3->Controls->Add(this->guna2GradientButton1);
			this->bunifuGradientPanel3->Controls->Add(this->bunifuGradientPanel1);
			this->bunifuGradientPanel3->Controls->Add(this->bunifuGradientPanel2);
			this->bunifuGradientPanel3->GradientBottomLeft = System::Drawing::Color::White;
			this->bunifuGradientPanel3->GradientBottomRight = System::Drawing::Color::Blue;
			this->bunifuGradientPanel3->GradientTopLeft = System::Drawing::Color::SeaGreen;
			this->bunifuGradientPanel3->GradientTopRight = System::Drawing::Color::White;
			this->bunifuGradientPanel3->Location = System::Drawing::Point(2, -1);
			this->bunifuGradientPanel3->Name = L"bunifuGradientPanel3";
			this->bunifuGradientPanel3->Quality = 10;
			this->bunifuGradientPanel3->Size = System::Drawing::Size(635, 449);
			this->bunifuGradientPanel3->TabIndex = 9;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(649, 460);
			this->Controls->Add(this->bunifuGradientPanel3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login";
			this->Text = L"Login";
			this->bunifuGradientPanel1->ResumeLayout(false);
			this->bunifuGradientPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->bunifuGradientPanel2->ResumeLayout(false);
			this->bunifuGradientPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->guna2GradientPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMinimizar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnClose))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->bunifuGradientPanel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: bool form2Shown;
	private: System::Void btnSign_Click(System::Object^ sender, System::EventArgs^ e) {
		conexiones cone;
		bool band;
		//bool band=cone.Logear(textBox1->Text, textBox2->Text);
		band = true;
		

		if (band==true)
		{
			form2Shown = true;
			this->Close();
			ventana->ShowDialog();
			Application::ExitThread();
		}
		textBox1->Clear();
		textBox2->Clear();
	}
	private: System::Void Form1_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
	{
		if (!form2Shown)
		{
			Application::ExitThread();   
		}
	}


private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == (char)Keys::Enter) {
		textBox2->Focus();
		e->Handled = true;
	}
}
	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == (char)Keys::Enter) {
			btnSign_Click(sender, e);
			e->Handled = true;
		}
	}



private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnMinimizar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
};
}
