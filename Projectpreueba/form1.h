#pragma once
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
#include <string.h>
#include "ListaDoble.h"

#include "showForm.h"
#include "Forms2.h"
#include "conexiones.h"
#include <vector>
//using namespace std;//no deja usar arrays
//using namespace std;
namespace Projectpreueba {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de form1
	/// </summary>
	public ref class form1 : public System::Windows::Forms::Form
	{

		//se agrega el codigo que esta entre // para poder cerrar y minim<zar el segunddo form o
		//
	private: System::Windows::Forms::Form^ otherform;
	public:
		form1(System::Windows::Forms::Form^ frm1)
		{
			otherform = frm1;
			InitializeComponent();

		}
	

		   //

/*
	public:
		form1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	*/	


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~form1()
		{
			if (components)
			{
				delete components;
			}
		}

	
	//private: array <PictureBox^>^ PictureBoxArray = gcnew array<PictureBox^>(4);
		
	//public:Forms2^ ventanas = gcnew Forms2;
	
	private: System::Windows::Forms::PictureBox^ pbImage;
	

	protected:
	private: System::Windows::Forms::Button^ btnSelect;


	private: System::Windows::Forms::OpenFileDialog^ ofdSeleccionar;


	private: Bunifu::Framework::UI::BunifuGradientPanel^ bunifuGradientPanel1;




	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ txtAnio;
	private: System::Windows::Forms::TextBox^ txtAutor;
	private: System::Windows::Forms::TextBox^ txtArtist;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuElipse1;
	private: System::Windows::Forms::TextBox^ txtPos;




	private: Guna::UI2::WinForms::Guna2CustomRadioButton^ cusRadio1;


	private: Guna::UI2::WinForms::Guna2CustomRadioButton^ cusRadio2;
	private: Guna::UI2::WinForms::Guna2PictureBox^ guna2PictureBox7;
	private: Guna::UI2::WinForms::Guna2PictureBox^ guna2PictureBox6;
	private: Guna::UI2::WinForms::Guna2PictureBox^ guna2PictureBox8;
	private: Guna::UI2::WinForms::Guna2CustomRadioButton^ cusRadio3;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: Guna::UI2::WinForms::Guna2GradientPanel^ guna2GradientPanel1;

	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::PictureBox^ pictureBox5;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: Guna::UI2::WinForms::Guna2PictureBox^ guna2PictureBox4;

	private: Bunifu::Framework::UI::BunifuCustomLabel^ lblAutor;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ lblAnio;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ lblArtist;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ lblId;
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton4;
	private: Bunifu::Framework::UI::BunifuImageButton^ btnClose;
	private: Bunifu::Framework::UI::BunifuImageButton^ btnMinimizar;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnModifier;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnSave;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(form1::typeid));
			this->pbImage = (gcnew System::Windows::Forms::PictureBox());
			this->btnSelect = (gcnew System::Windows::Forms::Button());
			this->ofdSeleccionar = (gcnew System::Windows::Forms::OpenFileDialog());
			this->bunifuGradientPanel1 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->btnModifier = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnSave = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblAutor = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->lblAnio = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->lblArtist = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->lblId = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->txtAnio = (gcnew System::Windows::Forms::TextBox());
			this->txtAutor = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtArtist = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->guna2GradientPanel1 = (gcnew Guna::UI2::WinForms::Guna2GradientPanel());
			this->btnMinimizar = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->btnClose = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuFlatButton4 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->guna2PictureBox4 = (gcnew Guna::UI2::WinForms::Guna2PictureBox());
			this->guna2PictureBox8 = (gcnew Guna::UI2::WinForms::Guna2PictureBox());
			this->cusRadio3 = (gcnew Guna::UI2::WinForms::Guna2CustomRadioButton());
			this->cusRadio2 = (gcnew Guna::UI2::WinForms::Guna2CustomRadioButton());
			this->guna2PictureBox7 = (gcnew Guna::UI2::WinForms::Guna2PictureBox());
			this->guna2PictureBox6 = (gcnew Guna::UI2::WinForms::Guna2PictureBox());
			this->cusRadio1 = (gcnew Guna::UI2::WinForms::Guna2CustomRadioButton());
			this->txtPos = (gcnew System::Windows::Forms::TextBox());
			this->bunifuElipse1 = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImage))->BeginInit();
			this->bunifuGradientPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->guna2GradientPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMinimizar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnClose))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// pbImage
			// 
			this->pbImage->BackColor = System::Drawing::Color::White;
			this->pbImage->Location = System::Drawing::Point(367, 135);
			this->pbImage->Name = L"pbImage";
			this->pbImage->Size = System::Drawing::Size(141, 77);
			this->pbImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbImage->TabIndex = 0;
			this->pbImage->TabStop = false;
			// 
			// btnSelect
			// 
			this->btnSelect->BackColor = System::Drawing::Color::Purple;
			this->btnSelect->ForeColor = System::Drawing::Color::White;
			this->btnSelect->Location = System::Drawing::Point(367, 106);
			this->btnSelect->Name = L"btnSelect";
			this->btnSelect->Size = System::Drawing::Size(75, 23);
			this->btnSelect->TabIndex = 1;
			this->btnSelect->Text = L"Seleccionar";
			this->btnSelect->UseVisualStyleBackColor = false;
			this->btnSelect->Click += gcnew System::EventHandler(this, &form1::btnSelect_Click);
			// 
			// ofdSeleccionar
			// 
			this->ofdSeleccionar->FileName = L"openFileDialog1";
			// 
			// bunifuGradientPanel1
			// 
			this->bunifuGradientPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel1.BackgroundImage")));
			this->bunifuGradientPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel1->Controls->Add(this->btnModifier);
			this->bunifuGradientPanel1->Controls->Add(this->btnSave);
			this->bunifuGradientPanel1->Controls->Add(this->panel1);
			this->bunifuGradientPanel1->Controls->Add(this->guna2GradientPanel1);
			this->bunifuGradientPanel1->Controls->Add(this->guna2PictureBox4);
			this->bunifuGradientPanel1->Controls->Add(this->guna2PictureBox8);
			this->bunifuGradientPanel1->Controls->Add(this->cusRadio3);
			this->bunifuGradientPanel1->Controls->Add(this->cusRadio2);
			this->bunifuGradientPanel1->Controls->Add(this->guna2PictureBox7);
			this->bunifuGradientPanel1->Controls->Add(this->guna2PictureBox6);
			this->bunifuGradientPanel1->Controls->Add(this->cusRadio1);
			this->bunifuGradientPanel1->Controls->Add(this->txtPos);
			this->bunifuGradientPanel1->Controls->Add(this->btnSelect);
			this->bunifuGradientPanel1->Controls->Add(this->pbImage);
			this->bunifuGradientPanel1->GradientBottomLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->bunifuGradientPanel1->GradientBottomRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->bunifuGradientPanel1->GradientTopLeft = System::Drawing::Color::SeaGreen;
			this->bunifuGradientPanel1->GradientTopRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->bunifuGradientPanel1->Location = System::Drawing::Point(3, 6);
			this->bunifuGradientPanel1->Name = L"bunifuGradientPanel1";
			this->bunifuGradientPanel1->Quality = 10;
			this->bunifuGradientPanel1->Size = System::Drawing::Size(582, 432);
			this->bunifuGradientPanel1->TabIndex = 13;
			// 
			// btnModifier
			// 
			this->btnModifier->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnModifier->BackColor = System::Drawing::Color::Transparent;
			this->btnModifier->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnModifier->BorderRadius = 5;
			this->btnModifier->ButtonText = L"Modificar";
			this->btnModifier->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnModifier->DisabledColor = System::Drawing::Color::Gray;
			this->btnModifier->Iconcolor = System::Drawing::Color::Transparent;
			this->btnModifier->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnModifier.Iconimage")));
			this->btnModifier->Iconimage_right = nullptr;
			this->btnModifier->Iconimage_right_Selected = nullptr;
			this->btnModifier->Iconimage_Selected = nullptr;
			this->btnModifier->IconMarginLeft = 0;
			this->btnModifier->IconMarginRight = 0;
			this->btnModifier->IconRightVisible = true;
			this->btnModifier->IconRightZoom = 0;
			this->btnModifier->IconVisible = true;
			this->btnModifier->IconZoom = 90;
			this->btnModifier->IsTab = false;
			this->btnModifier->Location = System::Drawing::Point(169, 334);
			this->btnModifier->Name = L"btnModifier";
			this->btnModifier->Normalcolor = System::Drawing::Color::Transparent;
			this->btnModifier->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnModifier->OnHoverTextColor = System::Drawing::Color::White;
			this->btnModifier->selected = false;
			this->btnModifier->Size = System::Drawing::Size(109, 42);
			this->btnModifier->TabIndex = 39;
			this->btnModifier->Text = L"Modificar";
			this->btnModifier->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnModifier->Textcolor = System::Drawing::Color::Purple;
			this->btnModifier->TextFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->btnModifier->Click += gcnew System::EventHandler(this, &form1::btnModifier_Click);
			// 
			// btnSave
			// 
			this->btnSave->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnSave->BackColor = System::Drawing::Color::Transparent;
			this->btnSave->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSave->BorderRadius = 5;
			this->btnSave->ButtonText = L"Guardar";
			this->btnSave->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSave->DisabledColor = System::Drawing::Color::Gray;
			this->btnSave->Iconcolor = System::Drawing::Color::Transparent;
			this->btnSave->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSave.Iconimage")));
			this->btnSave->Iconimage_right = nullptr;
			this->btnSave->Iconimage_right_Selected = nullptr;
			this->btnSave->Iconimage_Selected = nullptr;
			this->btnSave->IconMarginLeft = 0;
			this->btnSave->IconMarginRight = 0;
			this->btnSave->IconRightVisible = true;
			this->btnSave->IconRightZoom = 0;
			this->btnSave->IconVisible = true;
			this->btnSave->IconZoom = 90;
			this->btnSave->IsTab = false;
			this->btnSave->Location = System::Drawing::Point(14, 334);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Normalcolor = System::Drawing::Color::Transparent;
			this->btnSave->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnSave->OnHoverTextColor = System::Drawing::Color::White;
			this->btnSave->selected = false;
			this->btnSave->Size = System::Drawing::Size(98, 42);
			this->btnSave->TabIndex = 16;
			this->btnSave->Text = L"Guardar";
			this->btnSave->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSave->Textcolor = System::Drawing::Color::Purple;
			this->btnSave->TextFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->btnSave->Click += gcnew System::EventHandler(this, &form1::btnSave_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->lblAutor);
			this->panel1->Controls->Add(this->lblAnio);
			this->panel1->Controls->Add(this->lblArtist);
			this->panel1->Controls->Add(this->lblId);
			this->panel1->Controls->Add(this->txtAnio);
			this->panel1->Controls->Add(this->txtAutor);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->txtArtist);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->txtId);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Location = System::Drawing::Point(14, 38);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(253, 280);
			this->panel1->TabIndex = 37;
			// 
			// lblAutor
			// 
			this->lblAutor->AutoSize = true;
			this->lblAutor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblAutor->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->lblAutor->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->lblAutor->Location = System::Drawing::Point(3, 168);
			this->lblAutor->Name = L"lblAutor";
			this->lblAutor->Size = System::Drawing::Size(82, 28);
			this->lblAutor->TabIndex = 41;
			this->lblAutor->Text = L"Cancion";
			// 
			// lblAnio
			// 
			this->lblAnio->AutoSize = true;
			this->lblAnio->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblAnio->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->lblAnio->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->lblAnio->Location = System::Drawing::Point(3, 230);
			this->lblAnio->Name = L"lblAnio";
			this->lblAnio->Size = System::Drawing::Size(48, 28);
			this->lblAnio->TabIndex = 40;
			this->lblAnio->Text = L"Año";
			// 
			// lblArtist
			// 
			this->lblArtist->AutoSize = true;
			this->lblArtist->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblArtist->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->lblArtist->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->lblArtist->Location = System::Drawing::Point(3, 119);
			this->lblArtist->Name = L"lblArtist";
			this->lblArtist->Size = System::Drawing::Size(59, 28);
			this->lblArtist->TabIndex = 39;
			this->lblArtist->Text = L"Artist";
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblId->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->lblId->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->lblId->Location = System::Drawing::Point(3, 56);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(31, 28);
			this->lblId->TabIndex = 38;
			this->lblId->Text = L"ID";
			// 
			// txtAnio
			// 
			this->txtAnio->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtAnio->Location = System::Drawing::Point(97, 245);
			this->txtAnio->Name = L"txtAnio";
			this->txtAnio->Size = System::Drawing::Size(100, 13);
			this->txtAnio->TabIndex = 20;
			// 
			// txtAutor
			// 
			this->txtAutor->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtAutor->Location = System::Drawing::Point(97, 180);
			this->txtAutor->Name = L"txtAutor";
			this->txtAutor->Size = System::Drawing::Size(100, 13);
			this->txtAutor->TabIndex = 19;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(87, 171);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(139, 32);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// txtArtist
			// 
			this->txtArtist->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtArtist->Location = System::Drawing::Point(97, 128);
			this->txtArtist->Name = L"txtArtist";
			this->txtArtist->Size = System::Drawing::Size(100, 13);
			this->txtArtist->TabIndex = 18;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(87, 235);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(139, 29);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 13;
			this->pictureBox3->TabStop = false;
			// 
			// txtId
			// 
			this->txtId->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtId->Location = System::Drawing::Point(97, 68);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(100, 13);
			this->txtId->TabIndex = 35;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(87, 118);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(139, 29);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(87, 55);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(139, 36);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 34;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(-14, -9);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(267, 286);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 0;
			this->pictureBox6->TabStop = false;
			// 
			// guna2GradientPanel1
			// 
			this->guna2GradientPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->guna2GradientPanel1->Controls->Add(this->btnMinimizar);
			this->guna2GradientPanel1->Controls->Add(this->btnClose);
			this->guna2GradientPanel1->Controls->Add(this->bunifuFlatButton4);
			this->guna2GradientPanel1->Location = System::Drawing::Point(3, 0);
			this->guna2GradientPanel1->Name = L"guna2GradientPanel1";
			this->guna2GradientPanel1->ShadowDecoration->Parent = this->guna2GradientPanel1;
			this->guna2GradientPanel1->Size = System::Drawing::Size(579, 32);
			this->guna2GradientPanel1->TabIndex = 32;
			// 
			// btnMinimizar
			// 
			this->btnMinimizar->BackColor = System::Drawing::Color::Transparent;
			this->btnMinimizar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimizar.Image")));
			this->btnMinimizar->ImageActive = nullptr;
			this->btnMinimizar->Location = System::Drawing::Point(500, 1);
			this->btnMinimizar->Name = L"btnMinimizar";
			this->btnMinimizar->Size = System::Drawing::Size(31, 28);
			this->btnMinimizar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnMinimizar->TabIndex = 15;
			this->btnMinimizar->TabStop = false;
			this->btnMinimizar->Zoom = 10;
			this->btnMinimizar->Click += gcnew System::EventHandler(this, &form1::btnMinimizar_Click);
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::Transparent;
			this->btnClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClose.Image")));
			this->btnClose->ImageActive = nullptr;
			this->btnClose->Location = System::Drawing::Point(537, 1);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(31, 28);
			this->btnClose->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnClose->TabIndex = 14;
			this->btnClose->TabStop = false;
			this->btnClose->Zoom = 10;
			this->btnClose->Click += gcnew System::EventHandler(this, &form1::btnClose_Click);
			// 
			// bunifuFlatButton4
			// 
			this->bunifuFlatButton4->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton4->BackColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton4->BorderRadius = 5;
			this->bunifuFlatButton4->ButtonText = L"Tabla";
			this->bunifuFlatButton4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton4->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton4->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton4->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton4.Iconimage")));
			this->bunifuFlatButton4->Iconimage_right = nullptr;
			this->bunifuFlatButton4->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton4->Iconimage_Selected = nullptr;
			this->bunifuFlatButton4->IconMarginLeft = 0;
			this->bunifuFlatButton4->IconMarginRight = 0;
			this->bunifuFlatButton4->IconRightVisible = true;
			this->bunifuFlatButton4->IconRightZoom = 0;
			this->bunifuFlatButton4->IconVisible = true;
			this->bunifuFlatButton4->IconZoom = 90;
			this->bunifuFlatButton4->IsTab = false;
			this->bunifuFlatButton4->Location = System::Drawing::Point(240, -5);
			this->bunifuFlatButton4->Name = L"bunifuFlatButton4";
			this->bunifuFlatButton4->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton4->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuFlatButton4->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton4->selected = false;
			this->bunifuFlatButton4->Size = System::Drawing::Size(98, 42);
			this->bunifuFlatButton4->TabIndex = 13;
			this->bunifuFlatButton4->Text = L"Tabla";
			this->bunifuFlatButton4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton4->Textcolor = System::Drawing::Color::Purple;
			this->bunifuFlatButton4->TextFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->bunifuFlatButton4->Click += gcnew System::EventHandler(this, &form1::bunifuFlatButton4_Click);
			// 
			// guna2PictureBox4
			// 
			this->guna2PictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->guna2PictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2PictureBox4.Image")));
			this->guna2PictureBox4->Location = System::Drawing::Point(319, 32);
			this->guna2PictureBox4->Name = L"guna2PictureBox4";
			this->guna2PictureBox4->ShadowDecoration->Parent = this->guna2PictureBox4;
			this->guna2PictureBox4->Size = System::Drawing::Size(241, 49);
			this->guna2PictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->guna2PictureBox4->TabIndex = 17;
			this->guna2PictureBox4->TabStop = false;
			// 
			// guna2PictureBox8
			// 
			this->guna2PictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->guna2PictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2PictureBox8.Image")));
			this->guna2PictureBox8->Location = System::Drawing::Point(400, 295);
			this->guna2PictureBox8->Name = L"guna2PictureBox8";
			this->guna2PictureBox8->ShadowDecoration->Parent = this->guna2PictureBox8;
			this->guna2PictureBox8->Size = System::Drawing::Size(108, 23);
			this->guna2PictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->guna2PictureBox8->TabIndex = 31;
			this->guna2PictureBox8->TabStop = false;
			// 
			// cusRadio3
			// 
			this->cusRadio3->BackColor = System::Drawing::Color::Transparent;
			this->cusRadio3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cusRadio3.BackgroundImage")));
			this->cusRadio3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cusRadio3->CheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cusRadio3->CheckedState->BorderThickness = 0;
			this->cusRadio3->CheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cusRadio3->CheckedState->InnerColor = System::Drawing::Color::White;
			this->cusRadio3->CheckedState->Parent = this->cusRadio3;
			this->cusRadio3->Location = System::Drawing::Point(367, 295);
			this->cusRadio3->Name = L"cusRadio3";
			this->cusRadio3->ShadowDecoration->Parent = this->cusRadio3;
			this->cusRadio3->Size = System::Drawing::Size(27, 20);
			this->cusRadio3->TabIndex = 30;
			this->cusRadio3->UncheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->cusRadio3->UncheckedState->BorderThickness = 2;
			this->cusRadio3->UncheckedState->FillColor = System::Drawing::Color::Transparent;
			this->cusRadio3->UncheckedState->InnerColor = System::Drawing::Color::Transparent;
			this->cusRadio3->UncheckedState->Parent = this->cusRadio3;
			// 
			// cusRadio2
			// 
			this->cusRadio2->BackColor = System::Drawing::Color::Transparent;
			this->cusRadio2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cusRadio2.BackgroundImage")));
			this->cusRadio2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cusRadio2->CheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cusRadio2->CheckedState->BorderThickness = 0;
			this->cusRadio2->CheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cusRadio2->CheckedState->InnerColor = System::Drawing::Color::White;
			this->cusRadio2->CheckedState->Parent = this->cusRadio2;
			this->cusRadio2->Location = System::Drawing::Point(367, 258);
			this->cusRadio2->Name = L"cusRadio2";
			this->cusRadio2->ShadowDecoration->Parent = this->cusRadio2;
			this->cusRadio2->Size = System::Drawing::Size(27, 20);
			this->cusRadio2->TabIndex = 29;
			this->cusRadio2->UncheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->cusRadio2->UncheckedState->BorderThickness = 2;
			this->cusRadio2->UncheckedState->FillColor = System::Drawing::Color::Transparent;
			this->cusRadio2->UncheckedState->InnerColor = System::Drawing::Color::Transparent;
			this->cusRadio2->UncheckedState->Parent = this->cusRadio2;
			// 
			// guna2PictureBox7
			// 
			this->guna2PictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->guna2PictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2PictureBox7.Image")));
			this->guna2PictureBox7->Location = System::Drawing::Point(400, 255);
			this->guna2PictureBox7->Name = L"guna2PictureBox7";
			this->guna2PictureBox7->ShadowDecoration->Parent = this->guna2PictureBox7;
			this->guna2PictureBox7->Size = System::Drawing::Size(108, 23);
			this->guna2PictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->guna2PictureBox7->TabIndex = 28;
			this->guna2PictureBox7->TabStop = false;
			// 
			// guna2PictureBox6
			// 
			this->guna2PictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->guna2PictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2PictureBox6.Image")));
			this->guna2PictureBox6->Location = System::Drawing::Point(400, 218);
			this->guna2PictureBox6->Name = L"guna2PictureBox6";
			this->guna2PictureBox6->ShadowDecoration->Parent = this->guna2PictureBox6;
			this->guna2PictureBox6->Size = System::Drawing::Size(108, 23);
			this->guna2PictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->guna2PictureBox6->TabIndex = 27;
			this->guna2PictureBox6->TabStop = false;
			// 
			// cusRadio1
			// 
			this->cusRadio1->BackColor = System::Drawing::Color::Transparent;
			this->cusRadio1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cusRadio1.BackgroundImage")));
			this->cusRadio1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cusRadio1->CheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cusRadio1->CheckedState->BorderThickness = 0;
			this->cusRadio1->CheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cusRadio1->CheckedState->InnerColor = System::Drawing::Color::White;
			this->cusRadio1->CheckedState->Parent = this->cusRadio1;
			this->cusRadio1->Location = System::Drawing::Point(367, 221);
			this->cusRadio1->Name = L"cusRadio1";
			this->cusRadio1->ShadowDecoration->Parent = this->cusRadio1;
			this->cusRadio1->Size = System::Drawing::Size(27, 20);
			this->cusRadio1->TabIndex = 26;
			this->cusRadio1->UncheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->cusRadio1->UncheckedState->BorderThickness = 2;
			this->cusRadio1->UncheckedState->FillColor = System::Drawing::Color::Transparent;
			this->cusRadio1->UncheckedState->InnerColor = System::Drawing::Color::Transparent;
			this->cusRadio1->UncheckedState->Parent = this->cusRadio1;
			// 
			// txtPos
			// 
			this->txtPos->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPos->Location = System::Drawing::Point(414, 324);
			this->txtPos->Name = L"txtPos";
			this->txtPos->Size = System::Drawing::Size(36, 13);
			this->txtPos->TabIndex = 23;
			// 
			// bunifuElipse1
			// 
			this->bunifuElipse1->ElipseRadius = 5;
			this->bunifuElipse1->TargetControl = this->bunifuGradientPanel1;
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(586, 439);
			this->Controls->Add(this->bunifuGradientPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"form1";
			this->Text = L"form1";
			this->Load += gcnew System::EventHandler(this, &form1::form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImage))->EndInit();
			this->bunifuGradientPanel1->ResumeLayout(false);
			this->bunifuGradientPanel1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->guna2GradientPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMinimizar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnClose))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox6))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		static std::string toStandardString(System::String^ string)
		{
			using System::Runtime::InteropServices::Marshal;
			System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
			char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
			std::string returnString(charPointer, string->Length);
			Marshal::FreeHGlobal(pointer);
			return returnString;
		}


	private: System::Void form1_Load(System::Object^ sender, System::EventArgs^ e) {
		txtId->Focus();
	}
	private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
	//	conexion con;
		

		/*
		id = Convert::ToInt32(txtId->Text);
		anio = Convert::ToInt32(txtAnio->Text);
	
	

		artist = toStandardString(txtArtist->Text);//para convertir de System String a basic string
		autor = toStandardString(txtAutor->Text);
		*/

		//conexiones conex;
		//conex.Insertar(id, txtArtist->Text, txtAutor->Text, anio);
		//artisInsert=Convert::ToString(textNombres->Text);
		

		//list.insertarInicio(4," artist","zacarias ", 2017 );
		//list.insertarInicio(6, " bartist", " tomas",2018 );
		//list.insertarInicio(8, " cartist", " mari", 2019);
		//list.insertarInicio(5, " dartist", " lucas", 2010);
		//list.insertarInicio(7, " qartist", " juan", 2012);
		//list.insertarInicio(9, " partist", " camilo", 2013);
	
	//	list.addFromExcelInsert("examples.csv");

		//Char  selec;
		
		ListaDoble list;
		int id, anio, selec, tipo, pos;
		std::string artist;
		std::string autor;
		bool buscar;
		
		if (cusRadio1->Checked)
		{
			selec = 1;

		}

		if (cusRadio2->Checked)
		{
			selec = 2;

		}
		if (cusRadio3->Checked)
		{
			selec = 3;
			//txtPos->Visible = true;
			pos= Convert::ToInt32(txtPos->Text);


		}
		
		if ((txtId->Text->Length!=0&&txtArtist->Text->Length!=0&&txtAutor->Text->Length!=0&&txtAnio->Text->Length!=0))
		{
			//list.addFromExcelInsert("examples.csv");
			list.addFromExcelData("examples.csv");
			id = Convert::ToInt32(txtId->Text);
			anio = Convert::ToInt32(txtAnio->Text);

			

			artist = toStandardString(txtArtist->Text);//para convertir de System String a basic string
			autor = toStandardString(txtAutor->Text);

			buscar = list.buscarDisco(id);
			if (buscar == false)
			{
				remove("examples.csv");

				switch (selec)
				{
				case 1:list.insertarInicio(id, artist, autor, anio);
					break;
				case 2:list.insertarFinal(id, artist, autor, anio);
					break;
				case 3:list.insertarxPosicion(pos, id, artist, autor, anio);
					break;
				default:break;
				}

				//	list.insertarxPosicion(2,artist, autor,anio);
				list.Mostrar();
				list.guardarListaENarchivo("examples.csv");

			}
			else {
				MessageBox::Show("El disco ya esta registrado");
			}
		}
		else {
			MessageBox::Show("No se puede insertar Campos vacios");
		}
		
		/*
		//switch (tipo)
		switch(selec)
		{
		case 1:list.insertarInicio(id,artist, autor, anio);
			break;
		case 2:list.insertarFinal(id,artist, autor, anio);
			break;
		case 3:list.insertarxPosicion(pos,id,artist,autor,anio);
			break;
		default:break;
		}

	//	list.insertarxPosicion(2,artist, autor,anio);
		list.Mostrar();
		list.guardarListaENarchivo("examples.csv");
		*/
		limpiar();

	}

	private: void limpiar()
	{
		txtId->Clear();
		txtArtist->Clear();
		txtAutor->Clear();
		txtAnio->Clear();
		txtPos->Clear();
		//txtPos->Visible = false;
		txtId->Focus();
		cusRadio1->Checked=false;
		cusRadio2->Checked = false;
		cusRadio3->Checked = false;
	}
	private: System::Void btnSelect_Click(System::Object^ sender, System::EventArgs^ e) {
		//OpenFileDialog^ ofd = gcnew  openFileDialog();
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			pbImage->Image = Image::FromFile(ofd->FileName);
		}

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//	using namespace System;
			//string artist = "luis";

		String^ artisCon;
		//artisCon = gcnew String(artist.c_str());
		array<int>^ enter = gcnew array<int>(2);

		array<double>^ Values = gcnew array<double>(4)
		{
			550500, 115000, 425000, 350000
		};
		//PictureBoxArray->Add(pbImage);
		


		array<String^>^ Artist = gcnew array<String^>(2);
		//{
		  //  "artistas","artist","artis","arti"
		//};
		Artist[0] = "artist";
		Artist[1] = "artisst";
		enter[0] = 1;
		enter[1] = 2;
		//Console::WriteLine(L"array", Artist[0]);
		//Console::WriteLine("array", Artist[1]);
		//Console::WriteLine("array", enter[0]);
		//Console::WriteLine("array", enter[1]);
		//Console::WriteLine(L"array", Values[3]);

	//	for each (array<double> ^ outer in Values) {
		//Console::Write("[");
		//for each (String ^ i in outer)
		//	Console::Write(" {0}", i);
		//Console::Write(" ]");
	//	Console::WriteLine();
		//	}
		//array de strings y modificarlos
	

		
		
		array<String^>^ gc3 = gcnew array<String^>(3) {
			"ales", "rauls", "carlos"

		};

		for (int i = 0; i < 3; i++) {
			Console::Write("[");
			Console::Write(gc3[i]);
			Console::Write(" ]");
		//	Console::WriteLine();
		}

	
}  
private: System::Void btnTable_Click(System::Object^ sender, System::EventArgs^ e) {

	//this->ventanas->ShowDialog();//muestra la tabla actualizada
	

}




	private: System::Void btnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
		ListaDoble list;
		int id, anio, selec, tipo;
		std::string artist;
		std::string autor;
		bool buscar;
		if ((txtId->Text->Length != 0 && txtArtist->Text->Length != 0 && txtAutor->Text->Length != 0 && txtAnio->Text->Length != 0))
		{
			id = Convert::ToInt32(txtId->Text);
			anio = Convert::ToInt32(txtAnio->Text);
			//tipo = Convert::ToInt32(txtTipo->Text);
			//anio = anioInsert;

			artist = toStandardString(txtArtist->Text);//para convertir de System String a basic string
			autor = toStandardString(txtAutor->Text);
			//conexiones conex;
			//conex.Insertar(id, txtArtist->Text, txtAutor->Text, anio);
			//artisInsert=Convert::ToString(textNombres->Text);



			list.addFromExcelData("examples.csv");
			buscar = list.buscarDisco(id);
			if (buscar == true)
			{
				remove("examples.csv");
				
				list.modificarValu(id, artist, autor, anio);

				//	list.insertarxPosicion(2,artist, autor,anio);
				list.Mostrar();
				list.guardarListaENarchivo("examples.csv");
			}
			else {
				MessageBox::Show("EL disco no esta registrado");
			}
		}
		else {
			MessageBox::Show("No se puede Modificar Campos vacios");
		}

		limpiar();


}
		

private: System::Void bunifuFlatButton4_Click(System::Object^ sender, System::EventArgs^ e) {
//	this->ventanas->ShowDialog();//muestra la tabla actualizada
	Forms2^ c = gcnew Forms2(this);

	//Form2^ frm2 = gcnew Form2(this);
	c->Show();

}
private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	otherform->Show();
	
	//this->close();
	//this->form1::Close();
	//this->WindowState = form1::OnFormClosing();
}
private: System::Void btnMinimizar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
	   /*
private: System::Void form1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	e->Cancel = MessageBox::Show("Do you want to exit?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) != System::Windows::Forms::DialogResult::Yes;

}
*/
private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {

	

	/*
	id = Convert::ToInt32(txtId->Text);
	anio = Convert::ToInt32(txtAnio->Text);



	artist = toStandardString(txtArtist->Text);//para convertir de System String a basic string
	autor = toStandardString(txtAutor->Text);

	*/

	
//	conex.Insertar(id, txtArtist->Text, txtAutor->Text, anio);
	//artisInsert=Convert::ToString(textNombres->Text);


	//list.insertarInicio(4," artist","zacarias ", 2017 );
	//list.insertarInicio(6, " bartist", " tomas",2018 );
	//list.insertarInicio(8, " cartist", " mari", 2019);
	//list.insertarInicio(5, " dartist", " lucas", 2010);
	//list.insertarInicio(7, " qartist", " juan", 2012);
	//list.insertarInicio(9, " partist", " camilo", 2013);

//	list.addFromExcelInsert("examples.csv");

	//Char  selec;

	ListaDoble list;
	int id, anio, selec = 0, tipo, pos;
	std::string artist;
	std::string autor;
	bool buscar;
	conexiones conex;

	if (cusRadio1->Checked)
	{
		selec = 1;

	}

	if (cusRadio2->Checked)
	{
		selec = 2;

	}
	if (cusRadio3->Checked)
	{
		selec = 3;
		//txtPos->Visible = true;
		pos = Convert::ToInt32(txtPos->Text);


	}

	if ((txtId->Text->Length != 0 && txtArtist->Text->Length != 0 && txtAutor->Text->Length != 0 && txtAnio->Text->Length != 0&&selec!=0))
	{ 
		
		//list.addFromExcelInsert("examples.csv");
		list.addFromExcelData("examples.csv");
		id = Convert::ToInt32(txtId->Text);
		anio = Convert::ToInt32(txtAnio->Text);



		artist = toStandardString(txtArtist->Text);//para convertir de System String a basic string
		autor = toStandardString(txtAutor->Text);

		buscar = list.buscarDisco(id);
		if (buscar == false)
		{
			//
			//conex.Insertar(id, txtArtist->Text, txtAutor->Text, anio);
			//

			remove("examples.csv");

			switch (selec)
			{
			case 1:list.insertarInicio(id, artist, autor, anio);
				break;
			case 2:list.insertarFinal(id, artist, autor, anio);
				break;
			case 3:list.insertarxPosicion(pos, id, artist, autor, anio);
				break;
			default:break;
			}

			list.Mostrar();
			list.guardarListaENarchivo("examples.csv");

			MessageBox::Show("Disco Guardado");

		}
		else {
			MessageBox::Show("El disco ya esta registrado");
		}
	}
	else {
		MessageBox::Show("No se puede insertar Campos vacios");
	}


	limpiar();
}
private: System::Void btnModifier_Click(System::Object^ sender, System::EventArgs^ e) {
	ListaDoble list;
	conexiones conex;
	int id, anio, selec, tipo;
	std::string artist;
	std::string autor;
	bool buscar;
	if ((txtId->Text->Length != 0 && txtArtist->Text->Length != 0 && txtAutor->Text->Length != 0 && txtAnio->Text->Length != 0))
	{
		id = Convert::ToInt32(txtId->Text);
		anio = Convert::ToInt32(txtAnio->Text);

		artist = toStandardString(txtArtist->Text);//para convertir de System String a basic string
		autor = toStandardString(txtAutor->Text);
		
		



		list.addFromExcelData("examples.csv");
		buscar = list.buscarDisco(id);
		if (buscar == true)
		{
			
			//
			//conex.Modificar(id, txtArtist->Text, txtAutor->Text, anio);
			//
			remove("examples.csv");

			list.modificarValu(id, artist, autor, anio);

	
			list.Mostrar();
			list.guardarListaENarchivo("examples.csv");

			MessageBox::Show("Disco Modificado");
		}
		else {
			MessageBox::Show("EL disco no esta registrado");
		}
	}
	else {
		MessageBox::Show("No se puede Modificar Campos vacios");
	}

	limpiar();

}
};
}

