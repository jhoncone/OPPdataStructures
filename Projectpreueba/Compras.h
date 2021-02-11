#pragma once
#include "ListaDoble.h"
#include "Buscar.h"
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

	/// <summary>
	/// Resumen de Compras
	/// </summary>
	public ref class Compras : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::Form^ otherform;
	public:
		Compras(System::Windows::Forms::Form^ frm1)
		{
			otherform = frm1;
			InitializeComponent();

		}

/*
	public:
		Compras(void)
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
		~Compras()
		{
			if (components)
			{
				delete components;
			}
		}
	public: int BanderaPos;
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


	private: Buscar^ ventana = gcnew Buscar();
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: Bunifu::Framework::UI::BunifuGradientPanel^ bunifuGradientPanel1;
	private: Guna::UI2::WinForms::Guna2ShadowPanel^ guna2ShadowPanel1;
	private: Guna::UI2::WinForms::Guna2GradientButton^ guna2GradientButton1;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ lblDiscos;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^ table;




	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel1;
	private: System::Windows::Forms::TextBox^ txtNum;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnComprar;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton1;

	private: Bunifu::Framework::UI::BunifuFlatButton^ btnGraficar;

	private: System::Windows::Forms::RichTextBox^ richTextBox3;


	private: Bunifu::Framework::UI::BunifuImageButton^ btnLimpiar;

	private: Bunifu::Framework::UI::BunifuImageButton^ btnMinimizar;
	private: Bunifu::Framework::UI::BunifuImageButton^ btnClose;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuElipse1;
	private: Guna::UI2::WinForms::Guna2HtmlLabel^ guna2HtmlLabel1;
	private: Bunifu::Framework::UI::BunifuGradientPanel^ bunifuGradientPanel2;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^ tables;





	private: BunifuAnimatorNS::BunifuTransition^ transition;
	private: Guna::UI2::WinForms::Guna2ColorTransition^ guna2ColorTransition1;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnPosOrder;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnInOrder;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnPreOrder;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnImprimir;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnPictur;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnExcel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Compras::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			BunifuAnimatorNS::Animation^ animation1 = (gcnew BunifuAnimatorNS::Animation());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuGradientPanel2 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->btnExcel = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnImprimir = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnPictur = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->tables = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->guna2HtmlLabel1 = (gcnew Guna::UI2::WinForms::Guna2HtmlLabel());
			this->bunifuGradientPanel1 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->btnGraficar = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnComprar = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuCustomLabel1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->txtNum = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->guna2ShadowPanel1 = (gcnew Guna::UI2::WinForms::Guna2ShadowPanel());
			this->btnPosOrder = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnInOrder = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnPreOrder = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnMinimizar = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->btnClose = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->btnLimpiar = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->lblDiscos = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->table = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->guna2GradientButton1 = (gcnew Guna::UI2::WinForms::Guna2GradientButton());
			this->bunifuElipse1 = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->guna2ColorTransition1 = (gcnew Guna::UI2::WinForms::Guna2ColorTransition(this->components));
			this->transition = (gcnew BunifuAnimatorNS::BunifuTransition(this->components));
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			this->bunifuGradientPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tables))->BeginInit();
			this->bunifuGradientPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->guna2ShadowPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMinimizar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnClose))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnLimpiar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->panel1->Controls->Add(this->bunifuGradientPanel2);
			this->panel1->Controls->Add(this->bunifuGradientPanel1);
			this->transition->SetDecoration(this->panel1, BunifuAnimatorNS::DecorationType::None);
			this->panel1->Location = System::Drawing::Point(-1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(679, 605);
			this->panel1->TabIndex = 0;
			// 
			// bunifuGradientPanel2
			// 
			this->bunifuGradientPanel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel2.BackgroundImage")));
			this->bunifuGradientPanel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel2->Controls->Add(this->btnExcel);
			this->bunifuGradientPanel2->Controls->Add(this->btnImprimir);
			this->bunifuGradientPanel2->Controls->Add(this->btnPictur);
			this->bunifuGradientPanel2->Controls->Add(this->tables);
			this->bunifuGradientPanel2->Controls->Add(this->richTextBox3);
			this->bunifuGradientPanel2->Controls->Add(this->guna2HtmlLabel1);
			this->transition->SetDecoration(this->bunifuGradientPanel2, BunifuAnimatorNS::DecorationType::None);
			this->bunifuGradientPanel2->GradientBottomLeft = System::Drawing::Color::Black;
			this->bunifuGradientPanel2->GradientBottomRight = System::Drawing::Color::SeaGreen;
			this->bunifuGradientPanel2->GradientTopLeft = System::Drawing::Color::SeaGreen;
			this->bunifuGradientPanel2->GradientTopRight = System::Drawing::Color::Blue;
			this->bunifuGradientPanel2->Location = System::Drawing::Point(3, 377);
			this->bunifuGradientPanel2->Name = L"bunifuGradientPanel2";
			this->bunifuGradientPanel2->Quality = 10;
			this->bunifuGradientPanel2->Size = System::Drawing::Size(672, 209);
			this->bunifuGradientPanel2->TabIndex = 17;
			// 
			// btnExcel
			// 
			this->btnExcel->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnExcel->BackColor = System::Drawing::Color::Transparent;
			this->btnExcel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnExcel->BorderRadius = 5;
			this->btnExcel->ButtonText = L"Excel";
			this->btnExcel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->transition->SetDecoration(this->btnExcel, BunifuAnimatorNS::DecorationType::None);
			this->btnExcel->DisabledColor = System::Drawing::Color::Gray;
			this->btnExcel->Iconcolor = System::Drawing::Color::Transparent;
			this->btnExcel->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExcel.Iconimage")));
			this->btnExcel->Iconimage_right = nullptr;
			this->btnExcel->Iconimage_right_Selected = nullptr;
			this->btnExcel->Iconimage_Selected = nullptr;
			this->btnExcel->IconMarginLeft = 0;
			this->btnExcel->IconMarginRight = 0;
			this->btnExcel->IconRightVisible = true;
			this->btnExcel->IconRightZoom = 0;
			this->btnExcel->IconVisible = true;
			this->btnExcel->IconZoom = 90;
			this->btnExcel->IsTab = false;
			this->btnExcel->Location = System::Drawing::Point(237, 3);
			this->btnExcel->Name = L"btnExcel";
			this->btnExcel->Normalcolor = System::Drawing::Color::Transparent;
			this->btnExcel->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnExcel->OnHoverTextColor = System::Drawing::Color::White;
			this->btnExcel->selected = false;
			this->btnExcel->Size = System::Drawing::Size(71, 25);
			this->btnExcel->TabIndex = 18;
			this->btnExcel->Text = L"Excel";
			this->btnExcel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnExcel->Textcolor = System::Drawing::Color::White;
			this->btnExcel->TextFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->btnExcel->Click += gcnew System::EventHandler(this, &Compras::btnExcel_Click);
			// 
			// btnImprimir
			// 
			this->btnImprimir->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnImprimir->BackColor = System::Drawing::Color::Transparent;
			this->btnImprimir->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnImprimir->BorderRadius = 5;
			this->btnImprimir->ButtonText = L"Imprimir";
			this->btnImprimir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->transition->SetDecoration(this->btnImprimir, BunifuAnimatorNS::DecorationType::None);
			this->btnImprimir->DisabledColor = System::Drawing::Color::Gray;
			this->btnImprimir->Iconcolor = System::Drawing::Color::Transparent;
			this->btnImprimir->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnImprimir.Iconimage")));
			this->btnImprimir->Iconimage_right = nullptr;
			this->btnImprimir->Iconimage_right_Selected = nullptr;
			this->btnImprimir->Iconimage_Selected = nullptr;
			this->btnImprimir->IconMarginLeft = 0;
			this->btnImprimir->IconMarginRight = 0;
			this->btnImprimir->IconRightVisible = true;
			this->btnImprimir->IconRightZoom = 0;
			this->btnImprimir->IconVisible = true;
			this->btnImprimir->IconZoom = 90;
			this->btnImprimir->IsTab = false;
			this->btnImprimir->Location = System::Drawing::Point(314, 0);
			this->btnImprimir->Name = L"btnImprimir";
			this->btnImprimir->Normalcolor = System::Drawing::Color::Transparent;
			this->btnImprimir->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnImprimir->OnHoverTextColor = System::Drawing::Color::White;
			this->btnImprimir->selected = false;
			this->btnImprimir->Size = System::Drawing::Size(87, 25);
			this->btnImprimir->TabIndex = 16;
			this->btnImprimir->Text = L"Imprimir";
			this->btnImprimir->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnImprimir->Textcolor = System::Drawing::Color::White;
			this->btnImprimir->TextFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->btnImprimir->Click += gcnew System::EventHandler(this, &Compras::btnImprimir_Click);
			// 
			// btnPictur
			// 
			this->btnPictur->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnPictur->BackColor = System::Drawing::Color::Transparent;
			this->btnPictur->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPictur->BorderRadius = 5;
			this->btnPictur->ButtonText = L"Pictur";
			this->btnPictur->Cursor = System::Windows::Forms::Cursors::Hand;
			this->transition->SetDecoration(this->btnPictur, BunifuAnimatorNS::DecorationType::None);
			this->btnPictur->DisabledColor = System::Drawing::Color::Gray;
			this->btnPictur->Iconcolor = System::Drawing::Color::Transparent;
			this->btnPictur->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPictur.Iconimage")));
			this->btnPictur->Iconimage_right = nullptr;
			this->btnPictur->Iconimage_right_Selected = nullptr;
			this->btnPictur->Iconimage_Selected = nullptr;
			this->btnPictur->IconMarginLeft = 0;
			this->btnPictur->IconMarginRight = 0;
			this->btnPictur->IconRightVisible = true;
			this->btnPictur->IconRightZoom = 0;
			this->btnPictur->IconVisible = true;
			this->btnPictur->IconZoom = 90;
			this->btnPictur->IsTab = false;
			this->btnPictur->Location = System::Drawing::Point(153, 3);
			this->btnPictur->Name = L"btnPictur";
			this->btnPictur->Normalcolor = System::Drawing::Color::Transparent;
			this->btnPictur->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnPictur->OnHoverTextColor = System::Drawing::Color::White;
			this->btnPictur->selected = false;
			this->btnPictur->Size = System::Drawing::Size(87, 25);
			this->btnPictur->TabIndex = 17;
			this->btnPictur->Text = L"Pictur";
			this->btnPictur->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPictur->Textcolor = System::Drawing::Color::White;
			this->btnPictur->TextFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->btnPictur->Click += gcnew System::EventHandler(this, &Compras::btnPictur_Click);
			// 
			// tables
			// 
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->tables->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->tables->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->tables->BackgroundColor = System::Drawing::Color::White;
			this->tables->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tables->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->tables->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.75F));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tables->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->tables->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tables->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8
			});
			this->transition->SetDecoration(this->tables, BunifuAnimatorNS::DecorationType::None);
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->tables->DefaultCellStyle = dataGridViewCellStyle3;
			this->tables->DoubleBuffered = true;
			this->tables->EnableHeadersVisualStyles = false;
			this->tables->HeaderBgColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->tables->HeaderForeColor = System::Drawing::Color::White;
			this->tables->Location = System::Drawing::Point(49, 74);
			this->tables->Name = L"tables";
			this->tables->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::Lime;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tables->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->tables->RowHeadersVisible = false;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::White;
			this->tables->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->tables->Size = System::Drawing::Size(352, 132);
			this->tables->TabIndex = 2;
			// 
			// richTextBox3
			// 
			this->richTextBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->richTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->transition->SetDecoration(this->richTextBox3, BunifuAnimatorNS::DecorationType::None);
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->richTextBox3->ForeColor = System::Drawing::Color::White;
			this->richTextBox3->Location = System::Drawing::Point(407, 19);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(262, 190);
			this->richTextBox3->TabIndex = 16;
			this->richTextBox3->Text = L"";
			// 
			// guna2HtmlLabel1
			// 
			this->guna2HtmlLabel1->BackColor = System::Drawing::Color::Transparent;
			this->transition->SetDecoration(this->guna2HtmlLabel1, BunifuAnimatorNS::DecorationType::None);
			this->guna2HtmlLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.25F));
			this->guna2HtmlLabel1->ForeColor = System::Drawing::Color::White;
			this->guna2HtmlLabel1->Location = System::Drawing::Point(61, 31);
			this->guna2HtmlLabel1->Name = L"guna2HtmlLabel1";
			this->guna2HtmlLabel1->Size = System::Drawing::Size(281, 40);
			this->guna2HtmlLabel1->TabIndex = 1;
			this->guna2HtmlLabel1->Text = L"Discos Comprados";
			// 
			// bunifuGradientPanel1
			// 
			this->bunifuGradientPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel1.BackgroundImage")));
			this->bunifuGradientPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel1->Controls->Add(this->btnGraficar);
			this->bunifuGradientPanel1->Controls->Add(this->bunifuFlatButton1);
			this->bunifuGradientPanel1->Controls->Add(this->btnComprar);
			this->bunifuGradientPanel1->Controls->Add(this->bunifuCustomLabel1);
			this->bunifuGradientPanel1->Controls->Add(this->txtNum);
			this->bunifuGradientPanel1->Controls->Add(this->pictureBox1);
			this->bunifuGradientPanel1->Controls->Add(this->guna2ShadowPanel1);
			this->bunifuGradientPanel1->Controls->Add(this->guna2GradientButton1);
			this->transition->SetDecoration(this->bunifuGradientPanel1, BunifuAnimatorNS::DecorationType::None);
			this->bunifuGradientPanel1->GradientBottomLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->bunifuGradientPanel1->GradientBottomRight = System::Drawing::Color::White;
			this->bunifuGradientPanel1->GradientTopLeft = System::Drawing::Color::Blue;
			this->bunifuGradientPanel1->GradientTopRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->bunifuGradientPanel1->Location = System::Drawing::Point(0, 3);
			this->bunifuGradientPanel1->Name = L"bunifuGradientPanel1";
			this->bunifuGradientPanel1->Quality = 10;
			this->bunifuGradientPanel1->Size = System::Drawing::Size(675, 368);
			this->bunifuGradientPanel1->TabIndex = 1;
			// 
			// btnGraficar
			// 
			this->btnGraficar->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnGraficar->BackColor = System::Drawing::Color::Transparent;
			this->btnGraficar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnGraficar->BorderRadius = 5;
			this->btnGraficar->ButtonText = L"Graficar";
			this->btnGraficar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->transition->SetDecoration(this->btnGraficar, BunifuAnimatorNS::DecorationType::None);
			this->btnGraficar->DisabledColor = System::Drawing::Color::Gray;
			this->btnGraficar->Iconcolor = System::Drawing::Color::Transparent;
			this->btnGraficar->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGraficar.Iconimage")));
			this->btnGraficar->Iconimage_right = nullptr;
			this->btnGraficar->Iconimage_right_Selected = nullptr;
			this->btnGraficar->Iconimage_Selected = nullptr;
			this->btnGraficar->IconMarginLeft = 0;
			this->btnGraficar->IconMarginRight = 0;
			this->btnGraficar->IconRightVisible = true;
			this->btnGraficar->IconRightZoom = 0;
			this->btnGraficar->IconVisible = true;
			this->btnGraficar->IconZoom = 90;
			this->btnGraficar->IsTab = false;
			this->btnGraficar->Location = System::Drawing::Point(34, 267);
			this->btnGraficar->Name = L"btnGraficar";
			this->btnGraficar->Normalcolor = System::Drawing::Color::Transparent;
			this->btnGraficar->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnGraficar->OnHoverTextColor = System::Drawing::Color::White;
			this->btnGraficar->selected = false;
			this->btnGraficar->Size = System::Drawing::Size(87, 25);
			this->btnGraficar->TabIndex = 15;
			this->btnGraficar->Text = L"Graficar";
			this->btnGraficar->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGraficar->Textcolor = System::Drawing::Color::Purple;
			this->btnGraficar->TextFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->btnGraficar->Click += gcnew System::EventHandler(this, &Compras::btnGraficar_Click);
			// 
			// bunifuFlatButton1
			// 
			this->bunifuFlatButton1->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton1->BorderRadius = 5;
			this->bunifuFlatButton1->ButtonText = L"Resumen";
			this->bunifuFlatButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->transition->SetDecoration(this->bunifuFlatButton1, BunifuAnimatorNS::DecorationType::None);
			this->bunifuFlatButton1->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton1->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton1.Iconimage")));
			this->bunifuFlatButton1->Iconimage_right = nullptr;
			this->bunifuFlatButton1->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton1->Iconimage_Selected = nullptr;
			this->bunifuFlatButton1->IconMarginLeft = 0;
			this->bunifuFlatButton1->IconMarginRight = 0;
			this->bunifuFlatButton1->IconRightVisible = true;
			this->bunifuFlatButton1->IconRightZoom = 0;
			this->bunifuFlatButton1->IconVisible = true;
			this->bunifuFlatButton1->IconZoom = 90;
			this->bunifuFlatButton1->IsTab = false;
			this->bunifuFlatButton1->Location = System::Drawing::Point(34, 298);
			this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
			this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton1->selected = false;
			this->bunifuFlatButton1->Size = System::Drawing::Size(87, 25);
			this->bunifuFlatButton1->TabIndex = 14;
			this->bunifuFlatButton1->Text = L"Resumen";
			this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton1->Textcolor = System::Drawing::Color::Purple;
			this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->bunifuFlatButton1->Click += gcnew System::EventHandler(this, &Compras::bunifuFlatButton1_Click);
			// 
			// btnComprar
			// 
			this->btnComprar->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnComprar->BackColor = System::Drawing::Color::Transparent;
			this->btnComprar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnComprar->BorderRadius = 5;
			this->btnComprar->ButtonText = L"Comprar";
			this->btnComprar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->transition->SetDecoration(this->btnComprar, BunifuAnimatorNS::DecorationType::None);
			this->btnComprar->DisabledColor = System::Drawing::Color::Gray;
			this->btnComprar->Iconcolor = System::Drawing::Color::Transparent;
			this->btnComprar->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnComprar.Iconimage")));
			this->btnComprar->Iconimage_right = nullptr;
			this->btnComprar->Iconimage_right_Selected = nullptr;
			this->btnComprar->Iconimage_Selected = nullptr;
			this->btnComprar->IconMarginLeft = 0;
			this->btnComprar->IconMarginRight = 0;
			this->btnComprar->IconRightVisible = true;
			this->btnComprar->IconRightZoom = 0;
			this->btnComprar->IconVisible = true;
			this->btnComprar->IconZoom = 90;
			this->btnComprar->IsTab = false;
			this->btnComprar->Location = System::Drawing::Point(34, 229);
			this->btnComprar->Name = L"btnComprar";
			this->btnComprar->Normalcolor = System::Drawing::Color::Transparent;
			this->btnComprar->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnComprar->OnHoverTextColor = System::Drawing::Color::White;
			this->btnComprar->selected = false;
			this->btnComprar->Size = System::Drawing::Size(87, 25);
			this->btnComprar->TabIndex = 13;
			this->btnComprar->Text = L"Comprar";
			this->btnComprar->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnComprar->Textcolor = System::Drawing::Color::Purple;
			this->btnComprar->TextFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->btnComprar->Click += gcnew System::EventHandler(this, &Compras::btnComprar_Click);
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->transition->SetDecoration(this->bunifuCustomLabel1, BunifuAnimatorNS::DecorationType::None);
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->bunifuCustomLabel1->ForeColor = System::Drawing::Color::Coral;
			this->bunifuCustomLabel1->Location = System::Drawing::Point(20, 99);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(114, 56);
			this->bunifuCustomLabel1->TabIndex = 8;
			this->bunifuCustomLabel1->Text = L"Digite el ID \r\ndel Disco \r\n";
			// 
			// txtNum
			// 
			this->txtNum->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->transition->SetDecoration(this->txtNum, BunifuAnimatorNS::DecorationType::None);
			this->txtNum->Location = System::Drawing::Point(34, 188);
			this->txtNum->Name = L"txtNum";
			this->txtNum->Size = System::Drawing::Size(100, 13);
			this->txtNum->TabIndex = 7;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->transition->SetDecoration(this->pictureBox1, BunifuAnimatorNS::DecorationType::None);
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(13, 179);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(179, 30);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// guna2ShadowPanel1
			// 
			this->guna2ShadowPanel1->BackColor = System::Drawing::Color::Transparent;
			this->guna2ShadowPanel1->Controls->Add(this->btnPosOrder);
			this->guna2ShadowPanel1->Controls->Add(this->btnInOrder);
			this->guna2ShadowPanel1->Controls->Add(this->btnPreOrder);
			this->guna2ShadowPanel1->Controls->Add(this->btnMinimizar);
			this->guna2ShadowPanel1->Controls->Add(this->btnClose);
			this->guna2ShadowPanel1->Controls->Add(this->btnLimpiar);
			this->guna2ShadowPanel1->Controls->Add(this->lblDiscos);
			this->guna2ShadowPanel1->Controls->Add(this->pictureBox2);
			this->guna2ShadowPanel1->Controls->Add(this->table);
			this->transition->SetDecoration(this->guna2ShadowPanel1, BunifuAnimatorNS::DecorationType::None);
			this->guna2ShadowPanel1->FillColor = System::Drawing::Color::White;
			this->guna2ShadowPanel1->Location = System::Drawing::Point(211, -15);
			this->guna2ShadowPanel1->Name = L"guna2ShadowPanel1";
			this->guna2ShadowPanel1->ShadowColor = System::Drawing::Color::Black;
			this->guna2ShadowPanel1->Size = System::Drawing::Size(459, 380);
			this->guna2ShadowPanel1->TabIndex = 1;
			// 
			// btnPosOrder
			// 
			this->btnPosOrder->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnPosOrder->BackColor = System::Drawing::Color::Transparent;
			this->btnPosOrder->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPosOrder->BorderRadius = 5;
			this->btnPosOrder->ButtonText = L"PostOrden";
			this->btnPosOrder->Cursor = System::Windows::Forms::Cursors::Hand;
			this->transition->SetDecoration(this->btnPosOrder, BunifuAnimatorNS::DecorationType::None);
			this->btnPosOrder->DisabledColor = System::Drawing::Color::Gray;
			this->btnPosOrder->Iconcolor = System::Drawing::Color::Transparent;
			this->btnPosOrder->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPosOrder.Iconimage")));
			this->btnPosOrder->Iconimage_right = nullptr;
			this->btnPosOrder->Iconimage_right_Selected = nullptr;
			this->btnPosOrder->Iconimage_Selected = nullptr;
			this->btnPosOrder->IconMarginLeft = 0;
			this->btnPosOrder->IconMarginRight = 0;
			this->btnPosOrder->IconRightVisible = true;
			this->btnPosOrder->IconRightZoom = 0;
			this->btnPosOrder->IconVisible = true;
			this->btnPosOrder->IconZoom = 90;
			this->btnPosOrder->IsTab = false;
			this->btnPosOrder->Location = System::Drawing::Point(353, 203);
			this->btnPosOrder->Name = L"btnPosOrder";
			this->btnPosOrder->Normalcolor = System::Drawing::Color::Transparent;
			this->btnPosOrder->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnPosOrder->OnHoverTextColor = System::Drawing::Color::White;
			this->btnPosOrder->selected = false;
			this->btnPosOrder->Size = System::Drawing::Size(87, 25);
			this->btnPosOrder->TabIndex = 21;
			this->btnPosOrder->Text = L"PostOrden";
			this->btnPosOrder->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPosOrder->Textcolor = System::Drawing::Color::Purple;
			this->btnPosOrder->TextFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->btnPosOrder->Click += gcnew System::EventHandler(this, &Compras::btnPosOrder_Click);
			// 
			// btnInOrder
			// 
			this->btnInOrder->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnInOrder->BackColor = System::Drawing::Color::Transparent;
			this->btnInOrder->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnInOrder->BorderRadius = 5;
			this->btnInOrder->ButtonText = L"InOrden";
			this->btnInOrder->Cursor = System::Windows::Forms::Cursors::Hand;
			this->transition->SetDecoration(this->btnInOrder, BunifuAnimatorNS::DecorationType::None);
			this->btnInOrder->DisabledColor = System::Drawing::Color::Gray;
			this->btnInOrder->Iconcolor = System::Drawing::Color::Transparent;
			this->btnInOrder->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnInOrder.Iconimage")));
			this->btnInOrder->Iconimage_right = nullptr;
			this->btnInOrder->Iconimage_right_Selected = nullptr;
			this->btnInOrder->Iconimage_Selected = nullptr;
			this->btnInOrder->IconMarginLeft = 0;
			this->btnInOrder->IconMarginRight = 0;
			this->btnInOrder->IconRightVisible = true;
			this->btnInOrder->IconRightZoom = 0;
			this->btnInOrder->IconVisible = true;
			this->btnInOrder->IconZoom = 90;
			this->btnInOrder->IsTab = false;
			this->btnInOrder->Location = System::Drawing::Point(215, 203);
			this->btnInOrder->Name = L"btnInOrder";
			this->btnInOrder->Normalcolor = System::Drawing::Color::Transparent;
			this->btnInOrder->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnInOrder->OnHoverTextColor = System::Drawing::Color::White;
			this->btnInOrder->selected = false;
			this->btnInOrder->Size = System::Drawing::Size(87, 25);
			this->btnInOrder->TabIndex = 20;
			this->btnInOrder->Text = L"InOrden";
			this->btnInOrder->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnInOrder->Textcolor = System::Drawing::Color::Purple;
			this->btnInOrder->TextFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->btnInOrder->Click += gcnew System::EventHandler(this, &Compras::btnInOrder_Click);
			// 
			// btnPreOrder
			// 
			this->btnPreOrder->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnPreOrder->BackColor = System::Drawing::Color::Transparent;
			this->btnPreOrder->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPreOrder->BorderRadius = 5;
			this->btnPreOrder->ButtonText = L"PreOrden";
			this->btnPreOrder->Cursor = System::Windows::Forms::Cursors::Hand;
			this->transition->SetDecoration(this->btnPreOrder, BunifuAnimatorNS::DecorationType::None);
			this->btnPreOrder->DisabledColor = System::Drawing::Color::Gray;
			this->btnPreOrder->Iconcolor = System::Drawing::Color::Transparent;
			this->btnPreOrder->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPreOrder.Iconimage")));
			this->btnPreOrder->Iconimage_right = nullptr;
			this->btnPreOrder->Iconimage_right_Selected = nullptr;
			this->btnPreOrder->Iconimage_Selected = nullptr;
			this->btnPreOrder->IconMarginLeft = 0;
			this->btnPreOrder->IconMarginRight = 0;
			this->btnPreOrder->IconRightVisible = true;
			this->btnPreOrder->IconRightZoom = 0;
			this->btnPreOrder->IconVisible = true;
			this->btnPreOrder->IconZoom = 90;
			this->btnPreOrder->IsTab = false;
			this->btnPreOrder->Location = System::Drawing::Point(60, 203);
			this->btnPreOrder->Name = L"btnPreOrder";
			this->btnPreOrder->Normalcolor = System::Drawing::Color::Transparent;
			this->btnPreOrder->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnPreOrder->OnHoverTextColor = System::Drawing::Color::White;
			this->btnPreOrder->selected = false;
			this->btnPreOrder->Size = System::Drawing::Size(87, 25);
			this->btnPreOrder->TabIndex = 16;
			this->btnPreOrder->Text = L"PreOrden";
			this->btnPreOrder->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPreOrder->Textcolor = System::Drawing::Color::Purple;
			this->btnPreOrder->TextFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->btnPreOrder->Click += gcnew System::EventHandler(this, &Compras::btnPreOrder_Click);
			// 
			// btnMinimizar
			// 
			this->btnMinimizar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->transition->SetDecoration(this->btnMinimizar, BunifuAnimatorNS::DecorationType::None);
			this->btnMinimizar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimizar.Image")));
			this->btnMinimizar->ImageActive = nullptr;
			this->btnMinimizar->Location = System::Drawing::Point(388, 18);
			this->btnMinimizar->Name = L"btnMinimizar";
			this->btnMinimizar->Size = System::Drawing::Size(31, 28);
			this->btnMinimizar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnMinimizar->TabIndex = 16;
			this->btnMinimizar->TabStop = false;
			this->btnMinimizar->Zoom = 10;
			this->btnMinimizar->Click += gcnew System::EventHandler(this, &Compras::btnMinimizar_Click);
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->transition->SetDecoration(this->btnClose, BunifuAnimatorNS::DecorationType::None);
			this->btnClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClose.Image")));
			this->btnClose->ImageActive = nullptr;
			this->btnClose->Location = System::Drawing::Point(425, 18);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(31, 28);
			this->btnClose->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnClose->TabIndex = 17;
			this->btnClose->TabStop = false;
			this->btnClose->Zoom = 10;
			this->btnClose->Click += gcnew System::EventHandler(this, &Compras::btnClose_Click);
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->BackColor = System::Drawing::Color::Transparent;
			this->transition->SetDecoration(this->btnLimpiar, BunifuAnimatorNS::DecorationType::None);
			this->btnLimpiar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLimpiar.Image")));
			this->btnLimpiar->ImageActive = nullptr;
			this->btnLimpiar->Location = System::Drawing::Point(309, 18);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(31, 28);
			this->btnLimpiar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnLimpiar->TabIndex = 17;
			this->btnLimpiar->TabStop = false;
			this->btnLimpiar->Zoom = 10;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &Compras::btnLimpiar_Click);
			// 
			// lblDiscos
			// 
			this->lblDiscos->AutoSize = true;
			this->transition->SetDecoration(this->lblDiscos, BunifuAnimatorNS::DecorationType::None);
			this->lblDiscos->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->lblDiscos->ForeColor = System::Drawing::Color::Purple;
			this->lblDiscos->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lblDiscos.Image")));
			this->lblDiscos->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lblDiscos->Location = System::Drawing::Point(89, 21);
			this->lblDiscos->Name = L"lblDiscos";
			this->lblDiscos->Size = System::Drawing::Size(164, 21);
			this->lblDiscos->TabIndex = 3;
			this->lblDiscos->Text = L"DISCOS DISPONIBLES";
			// 
			// pictureBox2
			// 
			this->transition->SetDecoration(this->pictureBox2, BunifuAnimatorNS::DecorationType::None);
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(3, 86);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(454, 291);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// table
			// 
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->table->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle6;
			this->table->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->table->BackgroundColor = System::Drawing::Color::White;
			this->table->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->table->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->table->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.75F));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->table->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			this->transition->SetDecoration(this->table, BunifuAnimatorNS::DecorationType::None);
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->table->DefaultCellStyle = dataGridViewCellStyle8;
			this->table->DoubleBuffered = true;
			this->table->EnableHeadersVisualStyles = false;
			this->table->HeaderBgColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->table->HeaderForeColor = System::Drawing::Color::White;
			this->table->Location = System::Drawing::Point(6, 58);
			this->table->Name = L"table";
			this->table->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->table->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->table->RowHeadersVisible = false;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::Color::White;
			this->table->RowsDefaultCellStyle = dataGridViewCellStyle10;
			this->table->Size = System::Drawing::Size(453, 322);
			this->table->TabIndex = 2;
			// 
			// guna2GradientButton1
			// 
			this->guna2GradientButton1->CheckedState->Parent = this->guna2GradientButton1;
			this->guna2GradientButton1->CustomImages->Parent = this->guna2GradientButton1;
			this->transition->SetDecoration(this->guna2GradientButton1, BunifuAnimatorNS::DecorationType::None);
			this->guna2GradientButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2GradientButton1->ForeColor = System::Drawing::Color::White;
			this->guna2GradientButton1->HoverState->Parent = this->guna2GradientButton1;
			this->guna2GradientButton1->Location = System::Drawing::Point(25, -3);
			this->guna2GradientButton1->Name = L"guna2GradientButton1";
			this->guna2GradientButton1->ShadowDecoration->Parent = this->guna2GradientButton1;
			this->guna2GradientButton1->Size = System::Drawing::Size(180, 45);
			this->guna2GradientButton1->TabIndex = 0;
			this->guna2GradientButton1->Text = L"UNITED DISK";
			this->guna2GradientButton1->Click += gcnew System::EventHandler(this, &Compras::guna2GradientButton1_Click);
			// 
			// bunifuElipse1
			// 
			this->bunifuElipse1->ElipseRadius = 5;
			this->bunifuElipse1->TargetControl = this->panel1;
			// 
			// guna2ColorTransition1
			// 
			this->guna2ColorTransition1->ColorArray = gcnew cli::array< System::Drawing::Color >(3) {
				System::Drawing::Color::Red, System::Drawing::Color::Blue,
					System::Drawing::Color::Orange
			};
			// 
			// transition
			// 
			this->transition->AnimationType = BunifuAnimatorNS::AnimationType::Scale;
			this->transition->Cursor = nullptr;
			animation1->AnimateOnlyDifferences = true;
			animation1->BlindCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.BlindCoeff")));
			animation1->LeafCoeff = 0;
			animation1->MaxTime = 1;
			animation1->MinTime = 0;
			animation1->MosaicCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.MosaicCoeff")));
			animation1->MosaicShift = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.MosaicShift")));
			animation1->MosaicSize = 0;
			animation1->Padding = System::Windows::Forms::Padding(0);
			animation1->RotateCoeff = 0;
			animation1->RotateLimit = 0;
			animation1->ScaleCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.ScaleCoeff")));
			animation1->SlideCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.SlideCoeff")));
			animation1->TimeCoeff = 0;
			animation1->TransparencyCoeff = 0;
			this->transition->DefaultAnimation = animation1;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"ARTIST";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"CANCIÓN";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"AÑO";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"ARTIST";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"CANCIÓN";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"AÑO";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			// 
			// Compras
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(682, 610);
			this->Controls->Add(this->panel1);
			this->transition->SetDecoration(this, BunifuAnimatorNS::DecorationType::None);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Compras";
			this->Text = L"Compras";
			this->Load += gcnew System::EventHandler(this, &Compras::Compras_Load);
			this->panel1->ResumeLayout(false);
			this->bunifuGradientPanel2->ResumeLayout(false);
			this->bunifuGradientPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tables))->EndInit();
			this->bunifuGradientPanel1->ResumeLayout(false);
			this->bunifuGradientPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->guna2ShadowPanel1->ResumeLayout(false);
			this->guna2ShadowPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMinimizar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnClose))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnLimpiar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void guna2GradientButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox2->Visible = false;
		
		int longitud;
		table->Rows->Clear();
		table->Visible = true;
		table->BringToFront();
		ListaDoble list;
		list.addFromExcelData("examples.csv");//agrega desde un archivo excel

		list.Mostrar();
		longitud = list.longitudLista();
		std::cout << "la longitud de la lista es " << longitud << "\n";
	
		Tlista N = list.returLis();
		String^ Mensaje = "";
		String^ idCon;
		String^ artisCon;
		String^ autorCon;
		String^ anioCon;

		while (N != NULL)
		{
		
			idCon = Convert::ToString(N->getId());
			artisCon = gcnew String(N->getArtist().c_str());
			autorCon = gcnew String(N->getAutor().c_str());
			anioCon = Convert::ToString(N->getAnio()) + "\n";
			Mensaje += idCon + " " + artisCon + " " + autorCon + " " + anioCon + "\n";
			array<System::Object^>^ row = { idCon, artisCon,autorCon,anioCon };
			this->table->Rows->Add(row);
			N = N->getSiguiente();
		}
		//list.guardarListaENarchivo("exampless.csv");

		//conexion conex;

		//table->DataSource = conex.mostrarDisco();
		//table->Rows->Clear();
	}
private: System::Void btnComprar_Click(System::Object^ sender, System::EventArgs^ e) {


	ListaDoble list;
	ListaDoble listabuy;
	int longitud, value;
	bool buscar;
	int valu;

	//
	//double current;
	//current = (Convert::ToDouble(table->Rows[table->CurrentRow->Index]->Cells[4]->Value));
	//this->textLista3->Text = Convert::ToString(anio);
	//this->txtNum->Text = Convert::ToString(current);
	//

	if (txtNum->Text->Length!= 0)
	{


		list.addFromExcelData("examples.csv");//agrega desde un archivo excel
		list.ordenarPorId();
        //list.radix_sort();//para la busqueda binaria los datos tienen que estar ordenados
		valu = Convert::ToInt32(txtNum->Text);
		Tlista P = list.binarysearchId(valu);

		int idObt;
		std::string artisObt;
		std::string autorObt;
		int anioObt;
		listabuy.addFromExcelData("examplesbuy.csv");
		buscar = listabuy.buscarDisco(valu);


		
		if (P != NULL)
		{

			if (buscar == false)
			{
				Tlista S;
				list.Mostrar();

				remove("examplesbuy.csv");
				
				
				idObt = P->getId();
				artisObt = P->getArtist();
				autorObt = P->getAutor();
				anioObt = P->getAnio();
			
				MessageBox::Show("Disco comprado con exito");
				listabuy.insertarInicio(idObt, artisObt, autorObt, anioObt);
				listabuy.Mostrar();
			
				listabuy.guardarListaENarchivo("examplesbuy.csv");
			}
			else {
				MessageBox::Show("El disco  ya esta comprado");
			}
		}
		else {
			MessageBox::Show("El Id del disco   no se hallo");
		}
	}
	else {
		MessageBox::Show("No se digito el Id");
	}
	txtNum->Clear();
}
	private: void TreeData(Tree  arbol)
	{

		String^ Mensaje = "";
		String^ idCon;
		String^ artisCon;
		String^ autorCon;
		String^ anioCon;
		if (arbol != NULL)
		{
			TreeData(arbol->getLeft());
			idCon = Convert::ToString(arbol->getId());
			artisCon = gcnew String(arbol->getArtist().c_str());
			autorCon = gcnew String(arbol->getAutor().c_str());
			anioCon = Convert::ToString(arbol->getAnio()) + "\n";
			//MensajeArtista += Convert::ToString(N->getArtist()) + "\n";
			Mensaje += idCon + " " + artisCon + " " + autorCon + " " + anioCon + "\n";
			array<System::Object^>^ row = { idCon, artisCon,autorCon,anioCon };
			this->table->Rows->Add(row);

			TreeData(arbol->getRight());
		}
	}


private: System::Void bunifuFlatButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	tables->Visible = true;
	int longitud, nro;
	ListaDoble list;
	BinaryTree tree;
	tables->Rows->Clear();
	remove("arbolesPos.csv");

	tree.TreeAddFromExcelData("examplesbuy.csv");
	std::cout << "\n\n ARBOL" << "\n";
	tree.verArbol(tree.returnRaiz(), 0);
	std::cout << "arbolesPre" << "\n";
	tree.preOrden(tree.returnRaiz());
	std::cout << "arbolesIn" << "\n";
	tree.inOrden(tree.returnRaiz());
	std::cout << "arbolesPos" << "\n";
	tree.postOrden(tree.returnRaiz());
	//std::cout<<"\n";
	list.addFromExcelData("arbolesPos.csv");//agrega desde el archivo excel generado por el arbol
	//list.addFromExcelData("examplesbuy.csv");//agrega desde un archivo excel
	std::cout << "Lista modificada con arboles PostOrden" << "\n";

	nro = tree.cont(tree.returnRaiz());
	std::cout << "la cantidad  de nodos del arbol es: " << nro << "\n";

	Tlista N = list.returLis();
	Tree ABB = tree.returnRaiz();
	String^ Mensaje = "";
	String^ idCon;
	String^ artisCon;
	String^ autorCon;
	String^ anioCon;

	while (N != NULL)
	{
		
		idCon = Convert::ToString(N->getId());
		artisCon = gcnew String(N->getArtist().c_str());
		autorCon = gcnew String(N->getAutor().c_str());
		anioCon = Convert::ToString(N->getAnio()) + "\n";
		Mensaje += idCon + " " + artisCon + " " + autorCon + " " + anioCon + "\n";
		array<System::Object^>^ row = { idCon, artisCon,autorCon,anioCon };
		this->tables->Rows->Add(row);
		N = N->getSiguiente();
	}

	
	

}

	   public: void Refresco()
	   {
		   cont = 0;
		   contArrD = 0;
		   Apertura = 120;
		   pictureBox2->Refresh();
		   richTextBox3->Refresh();
		   richTextBox3->Clear();
		   richTextBox3->Visible = false;
		   tables->Visible = false;
		  // 
		   pictureBox2->Visible = true;
		 
		  
		   pictureBox2->BringToFront();
		   btnPreOrder->Visible = true;
		   btnInOrder->Visible = true;
		   btnPosOrder->Visible = true;
		   btnPreOrder->BringToFront();
		   btnInOrder->BringToFront();
		   btnPosOrder->BringToFront();
		   table->Visible = true;
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

		public: void DibujarFlechas(Graphics^& Lienzo, Point^ Inicial, Point^ Final, bool Flecha)
		{
			Pen^ Lapiz = gcnew Pen(Color::Tomato, 3);
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
	Dato->Location = System::Drawing::Point(PosicionesPantalla[Cont]->X + 230, PosicionesPantalla[Cont]->Y + 75);
	delete Lapiz;
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
		Dato->Location = System::Drawing::Point(PosicionesPantalla[Cont]->X + 215, PosicionesPantalla[Cont]->Y + 75);
		LabelsLista[Cont] = Dato;
		LabelsLista[Cont] = Dato;
	}



	public: void DibujarListaDoble(Graphics^& Lienzo)
	{
		ListaDoble lista;
		lista.addFromExcelData("examplesbuy.csv");
		lista.Mostrar();
		int cont = 1;
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

private: System::Void btnGraficar_Click(System::Object^ sender, System::EventArgs^ e) {

	Graphics^ Lienzo = pictureBox2->CreateGraphics();
	DibujarListaDoble(Lienzo);
}
private: System::Void Compras_Load(System::Object^ sender, System::EventArgs^ e) {
	int Aux = 10;
	int AuxVertical = 30;
	for (int i = 0; i < 20; i++)
	{
		Posiciones[i] = gcnew Point(0, 0);
		PosicionesPantalla[i] = gcnew Point(Aux, 200);
		Aux += 90;
		AuxVertical += 50;
	}
	BanderaPos = NULL;
	tables->Visible = false;
	richTextBox3->Visible = false;

}
private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
	Refresco();

}

private: System::Void btnMinimizar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	otherform->Show();
}
private: System::Void btnPreOrder_Click(System::Object^ sender, System::EventArgs^ e) {
	BinaryTree tree;
	richTextBox3->Visible = true;
	richTextBox3->BringToFront();//para traer al frente al richTextBox3
	richTextBox3->ForeColor = Color::Coral;
	BunifuAnimatorNS::Animation^ anim;

	transition->Show(richTextBox3, true, anim);
	
	tree.TreeAddFromExcelData("examplesbuy.csv");
	String^ Mensaje = "";
	Tree nuevoArbol;
	nuevoArbol = tree.returnRaiz();

	if (nuevoArbol != NULL)
	{
		tree.preOrder(nuevoArbol, Mensaje);
		richTextBox3->Text = Mensaje;
		richTextBox3->Enabled = true;
		richTextBox3->Visible = true;
	}
}

private: System::Void btnInOrder_Click(System::Object^ sender, System::EventArgs^ e) {
	BinaryTree tree;
	richTextBox3->Visible = true;
	richTextBox3->BringToFront();
	richTextBox3->ForeColor = Color::LightYellow;
	tree.TreeAddFromExcelData("examplesbuy.csv");
	String^ Mensaje = "";
	Tree nuevoArbol;
	nuevoArbol = tree.returnRaiz();

	if (nuevoArbol != NULL)
	{
		
		tree.inOrder(nuevoArbol, Mensaje);
		richTextBox3->Text = Mensaje;
		richTextBox3->Enabled = true;
		richTextBox3->Visible = true;
	}
}
private: System::Void btnPosOrder_Click(System::Object^ sender, System::EventArgs^ e) {
	BinaryTree tree;
	richTextBox3->Visible = true;
	richTextBox3->BringToFront();
	richTextBox3->ForeColor = Color::Cyan;

	tree.TreeAddFromExcelData("examplesbuy.csv");
	String^ Mensaje = "";
	Tree nuevoArbol;
	nuevoArbol = tree.returnRaiz();

	if (nuevoArbol != NULL)
	{
		
		tree.postOrder(nuevoArbol, Mensaje);
		richTextBox3->Text = Mensaje;
		richTextBox3->Enabled = true;
		richTextBox3->Visible = true;
	}
}
   public: void CapturarPantalla()
   {
	   Graphics^ MyGraphics = this->CreateGraphics();
	   System::Drawing::Size tam = this->pictureBox2->Size;
	   memoryImage = gcnew Bitmap(tam.Width + 60, tam.Height + 5, MyGraphics);
	   Graphics^ MemoryGraphics = Graphics::FromImage(memoryImage);
	   MemoryGraphics->CopyFromScreen(this->pictureBox1->Location.X, this->pictureBox1->Location.Y + 70, 0, 0, tam, CopyPixelOperation::SourceCopy);
   }
		 
	public: void PrtDoc_PrintPage(System::Object^ sender, PrintPageEventArgs^ e)
	{
		e->Graphics->DrawImage(memoryImage, 0, 0);
	}

private: System::Void btnPictur_Click(System::Object^ sender, System::EventArgs^ e) {

	Point^ Aux = gcnew Point(this->Location.X, this->Location.Y);
	this->Location = pictureBox1->Location;
	if (BanderaPos != 16 && BanderaPos != 17 && BanderaPos != 18 && BanderaPos != 19)

		CapturarPantalla();

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
private: System::Void btnImprimir_Click(System::Object^ sender, System::EventArgs^ e) {
	Point^ Aux = gcnew Point(this->Location.X, this->Location.Y);
	this->Location = pictureBox1->Location;
	if (BanderaPos != 16 && BanderaPos != 17 && BanderaPos != 18 && BanderaPos != 19)
	
		CapturarPantalla();
	PrtDoc->PrintPage += gcnew PrintPageEventHandler(this, &Compras::PrtDoc_PrintPage);
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
	   static void OpenMicrosoftExcel(String^ text)
	   {

		 
		   System::Diagnostics::ProcessStartInfo^ starInfo = gcnew System::Diagnostics::ProcessStartInfo();
		   starInfo->FileName = "EXCEL.EXE";
		   starInfo->Arguments = text;
		   System::Diagnostics::Process::Start(starInfo);
	   }


private: System::Void btnExcel_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenMicrosoftExcel("examplesbuy.csv");
}
};
}
