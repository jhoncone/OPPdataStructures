#pragma once
#include "ListaDoble.h"
#include "BinaryTree.h"

namespace Projectpreueba {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	using  System::Security::Permissions::FileIOPermission;
	using System::Drawing::Imaging::ImageFormat;
	using System::Drawing::Imaging::PixelFormat;
	using System::IO::FileStream;
	using System::Drawing::Printing::PrintDocument;
	using System::Drawing::Printing::PrintEventHandler;
	using System::Drawing::Printing::PrintPageEventHandler;
	using System::Drawing::Printing::PrintPageEventArgs;
	using System::Drawing::Printing::PrinterSettings;
	using namespace System::IO;
	using namespace System::Threading;
	//using System::Drawing::Printing::


	/// <summary>
	/// Resumen de About
	/// </summary>
	public ref class About : public System::Windows::Forms::Form
	{
		

		private: System::Windows::Forms::Form^ otherform;
		public:
			About(System::Windows::Forms::Form^ frm1)
			{
				otherform = frm1;
				InitializeComponent();

			}

		/*
	public:
		About(void)
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
		~About()
		{
			if (components)
			{
				delete components;
			}
		}


	//public: MyForm1^ Ventana = gcnew MyForm1(); //ventana auxiliar
	public: int* ValoresCopia = new int[15]; //ValoresCopia que se autogeneran para un arbol
	public: int BanderaPos;
	public: int ContadorValoresAuxArbol = 0;
	public:  Bitmap^ memoryImage;
	public: PrintDocument^ PrtDoc = gcnew PrintDocument();
	public:
		int cont = 0;
		int contArrD = 0;
		int Apertura = 120;
		int cantidadDeDatos = 0;
		int ContadorDeClicks = 0;
	private: array <Point^>^ Posiciones = gcnew array<Point^>(20);
	private: array <Label^>^ Labels = gcnew array<Label^>(20);
	private: array <Label^>^ LabelsLista = gcnew array<Label^>(20);
	private: array <Label^>^ LabelsListaBasurero = gcnew array<Label^>(20);
	public: array <Point^>^ PosicionesPantalla = gcnew array<Point^>(20);
	public: array <Point^>^ PosicionesPantallaPilas = gcnew array<Point^>(20);
	public: array <Point^>^ PosicionesPantallaBasurero = gcnew array<Point^>(20);
	private: PrintDocument^ DocumentoParaImprimir = gcnew PrintDocument();
	private: PrintDialog^ Impresora = gcnew PrintDialog();











	private: Bunifu::Framework::UI::BunifuGradientPanel^ bunifuGradientPanel1;
	protected:
	private: Guna::UI2::WinForms::Guna2GradientButton^ guna2GradientButton3;
	private: Guna::UI2::WinForms::Guna2GradientButton^ guna2GradientButton2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: Guna::UI2::WinForms::Guna2GradientButton^ guna2GradientButton1;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button1;
	private: Bunifu::Framework::UI::BunifuImageButton^ btnLimpiar;
	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::Button^ btnImprimir;
	private: System::Windows::Forms::Button^ btnPreOrden;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Button^ btnPosOrden;
	private: System::Windows::Forms::Button^ btnInOrden;
	private: System::Windows::Forms::Button^ button2;
	private: Bunifu::Framework::UI::BunifuImageButton^ btnMinimizar;
	private: Bunifu::Framework::UI::BunifuImageButton^ btnClose;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuElipse1;
	private: Guna::UI2::WinForms::Guna2HtmlLabel^ guna2HtmlLabel4;
	private: BunifuAnimatorNS::BunifuTransition^ bunifuTransition1;
	private: Guna::UI2::WinForms::Guna2HtmlLabel^ guna2HtmlLabel3;
	private: Guna::UI2::WinForms::Guna2HtmlLabel^ guna2HtmlLabel2;
	private: Guna::UI2::WinForms::Guna2HtmlLabel^ guna2HtmlLabel1;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel3;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ LblCurso;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel2;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel1;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ labelIntegrante1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(About::typeid));
			BunifuAnimatorNS::Animation^ animation1 = (gcnew BunifuAnimatorNS::Animation());
			this->bunifuGradientPanel1 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->btnClose = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->btnMinimizar = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnPosOrden = (gcnew System::Windows::Forms::Button());
			this->btnInOrden = (gcnew System::Windows::Forms::Button());
			this->btnPreOrden = (gcnew System::Windows::Forms::Button());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->btnImprimir = (gcnew System::Windows::Forms::Button());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->btnLimpiar = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->guna2GradientButton3 = (gcnew Guna::UI2::WinForms::Guna2GradientButton());
			this->guna2GradientButton2 = (gcnew Guna::UI2::WinForms::Guna2GradientButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->guna2GradientButton1 = (gcnew Guna::UI2::WinForms::Guna2GradientButton());
			this->bunifuElipse1 = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->labelIntegrante1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel2 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->LblCurso = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel3 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->guna2HtmlLabel1 = (gcnew Guna::UI2::WinForms::Guna2HtmlLabel());
			this->guna2HtmlLabel2 = (gcnew Guna::UI2::WinForms::Guna2HtmlLabel());
			this->guna2HtmlLabel3 = (gcnew Guna::UI2::WinForms::Guna2HtmlLabel());
			this->guna2HtmlLabel4 = (gcnew Guna::UI2::WinForms::Guna2HtmlLabel());
			this->guna2AnimateWindow1 = (gcnew Guna::UI2::WinForms::Guna2AnimateWindow(this->components));
			this->bunifuTransition1 = (gcnew BunifuAnimatorNS::BunifuTransition(this->components));
			this->bunifuGradientPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnClose))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMinimizar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnLimpiar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// bunifuGradientPanel1
			// 
			this->bunifuGradientPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel1.BackgroundImage")));
			this->bunifuGradientPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel1->Controls->Add(this->guna2HtmlLabel4);
			this->bunifuGradientPanel1->Controls->Add(this->guna2HtmlLabel3);
			this->bunifuGradientPanel1->Controls->Add(this->guna2HtmlLabel2);
			this->bunifuGradientPanel1->Controls->Add(this->guna2HtmlLabel1);
			this->bunifuGradientPanel1->Controls->Add(this->bunifuCustomLabel3);
			this->bunifuGradientPanel1->Controls->Add(this->LblCurso);
			this->bunifuGradientPanel1->Controls->Add(this->bunifuCustomLabel2);
			this->bunifuGradientPanel1->Controls->Add(this->bunifuCustomLabel1);
			this->bunifuGradientPanel1->Controls->Add(this->labelIntegrante1);
			this->bunifuGradientPanel1->Controls->Add(this->btnClose);
			this->bunifuGradientPanel1->Controls->Add(this->btnMinimizar);
			this->bunifuGradientPanel1->Controls->Add(this->button2);
			this->bunifuGradientPanel1->Controls->Add(this->btnPosOrden);
			this->bunifuGradientPanel1->Controls->Add(this->btnInOrden);
			this->bunifuGradientPanel1->Controls->Add(this->btnPreOrden);
			this->bunifuGradientPanel1->Controls->Add(this->richTextBox3);
			this->bunifuGradientPanel1->Controls->Add(this->btnImprimir);
			this->bunifuGradientPanel1->Controls->Add(this->btnGuardar);
			this->bunifuGradientPanel1->Controls->Add(this->btnLimpiar);
			this->bunifuGradientPanel1->Controls->Add(this->button1);
			this->bunifuGradientPanel1->Controls->Add(this->bunifuImageButton1);
			this->bunifuGradientPanel1->Controls->Add(this->pictureBox2);
			this->bunifuGradientPanel1->Controls->Add(this->guna2GradientButton3);
			this->bunifuGradientPanel1->Controls->Add(this->guna2GradientButton2);
			this->bunifuGradientPanel1->Controls->Add(this->pictureBox1);
			this->bunifuGradientPanel1->Controls->Add(this->guna2GradientButton1);
			this->bunifuTransition1->SetDecoration(this->bunifuGradientPanel1, BunifuAnimatorNS::DecorationType::None);
			this->bunifuGradientPanel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->bunifuGradientPanel1->GradientBottomLeft = System::Drawing::Color::Black;
			this->bunifuGradientPanel1->GradientBottomRight = System::Drawing::Color::SeaGreen;
			this->bunifuGradientPanel1->GradientTopLeft = System::Drawing::Color::SeaGreen;
			this->bunifuGradientPanel1->GradientTopRight = System::Drawing::Color::Blue;
			this->bunifuGradientPanel1->Location = System::Drawing::Point(-2, 1);
			this->bunifuGradientPanel1->Name = L"bunifuGradientPanel1";
			this->bunifuGradientPanel1->Quality = 10;
			this->bunifuGradientPanel1->Size = System::Drawing::Size(639, 611);
			this->bunifuGradientPanel1->TabIndex = 0;
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::Transparent;
			this->bunifuTransition1->SetDecoration(this->btnClose, BunifuAnimatorNS::DecorationType::None);
			this->btnClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClose.Image")));
			this->btnClose->ImageActive = nullptr;
			this->btnClose->Location = System::Drawing::Point(603, 0);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(31, 28);
			this->btnClose->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnClose->TabIndex = 23;
			this->btnClose->TabStop = false;
			this->btnClose->Zoom = 10;
			this->btnClose->Click += gcnew System::EventHandler(this, &About::btnClose_Click);
			// 
			// btnMinimizar
			// 
			this->btnMinimizar->BackColor = System::Drawing::Color::Transparent;
			this->bunifuTransition1->SetDecoration(this->btnMinimizar, BunifuAnimatorNS::DecorationType::None);
			this->btnMinimizar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimizar.Image")));
			this->btnMinimizar->ImageActive = nullptr;
			this->btnMinimizar->Location = System::Drawing::Point(566, 3);
			this->btnMinimizar->Name = L"btnMinimizar";
			this->btnMinimizar->Size = System::Drawing::Size(31, 28);
			this->btnMinimizar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnMinimizar->TabIndex = 22;
			this->btnMinimizar->TabStop = false;
			this->btnMinimizar->Zoom = 10;
			this->btnMinimizar->Click += gcnew System::EventHandler(this, &About::btnMinimizar_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bunifuTransition1->SetDecoration(this->button2, BunifuAnimatorNS::DecorationType::None);
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(74, 301);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Excel";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &About::button2_Click);
			// 
			// btnPosOrden
			// 
			this->btnPosOrden->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bunifuTransition1->SetDecoration(this->btnPosOrden, BunifuAnimatorNS::DecorationType::None);
			this->btnPosOrden->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnPosOrden->Location = System::Drawing::Point(470, 138);
			this->btnPosOrden->Name = L"btnPosOrden";
			this->btnPosOrden->Size = System::Drawing::Size(75, 23);
			this->btnPosOrden->TabIndex = 18;
			this->btnPosOrden->Text = L"PostOrden";
			this->btnPosOrden->UseVisualStyleBackColor = false;
			this->btnPosOrden->Click += gcnew System::EventHandler(this, &About::btnPosOrden_Click);
			// 
			// btnInOrden
			// 
			this->btnInOrden->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bunifuTransition1->SetDecoration(this->btnInOrden, BunifuAnimatorNS::DecorationType::None);
			this->btnInOrden->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnInOrden->Location = System::Drawing::Point(470, 109);
			this->btnInOrden->Name = L"btnInOrden";
			this->btnInOrden->Size = System::Drawing::Size(75, 23);
			this->btnInOrden->TabIndex = 17;
			this->btnInOrden->Text = L"InOrden";
			this->btnInOrden->UseVisualStyleBackColor = false;
			this->btnInOrden->Click += gcnew System::EventHandler(this, &About::btnInOrden_Click);
			// 
			// btnPreOrden
			// 
			this->btnPreOrden->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bunifuTransition1->SetDecoration(this->btnPreOrden, BunifuAnimatorNS::DecorationType::None);
			this->btnPreOrden->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnPreOrden->Location = System::Drawing::Point(470, 80);
			this->btnPreOrden->Name = L"btnPreOrden";
			this->btnPreOrden->Size = System::Drawing::Size(75, 23);
			this->btnPreOrden->TabIndex = 16;
			this->btnPreOrden->Text = L"preOrden";
			this->btnPreOrden->UseVisualStyleBackColor = false;
			this->btnPreOrden->Click += gcnew System::EventHandler(this, &About::btnPreOrden_Click);
			// 
			// richTextBox3
			// 
			this->bunifuTransition1->SetDecoration(this->richTextBox3, BunifuAnimatorNS::DecorationType::None);
			this->richTextBox3->Location = System::Drawing::Point(235, 109);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(244, 21);
			this->richTextBox3->TabIndex = 15;
			this->richTextBox3->Text = L"";
			// 
			// btnImprimir
			// 
			this->btnImprimir->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bunifuTransition1->SetDecoration(this->btnImprimir, BunifuAnimatorNS::DecorationType::None);
			this->btnImprimir->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnImprimir->Location = System::Drawing::Point(358, 80);
			this->btnImprimir->Name = L"btnImprimir";
			this->btnImprimir->Size = System::Drawing::Size(75, 23);
			this->btnImprimir->TabIndex = 14;
			this->btnImprimir->Text = L"Imprimir";
			this->btnImprimir->UseVisualStyleBackColor = false;
			this->btnImprimir->Click += gcnew System::EventHandler(this, &About::btnImprimir_Click);
			// 
			// btnGuardar
			// 
			this->btnGuardar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bunifuTransition1->SetDecoration(this->btnGuardar, BunifuAnimatorNS::DecorationType::None);
			this->btnGuardar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnGuardar->Location = System::Drawing::Point(235, 75);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(75, 23);
			this->btnGuardar->TabIndex = 13;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = false;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &About::btnGuardar_Click);
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->BackColor = System::Drawing::Color::Transparent;
			this->bunifuTransition1->SetDecoration(this->btnLimpiar, BunifuAnimatorNS::DecorationType::None);
			this->btnLimpiar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLimpiar.Image")));
			this->btnLimpiar->ImageActive = nullptr;
			this->btnLimpiar->Location = System::Drawing::Point(198, 75);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(31, 28);
			this->btnLimpiar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnLimpiar->TabIndex = 12;
			this->btnLimpiar->TabStop = false;
			this->btnLimpiar->Zoom = 10;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &About::btnLimpiar_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bunifuTransition1->SetDecoration(this->button1, BunifuAnimatorNS::DecorationType::None);
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(45, 131);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Graficar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &About::button1_Click);
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::SeaGreen;
			this->bunifuTransition1->SetDecoration(this->bunifuImageButton1, BunifuAnimatorNS::DecorationType::None);
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(45, 54);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(82, 71);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 5;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &About::bunifuImageButton1_Click);
			// 
			// pictureBox2
			// 
			this->bunifuTransition1->SetDecoration(this->pictureBox2, BunifuAnimatorNS::DecorationType::None);
			this->pictureBox2->Location = System::Drawing::Point(0, 348);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(614, 251);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// guna2GradientButton3
			// 
			this->guna2GradientButton3->CheckedState->Parent = this->guna2GradientButton3;
			this->guna2GradientButton3->CustomImages->Parent = this->guna2GradientButton3;
			this->bunifuTransition1->SetDecoration(this->guna2GradientButton3, BunifuAnimatorNS::DecorationType::None);
			this->guna2GradientButton3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2GradientButton3->ForeColor = System::Drawing::Color::White;
			this->guna2GradientButton3->HoverState->Parent = this->guna2GradientButton3;
			this->guna2GradientButton3->Location = System::Drawing::Point(358, 167);
			this->guna2GradientButton3->Name = L"guna2GradientButton3";
			this->guna2GradientButton3->ShadowDecoration->Parent = this->guna2GradientButton3;
			this->guna2GradientButton3->Size = System::Drawing::Size(180, 45);
			this->guna2GradientButton3->TabIndex = 3;
			this->guna2GradientButton3->Text = L"Binay Tree";
			// 
			// guna2GradientButton2
			// 
			this->guna2GradientButton2->CheckedState->Parent = this->guna2GradientButton2;
			this->guna2GradientButton2->CustomImages->Parent = this->guna2GradientButton2;
			this->bunifuTransition1->SetDecoration(this->guna2GradientButton2, BunifuAnimatorNS::DecorationType::None);
			this->guna2GradientButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2GradientButton2->ForeColor = System::Drawing::Color::White;
			this->guna2GradientButton2->HoverState->Parent = this->guna2GradientButton2;
			this->guna2GradientButton2->Location = System::Drawing::Point(235, 297);
			this->guna2GradientButton2->Name = L"guna2GradientButton2";
			this->guna2GradientButton2->ShadowDecoration->Parent = this->guna2GradientButton2;
			this->guna2GradientButton2->Size = System::Drawing::Size(180, 45);
			this->guna2GradientButton2->TabIndex = 2;
			this->guna2GradientButton2->Text = L"Linked List";
			// 
			// pictureBox1
			// 
			this->bunifuTransition1->SetDecoration(this->pictureBox1, BunifuAnimatorNS::DecorationType::None);
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(163, 54);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(382, 288);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// guna2GradientButton1
			// 
			this->guna2GradientButton1->CheckedState->Parent = this->guna2GradientButton1;
			this->guna2GradientButton1->CustomImages->Parent = this->guna2GradientButton1;
			this->bunifuTransition1->SetDecoration(this->guna2GradientButton1, BunifuAnimatorNS::DecorationType::None);
			this->guna2GradientButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2GradientButton1->ForeColor = System::Drawing::Color::White;
			this->guna2GradientButton1->HoverState->Parent = this->guna2GradientButton1;
			this->guna2GradientButton1->Location = System::Drawing::Point(3, 175);
			this->guna2GradientButton1->Name = L"guna2GradientButton1";
			this->guna2GradientButton1->ShadowDecoration->Parent = this->guna2GradientButton1;
			this->guna2GradientButton1->Size = System::Drawing::Size(180, 45);
			this->guna2GradientButton1->TabIndex = 0;
			this->guna2GradientButton1->Text = L"Project With Data Structures";
			// 
			// bunifuElipse1
			// 
			this->bunifuElipse1->ElipseRadius = 5;
			this->bunifuElipse1->TargetControl = this->bunifuGradientPanel1;
			// 
			// labelIntegrante1
			// 
			this->labelIntegrante1->AutoSize = true;
			this->bunifuTransition1->SetDecoration(this->labelIntegrante1, BunifuAnimatorNS::DecorationType::None);
			this->labelIntegrante1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->labelIntegrante1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelIntegrante1->Location = System::Drawing::Point(26, 462);
			this->labelIntegrante1->Name = L"labelIntegrante1";
			this->labelIntegrante1->Size = System::Drawing::Size(148, 21);
			this->labelIntegrante1->TabIndex = 24;
			this->labelIntegrante1->Text = L"Jonatan Valderrama";
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuTransition1->SetDecoration(this->bunifuCustomLabel1, BunifuAnimatorNS::DecorationType::None);
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->bunifuCustomLabel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->bunifuCustomLabel1->Location = System::Drawing::Point(26, 540);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(108, 21);
			this->bunifuCustomLabel1->TabIndex = 25;
			this->bunifuCustomLabel1->Text = L"Jorge Valentin";
			// 
			// bunifuCustomLabel2
			// 
			this->bunifuCustomLabel2->AutoSize = true;
			this->bunifuTransition1->SetDecoration(this->bunifuCustomLabel2, BunifuAnimatorNS::DecorationType::None);
			this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->bunifuCustomLabel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->bunifuCustomLabel2->Location = System::Drawing::Point(162, 540);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(96, 21);
			this->bunifuCustomLabel2->TabIndex = 26;
			this->bunifuCustomLabel2->Text = L"Jorge Rupay";
			// 
			// LblCurso
			// 
			this->LblCurso->AutoSize = true;
			this->bunifuTransition1->SetDecoration(this->LblCurso, BunifuAnimatorNS::DecorationType::None);
			this->LblCurso->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->LblCurso->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->LblCurso->Location = System::Drawing::Point(466, 462);
			this->LblCurso->Name = L"LblCurso";
			this->LblCurso->Size = System::Drawing::Size(147, 21);
			this->LblCurso->TabIndex = 27;
			this->LblCurso->Text = L"Estructura De Datos";
			// 
			// bunifuCustomLabel3
			// 
			this->bunifuCustomLabel3->AutoSize = true;
			this->bunifuTransition1->SetDecoration(this->bunifuCustomLabel3, BunifuAnimatorNS::DecorationType::None);
			this->bunifuCustomLabel3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->bunifuCustomLabel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->bunifuCustomLabel3->Location = System::Drawing::Point(302, 462);
			this->bunifuCustomLabel3->Name = L"bunifuCustomLabel3";
			this->bunifuCustomLabel3->Size = System::Drawing::Size(146, 21);
			this->bunifuCustomLabel3->TabIndex = 28;
			this->bunifuCustomLabel3->Text = L"Gustavo Arredondo";
			// 
			// guna2HtmlLabel1
			// 
			this->guna2HtmlLabel1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuTransition1->SetDecoration(this->guna2HtmlLabel1, BunifuAnimatorNS::DecorationType::None);
			this->guna2HtmlLabel1->Location = System::Drawing::Point(14, 397);
			this->guna2HtmlLabel1->Name = L"guna2HtmlLabel1";
			this->guna2HtmlLabel1->Size = System::Drawing::Size(244, 40);
			this->guna2HtmlLabel1->TabIndex = 29;
			this->guna2HtmlLabel1->Text = L"Desarrollado por";
			// 
			// guna2HtmlLabel2
			// 
			this->guna2HtmlLabel2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuTransition1->SetDecoration(this->guna2HtmlLabel2, BunifuAnimatorNS::DecorationType::None);
			this->guna2HtmlLabel2->Location = System::Drawing::Point(306, 397);
			this->guna2HtmlLabel2->Name = L"guna2HtmlLabel2";
			this->guna2HtmlLabel2->Size = System::Drawing::Size(127, 40);
			this->guna2HtmlLabel2->TabIndex = 30;
			this->guna2HtmlLabel2->Text = L"Profesor";
			// 
			// guna2HtmlLabel3
			// 
			this->guna2HtmlLabel3->BackColor = System::Drawing::Color::Transparent;
			this->bunifuTransition1->SetDecoration(this->guna2HtmlLabel3, BunifuAnimatorNS::DecorationType::None);
			this->guna2HtmlLabel3->Location = System::Drawing::Point(470, 397);
			this->guna2HtmlLabel3->Name = L"guna2HtmlLabel3";
			this->guna2HtmlLabel3->Size = System::Drawing::Size(91, 40);
			this->guna2HtmlLabel3->TabIndex = 31;
			this->guna2HtmlLabel3->Text = L"Curso";
			// 
			// guna2HtmlLabel4
			// 
			this->guna2HtmlLabel4->BackColor = System::Drawing::Color::Transparent;
			this->bunifuTransition1->SetDecoration(this->guna2HtmlLabel4, BunifuAnimatorNS::DecorationType::None);
			this->guna2HtmlLabel4->Location = System::Drawing::Point(9, 497);
			this->guna2HtmlLabel4->Name = L"guna2HtmlLabel4";
			this->guna2HtmlLabel4->Size = System::Drawing::Size(306, 40);
			this->guna2HtmlLabel4->TabIndex = 32;
			this->guna2HtmlLabel4->Text = L"En Colaboración con";
			// 
			// bunifuTransition1
			// 
			this->bunifuTransition1->AnimationType = BunifuAnimatorNS::AnimationType::Particles;
			this->bunifuTransition1->Cursor = nullptr;
			animation1->AnimateOnlyDifferences = true;
			animation1->BlindCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.BlindCoeff")));
			animation1->LeafCoeff = 0;
			animation1->MaxTime = 1;
			animation1->MinTime = 0;
			animation1->MosaicCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.MosaicCoeff")));
			animation1->MosaicShift = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.MosaicShift")));
			animation1->MosaicSize = 1;
			animation1->Padding = System::Windows::Forms::Padding(100, 50, 100, 150);
			animation1->RotateCoeff = 0;
			animation1->RotateLimit = 0;
			animation1->ScaleCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.ScaleCoeff")));
			animation1->SlideCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.SlideCoeff")));
			animation1->TimeCoeff = 2;
			animation1->TransparencyCoeff = 0;
			this->bunifuTransition1->DefaultAnimation = animation1;
			// 
			// About
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(639, 610);
			this->Controls->Add(this->bunifuGradientPanel1);
			this->bunifuTransition1->SetDecoration(this, BunifuAnimatorNS::DecorationType::None);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"About";
			this->Text = L"About";
			this->Load += gcnew System::EventHandler(this, &About::About_Load);
			this->bunifuGradientPanel1->ResumeLayout(false);
			this->bunifuGradientPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnClose))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMinimizar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnLimpiar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		public: void DibujarFlechas(Graphics^& Lienzo, Point^ Inicial, Point^ Final, bool Flecha)
		{
			Pen^ Lapiz = gcnew Pen(Color::Tomato , 3);
			Lienzo->DrawLine(Lapiz, Inicial->X, Inicial->Y, Final->X, Final->Y);
			if (Flecha)
			{
				Lienzo->DrawLine(Lapiz, Final->X, Final->Y, Final->X - 5, Final->Y - 5);
				Lienzo->DrawLine(Lapiz, Final->X, Final->Y, Final->X - 5, Final->Y + 5);
			}
			else
			{
				Lienzo->DrawLine(Lapiz, Inicial->X, Inicial->Y, Inicial->X + 5, Inicial->Y - 5);
				Lienzo->DrawLine(Lapiz, Inicial->X, Inicial->Y, Inicial->X + 5, Inicial->Y + 5);
			}
			delete Lapiz;
		}
			  //true final
			  //false inicio
			  // Ap tam de la linea 
	public: void DibujarFlechaFinal(Graphics^& Lienzo, Point^ Inicial, Point^ Final, bool Flecha, int Ap)
	{
		Pen^ Lapiz = gcnew Pen(Color::Black, 3);
		Lienzo->DrawLine(Lapiz, Inicial->X, Inicial->Y, Inicial->X, Inicial->Y + Ap);
		Lienzo->DrawLine(Lapiz, Inicial->X, Inicial->Y + Ap, Final->X, Final->Y + Ap);
		Lienzo->DrawLine(Lapiz, Final->X, Final->Y - Ap, Final->X, Final->Y + Ap);
		if (Flecha)
		{
			Lienzo->DrawLine(Lapiz, Final->X, Final->Y - Ap, Final->X - 5, Final->Y + 5);
			Lienzo->DrawLine(Lapiz, Final->X, Final->Y - Ap, Final->X + 5, Final->Y + 5);
		}
		else
		{
			Lienzo->DrawLine(Lapiz, Inicial->X, Inicial->Y - Ap, Inicial->X + 5, Inicial->Y + 5);
			Lienzo->DrawLine(Lapiz, Inicial->X, Inicial->Y - Ap, Inicial->X - 5, Inicial->Y + 5);
		}
		delete Lapiz;
	}

public: void GraficarNodo(Graphics^& Lienzo, int Cont, int Insertar)
{
	Pen^ Lapiz = gcnew Pen(Color::Black, 3);
	Lienzo->DrawRectangle(Lapiz, PosicionesPantalla[Cont]->X, PosicionesPantalla[Cont]->Y, 50, 30);
	Lienzo->DrawLine(Lapiz, PosicionesPantalla[Cont]->X + 5, PosicionesPantalla[Cont]->Y, PosicionesPantalla[Cont]->X + 5, PosicionesPantalla[Cont]->Y + 30);
	Lienzo->DrawLine(Lapiz, PosicionesPantalla[Cont]->X + 45, PosicionesPantalla[Cont]->Y, PosicionesPantalla[Cont]->X + 45, PosicionesPantalla[Cont]->Y + 30);
	Label^ Dato = gcnew Label();
	LabelsLista[Cont] = Dato;
	this->Controls->Add(Dato);
	Dato->BringToFront();
	//Dato->BackColor = Color::Transparent;
	Dato->BackColor = Color::Aquamarine;
	Dato->ForeColor = Color::DarkRed;
	Dato->Name = Convert::ToString(Insertar);
	Dato->Text = Convert::ToString(Insertar);
	Dato->Size = System::Drawing::Size(20, 20);
	//Dato->Location = System::Drawing::Point(PosicionesPantalla[Cont]->X + 20, PosicionesPantalla[Cont]->Y + 35);
	Dato->Location = System::Drawing::Point(PosicionesPantalla[Cont]->X + 35, PosicionesPantalla[Cont]->Y + 390);
	delete Lapiz;
}

public: void Refresco()
{
	cont = 0;
	contArrD = 0;
	Apertura = 120;
	pictureBox2->Refresh();
	richTextBox3->Refresh();
	richTextBox3->Clear();
	VaciarArreglos();
}

public: void VaciarArreglos()
{
	for (int i = 0; i < 20; i++)
	{
		this->Controls->Remove(Labels[i]);
		this->Controls->Remove(LabelsLista[i]);
		this->Controls->Remove(LabelsListaBasurero[i]);
	}
}
	public: void LabelNULL(String^ texto, int Cont)
	{
		Label^ Dato = gcnew Label();
		this->Controls->Add(Dato);
		Dato->BringToFront();
		//Dato->BackColor = Color::Transparent;
		Dato->BackColor = Color::DarkViolet;
		Dato->Name = texto;
		Dato->Text = texto;
		Dato->Size = System::Drawing::Size(40, 15);
		Dato->TextAlign = ContentAlignment::MiddleLeft;
		//Dato->Location = System::Drawing::Point(PosicionesPantalla[Cont]->X + 5, PosicionesPantalla[Cont]->Y + 35);
		Dato->Location = System::Drawing::Point(PosicionesPantalla[Cont]->X + 20, PosicionesPantalla[Cont]->Y + 390);
		LabelsLista[Cont] = Dato;
		LabelsLista[Cont] = Dato;
	}



	public: void DibujarListaDoble(Graphics^& Lienzo)
	{
		ListaDoble lista;

		lista.insertarInicio(12, "luis", "hods", 2016);
		lista.insertarInicio(13, "sebas", "yatra", 2018);
		lista.insertarInicio(16, "fonseca", "arroyo", 2019);
		//lista.addFromExcelData("examples.csv");
		lista.Mostrar();
		int cont = 1;
		//ListaDoble Aux;
		//ListaDoble Aux;
		Tlista Aux;
		Point^ PosInicial = gcnew Point(0, 0);
	    Point^ PosInicial2 = gcnew Point(PosicionesPantalla[0]->X + 50, PosicionesPantalla[0]->Y + 10);
		Point^ PosFinal = gcnew Point(0, 0);
		Point^ PosFinal2 = gcnew Point(PosicionesPantalla[1]->X, PosicionesPantalla[1]->Y + 10);
		Aux = lista.returLis();
		LabelNULL("NULL", 0);
		DibujarFlechas(Lienzo, PosInicial2, PosFinal2, false);
		while (Aux != NULL && cont < 8)
		{
			PosInicial->X = PosicionesPantalla[cont]->X + 50;
			PosInicial->Y = PosicionesPantalla[cont]->Y + 10;
			PosFinal->X = PosicionesPantalla[cont + 1]->X;
			PosFinal->Y = PosicionesPantalla[cont + 1]->Y + 10;
			PosInicial2->X = PosicionesPantalla[cont]->X + 50;
			PosInicial2->Y = PosicionesPantalla[cont]->Y + 20;
			PosFinal2->X = PosicionesPantalla[cont + 1]->X;
			PosFinal2->Y = PosicionesPantalla[cont + 1]->Y + 20;
			if (Aux->getSiguiente() == NULL)
			{
				LabelNULL("NULL", cont + 1);
				DibujarFlechas(Lienzo, PosInicial, PosFinal, true);
			}
			else
			{
				DibujarFlechas(Lienzo, PosInicial, PosFinal, true);
				DibujarFlechas(Lienzo, PosInicial2, PosFinal2, false);
			}
			GraficarNodo(Lienzo, cont, Aux->getId());
			Aux = Aux->getSiguiente();
			cont++;
		}
	}

public:	void DibujarHojas(Graphics^& Lienzo, int Valor, int X, int Y)
{
	SolidBrush^ Pincel = gcnew SolidBrush(Color::LightBlue);
	Pen^ Lapiz = gcnew Pen(Color::Black, 3);
	Label^ Numero = gcnew Label();
	Lienzo->FillEllipse(Pincel, X, Y, 50, 50);
	this->Controls->Add(Numero);
	Numero->BringToFront();
	Numero->BackColor = Color::LightBlue;
	Numero->Name = Convert::ToString(Valor);
	Numero->Text = Convert::ToString(Valor);
	Numero->Size = System::Drawing::Size(20, 20);
	Numero->Location = System::Drawing::Point(X + 20, Y + 45);
	this->Posiciones[cont] = gcnew Point(X, Y);
	this->Labels[cont] = Numero;
	delete Pincel;
}
public:	void insertarNodoNuevo(Graphics^& Lienzo,Tree rarbol, int c, int nodo,int id,std::string artist,std::string autor, int anio)
//public:	  void BinaryTree::insertanodonuevo(Graphics^& Lienzo, Tree arbol, int c, int nodo, int nuevo);
{
	Pen^ Lapiz = gcnew Pen(Color::Black, 2);
	int localizar = 0, posX = 0, posY = 0;
	//Tree rarbol = arbol.returnRaiz();
	Tree Arboleft = rarbol->getLeft();
	Tree Arbolright = rarbol->getRight();
	int idGet = rarbol->getId();
	if (rarbol == NULL)
	{                          //CREACION DE UN NUEVO NODO
		rarbol = new(NodeArbol);
		if (rarbol != NULL)
		{
			//ASIGNACION DE VALORES NUEVOS EN EL NODO NUEVO
			 //rarbol->getLeft()= nuevo;
			//arbol->left = NULL;
			rarbol->setDato(id, artist, autor, anio);
			rarbol->setLeft(NULL);
			rarbol->setRight(NULL);
			if (c == 0)
			{
				DibujarHojas(Lienzo, id, 370, 30);
			}
			if (c == 1)
			{
				for (int i = 0; i < cont; i++)
				{
					if (ValoresCopia[i] == nodo)
					{
						localizar = i;
						break;
					}
				}
				posX = Posiciones[localizar]->X + Apertura;
				posY = Posiciones[localizar]->Y + 60;
				Lienzo->DrawLine(Lapiz, Posiciones[localizar]->X + 25, Posiciones[localizar]->Y + 25, posX + 25, posY + 25);
				DibujarHojas(Lienzo, id, posX, posY);
			}
			if (c == 2)
			{
				for (int i = 0; i < cont; i++)
				{
					if (ValoresCopia[i] == nodo)
					{
						localizar = i;
						break;
					}
				}
				posX = Posiciones[localizar]->X - Apertura;
				posY = Posiciones[localizar]->Y + 60;
				Lienzo->DrawLine(Lapiz, Posiciones[localizar]->X + 25, Posiciones[localizar]->Y + 25, posX + 25, posY + 25);
				DibujarHojas(Lienzo, id, posX, posY);
			}
		}
	}
	else
		
		if (id < rarbol->getId())
		
			//checa si el elemento nuevo es mayor que el elemento padre
		//	insertanodonuevo(Lienzo, &((*rarbol)->izqnodo), 2, (*rarbol)->info, nuevo);  //coloca el elemento a la izquierda del padre o raiz

			insertarNodoNuevo(Lienzo,Arboleft, 2,idGet, id, artist, autor, anio);
		
		else
			if (id> rarbol->getId())  //checa si el elemento nuevo es menor que el elemento padre
				insertarNodoNuevo(Lienzo, Arbolright, 2, idGet,  id, artist, autor, anio);
//		insertanodonuevo(Lienzo, &((*rarbol)->dernodo), 1, (*rarbol)->info, nuevo);  //coloca el elemento a la derecha del padre o raiz
	
}



	private: System::Void bunifuImageButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ Lienzo = pictureBox2->CreateGraphics();
		DibujarListaDoble(Lienzo);
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ Lienzo = pictureBox2->CreateGraphics();
	BinaryTree tree;

	tree.insertaNodo(18, "luis", "hods", 2019);
	tree.insertaNodo(13, "sebastian", "yatar", 2018);
	tree.insertaNodo(16, "fonseca", "arroyo", 2017);
	String^ Mensaje = "";
	Tree nuevoArbol;
	//nuevoArbol = tree.returnRaiz();

	if (ValoresCopia != NULL)
	{
	for (int i = 0; i < this->cantidadDeDatos && i < 10; i++)
			
		{
			std::cout << "grafico del arbol" << "\n";
			//insertanodonuevo(Lienzo, &NuevoArbol, 0, ValoresCopia[i], ValoresCopia[i]);
			//insertarNodoNuevo(Lienzo, Arbolright, 2, idGet, id, artist, autor, anio);
			insertarNodoNuevo(Lienzo, nuevoArbol, 0, ValoresCopia[i], ValoresCopia[i], "luis", "hods", 2016);
			cont++;
			Apertura -= 6;
		}
	}
	//DibujarListaDoble(Lienzo);
}
private: System::Void About_Load(System::Object^ sender, System::EventArgs^ e) {
	int Aux = 10;
	int AuxVertical = 30;
	for (int i = 0; i < 20; i++)
	{
		Posiciones[i] = gcnew Point(0, 0);
		PosicionesPantalla[i] = gcnew Point(Aux, 200);
		PosicionesPantallaPilas[i] = gcnew Point(200, AuxVertical);
		PosicionesPantallaBasurero[i] = gcnew Point(400, AuxVertical);
		Aux += 90;
		AuxVertical += 50;
	}
	BanderaPos = NULL;

	BunifuAnimatorNS::Animation^ anim;

	bunifuTransition1->Show(pictureBox2, true, anim);
	//label1->Visible = false;
	//groupBox1->Enabled = false;
	//ColaNueva.delante = NULL;
	//ColaNueva.atras = NULL;
	//ColaBasura.delante = NULL;
	//ColaBasura.atras = NULL;
}
private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {

	Refresco();
}
private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {

	Point^ Aux = gcnew Point(this->Location.X, this->Location.Y);
	this->Location = pictureBox1->Location;
	if (BanderaPos != 16 && BanderaPos != 17 && BanderaPos != 18 && BanderaPos != 19)
	//labelTituloImagenes->Visible = true;
	CapturarPantalla();
	//labelTituloImagenes->Visible = false;
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	saveFileDialog1->Filter = "JPeg Image|*.jpg|Bitmap Image|*.bmp|Gif Image|*.gif";
	saveFileDialog1->Title = "Guardar Como";
	saveFileDialog1->ShowDialog();
	if (saveFileDialog1->FileName != "")
	{
		switch (saveFileDialog1->FilterIndex)
		{
		case 1:
			memoryImage->Save(saveFileDialog1->FileName, ImageFormat::Jpeg);
			break;
		case 2:
			memoryImage->Save(saveFileDialog1->FileName, ImageFormat::Bmp);
			break;
		case 3:
			memoryImage->Save(saveFileDialog1->FileName, ImageFormat::Png);
			break;
		}
	}
	this->Location = System::Drawing::Point(Aux->X, Aux->Y);

}
	   public: void CapturarPantalla()
	   {
		   Graphics^ MyGraphics = this->CreateGraphics();
		   System::Drawing::Size tam = this->pictureBox2->Size;
		   memoryImage = gcnew Bitmap(tam.Width + 60, tam.Height + 5, MyGraphics);
		  // memoryImage = gcnew Bitmap(tam.Width + 200, tam.Height + 100, MyGraphics);
		   Graphics^ MemoryGraphics = Graphics::FromImage(memoryImage);
		   MemoryGraphics->CopyFromScreen(this->pictureBox1->Location.X, this->pictureBox1->Location.Y + 70, 0, 0, tam, CopyPixelOperation::SourceCopy);
	   }
			 //imprimir archivo
	public: void PrtDoc_PrintPage(System::Object^ sender, PrintPageEventArgs^ e)
	{
		e->Graphics->DrawImage(memoryImage, 0, 0);
	}


private: System::Void btnImprimir_Click(System::Object^ sender, System::EventArgs^ e) {

	Point^ Aux = gcnew Point(this->Location.X, this->Location.Y);
	this->Location = pictureBox1->Location;
	if (BanderaPos != 16 && BanderaPos != 17 && BanderaPos != 18 && BanderaPos != 19) 
	//labelTituloImagenes->Visible = true;
	CapturarPantalla();
	//labelTituloImagenes->Visible = false;
	PrtDoc->PrintPage += gcnew PrintPageEventHandler(this, &About::PrtDoc_PrintPage);
	PrintDialog^ PD = gcnew PrintDialog();
	PageSetupDialog^ PS = gcnew PageSetupDialog();
	PS->AllowMargins;
	PS->AllowOrientation;
	PS->Document = PrtDoc;
	if (PS->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if (PD->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			PrtDoc->DefaultPageSettings = PS->PageSettings;
			PD->Document = PS->Document;
			PD->Document->Print();
		}
	}
	this->Location = System::Drawing::Point(Aux->X, Aux->Y);
}
private: System::Void btnPreOrden_Click(System::Object^ sender, System::EventArgs^ e) {

	BinaryTree tree;

	tree.insertaNodo(18, "luis", "hods", 2019);
	tree.insertaNodo(13, "sebastian", "yatar", 2018);
	tree.insertaNodo(16, "fonseca", "arroyo", 2017);
	String^ Mensaje = "";
	Tree nuevoArbol;
	nuevoArbol = tree.returnRaiz();

	if (nuevoArbol != NULL)
	{
		//label1->Text = "Arboles Lectura Preorden";
		//label1->Enabled = true;
		tree.preOrder(nuevoArbol, Mensaje);
		richTextBox3->Text = Mensaje;
		richTextBox3->Enabled = true;
		richTextBox3->Visible = true;
	}
}
private: System::Void btnInOrden_Click(System::Object^ sender, System::EventArgs^ e) {
	BinaryTree tree;

	tree.insertaNodo(18, "luis", "hods", 2019);
	tree.insertaNodo(13, "sebastian", "yatar", 2018);
	tree.insertaNodo(16, "fonseca", "arroyo", 2017);
	String^ Mensaje = "";
	Tree nuevoArbol;
	nuevoArbol = tree.returnRaiz();

	if (nuevoArbol != NULL)
	{
		//label1->Text = "Arboles Lectura Preorden";
		//label1->Enabled = true;
		tree.inOrder(nuevoArbol, Mensaje);
		richTextBox3->Text = Mensaje;
		richTextBox3->Enabled = true;
		richTextBox3->Visible = true;
	}

}
private: System::Void btnPosOrden_Click(System::Object^ sender, System::EventArgs^ e) {


	BinaryTree tree;

	tree.insertaNodo(18, "luis", "hods", 2019);
	tree.insertaNodo(13, "sebastian", "yatar", 2018);
	tree.insertaNodo(16, "fonseca", "arroyo", 2017);
	String^ Mensaje = "";
	Tree nuevoArbol;
	nuevoArbol = tree.returnRaiz();

	if (nuevoArbol != NULL)
	{
		//label1->Text = "Arboles Lectura Preorden";
		//label1->Enabled = true;
		tree.postOrder(nuevoArbol, Mensaje);
		richTextBox3->Text = Mensaje;
		richTextBox3->Enabled = true;
		richTextBox3->Visible = true;
	}
}
	   static void OpenMicrosoftExcel(String^ text)
	   {

		  // String^ text = "";
		  // ProcessStartInfo startInfo = new ProcessStartInfo();
		   System::Diagnostics::ProcessStartInfo^ starInfo=gcnew System::Diagnostics::ProcessStartInfo();
		   starInfo->FileName = "EXCEL.EXE";
		   starInfo->Arguments = text;
		   System::Diagnostics::Process::Start(starInfo);
	   }
	  
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
//	System::Diagnostics::ProcessStartInfo;
	OpenMicrosoftExcel("arbolesIn.csv");
}
private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	otherform->Show();


}
private: System::Void btnMinimizar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;

}

};
}
