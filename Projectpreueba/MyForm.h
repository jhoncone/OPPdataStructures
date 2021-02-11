#pragma once
#include "ListaDoble.h"
#include "form1.h"
#include "About.h"
#include "Compras.h"
namespace Projectpreueba {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	//public:  form1^ ventanaAdd = gcnew form1;
	//public:  About^ ventanaAbout = gcnew About;
	private: Guna::UI2::WinForms::Guna2Panel^ sideBarWrapper;
	public:
		//public: Compras^ ventanas = gcnew Compras;

	protected:
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton1;
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton2;
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton3;
	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel2;

	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel3;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnTable;



	private: Guna::UI2::WinForms::Guna2ShadowForm^ guna2ShadowForm1;
	private: Guna::UI2::WinForms::Guna2ShadowPanel^ guna2ShadowPanel1;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuElipse1;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^ datas;



	private: System::Windows::Forms::TextBox^ txtNum;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: Guna::UI2::WinForms::Guna2Button^ guna2Button1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton5;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: Guna::UI2::WinForms::Guna2GradientButton^ guna2GradientButton1;
	private: Bunifu::Framework::UI::BunifuImageButton^ btnClose;
	private: Bunifu::Framework::UI::BunifuImageButton^ btnMinimizar;




	private: Bunifu::Framework::UI::BunifuImageButton^ btnMAximizar;
	private: Bunifu::Framework::UI::BunifuImageButton^ btnRestore;




	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton1;
	private: Bunifu::Framework::UI::BunifuImageButton^ btnLimpiar;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnComprar;
	private: System::Windows::Forms::Panel^ subMenu2;

	private: Bunifu::Framework::UI::BunifuFlatButton^ btnModificar;
	private: System::Windows::Forms::Panel^ subMenu1;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnBurbuja;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnRadix;
	private: System::Windows::Forms::PictureBox^ menuSideBar;
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton6;
	private: Bunifu::Framework::UI::BunifuGradientPanel^ sideBar;
	private: BunifuAnimatorNS::BunifuTransition^ animationSideBar;
	private: BunifuAnimatorNS::BunifuTransition^ animationSideBarback;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnSelecSort;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			BunifuAnimatorNS::Animation^ animation1 = (gcnew BunifuAnimatorNS::Animation());
			BunifuAnimatorNS::Animation^ animation2 = (gcnew BunifuAnimatorNS::Animation());
			this->sideBarWrapper = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->sideBar = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->bunifuFlatButton5 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->subMenu2 = (gcnew System::Windows::Forms::Panel());
			this->bunifuFlatButton6 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnModificar = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->menuSideBar = (gcnew System::Windows::Forms::PictureBox());
			this->subMenu1 = (gcnew System::Windows::Forms::Panel());
			this->btnSelecSort = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnBurbuja = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnRadix = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuFlatButton3 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->guna2GradientButton1 = (gcnew Guna::UI2::WinForms::Guna2GradientButton());
			this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuFlatButton2 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->guna2Panel2 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->btnComprar = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnLimpiar = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->guna2Panel3 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->btnRestore = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->btnClose = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->btnMinimizar = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->btnMAximizar = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->txtNum = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->guna2Button1 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnTable = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->guna2ShadowForm1 = (gcnew Guna::UI2::WinForms::Guna2ShadowForm(this->components));
			this->guna2ShadowPanel1 = (gcnew Guna::UI2::WinForms::Guna2ShadowPanel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->datas = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bunifuElipse1 = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->animationSideBar = (gcnew BunifuAnimatorNS::BunifuTransition(this->components));
			this->animationSideBarback = (gcnew BunifuAnimatorNS::BunifuTransition(this->components));
			this->sideBarWrapper->SuspendLayout();
			this->sideBar->SuspendLayout();
			this->subMenu2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuSideBar))->BeginInit();
			this->subMenu1->SuspendLayout();
			this->guna2Panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnLimpiar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->guna2Panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnRestore))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnClose))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMinimizar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMAximizar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->guna2ShadowPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datas))->BeginInit();
			this->SuspendLayout();
			// 
			// sideBarWrapper
			// 
			this->sideBarWrapper->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->sideBarWrapper->Controls->Add(this->sideBar);
			this->animationSideBarback->SetDecoration(this->sideBarWrapper, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBar->SetDecoration(this->sideBarWrapper, BunifuAnimatorNS::DecorationType::None);
			this->sideBarWrapper->Location = System::Drawing::Point(3, 56);
			this->sideBarWrapper->Name = L"sideBarWrapper";
			this->sideBarWrapper->ShadowDecoration->Parent = this->sideBarWrapper;
			this->sideBarWrapper->Size = System::Drawing::Size(250, 477);
			this->sideBarWrapper->TabIndex = 0;
			// 
			// sideBar
			// 
			this->sideBar->BackColor = System::Drawing::Color::Transparent;
			this->sideBar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sideBar.BackgroundImage")));
			this->sideBar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->sideBar->Controls->Add(this->bunifuFlatButton5);
			this->sideBar->Controls->Add(this->subMenu2);
			this->sideBar->Controls->Add(this->menuSideBar);
			this->sideBar->Controls->Add(this->subMenu1);
			this->sideBar->Controls->Add(this->bunifuFlatButton3);
			this->sideBar->Controls->Add(this->guna2GradientButton1);
			this->sideBar->Controls->Add(this->bunifuFlatButton1);
			this->sideBar->Controls->Add(this->bunifuFlatButton2);
			this->animationSideBarback->SetDecoration(this->sideBar, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBar->SetDecoration(this->sideBar, BunifuAnimatorNS::DecorationType::None);
			this->sideBar->GradientBottomLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->sideBar->GradientBottomRight = System::Drawing::Color::White;
			this->sideBar->GradientTopLeft = System::Drawing::Color::White;
			this->sideBar->GradientTopRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->sideBar->Location = System::Drawing::Point(3, 3);
			this->sideBar->Name = L"sideBar";
			this->sideBar->Quality = 10;
			this->sideBar->Size = System::Drawing::Size(235, 464);
			this->sideBar->TabIndex = 4;
			// 
			// bunifuFlatButton5
			// 
			this->bunifuFlatButton5->Activecolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton5->BackColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton5->BorderRadius = 0;
			this->bunifuFlatButton5->ButtonText = L"About";
			this->bunifuFlatButton5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->animationSideBar->SetDecoration(this->bunifuFlatButton5, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBarback->SetDecoration(this->bunifuFlatButton5, BunifuAnimatorNS::DecorationType::None);
			this->bunifuFlatButton5->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton5->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton5->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton5.Iconimage")));
			this->bunifuFlatButton5->Iconimage_right = nullptr;
			this->bunifuFlatButton5->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton5->Iconimage_Selected = nullptr;
			this->bunifuFlatButton5->IconMarginLeft = 0;
			this->bunifuFlatButton5->IconMarginRight = 0;
			this->bunifuFlatButton5->IconRightVisible = true;
			this->bunifuFlatButton5->IconRightZoom = 0;
			this->bunifuFlatButton5->IconVisible = true;
			this->bunifuFlatButton5->IconZoom = 90;
			this->bunifuFlatButton5->IsTab = false;
			this->bunifuFlatButton5->Location = System::Drawing::Point(9, 402);
			this->bunifuFlatButton5->Name = L"bunifuFlatButton5";
			this->bunifuFlatButton5->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton5->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton5->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton5->selected = false;
			this->bunifuFlatButton5->Size = System::Drawing::Size(177, 48);
			this->bunifuFlatButton5->TabIndex = 5;
			this->bunifuFlatButton5->Text = L"About";
			this->bunifuFlatButton5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton5->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton5->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton5->Click += gcnew System::EventHandler(this, &MyForm::bunifuFlatButton5_Click);
			// 
			// subMenu2
			// 
			this->subMenu2->BackColor = System::Drawing::Color::Transparent;
			this->subMenu2->Controls->Add(this->bunifuFlatButton6);
			this->subMenu2->Controls->Add(this->btnModificar);
			this->animationSideBarback->SetDecoration(this->subMenu2, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBar->SetDecoration(this->subMenu2, BunifuAnimatorNS::DecorationType::None);
			this->subMenu2->Location = System::Drawing::Point(9, 340);
			this->subMenu2->Name = L"subMenu2";
			this->subMenu2->Size = System::Drawing::Size(162, 56);
			this->subMenu2->TabIndex = 8;
			// 
			// bunifuFlatButton6
			// 
			this->bunifuFlatButton6->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton6->BackColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton6->BorderRadius = 5;
			this->bunifuFlatButton6->ButtonText = L"Comprar";
			this->bunifuFlatButton6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->animationSideBar->SetDecoration(this->bunifuFlatButton6, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBarback->SetDecoration(this->bunifuFlatButton6, BunifuAnimatorNS::DecorationType::None);
			this->bunifuFlatButton6->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton6->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton6->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton6.Iconimage")));
			this->bunifuFlatButton6->Iconimage_right = nullptr;
			this->bunifuFlatButton6->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton6->Iconimage_Selected = nullptr;
			this->bunifuFlatButton6->IconMarginLeft = 0;
			this->bunifuFlatButton6->IconMarginRight = 0;
			this->bunifuFlatButton6->IconRightVisible = true;
			this->bunifuFlatButton6->IconRightZoom = 0;
			this->bunifuFlatButton6->IconVisible = true;
			this->bunifuFlatButton6->IconZoom = 90;
			this->bunifuFlatButton6->IsTab = false;
			this->bunifuFlatButton6->Location = System::Drawing::Point(9, 28);
			this->bunifuFlatButton6->Name = L"bunifuFlatButton6";
			this->bunifuFlatButton6->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton6->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuFlatButton6->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton6->selected = false;
			this->bunifuFlatButton6->Size = System::Drawing::Size(77, 25);
			this->bunifuFlatButton6->TabIndex = 13;
			this->bunifuFlatButton6->Text = L"Comprar";
			this->bunifuFlatButton6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton6->Textcolor = System::Drawing::Color::Purple;
			this->bunifuFlatButton6->TextFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->bunifuFlatButton6->Click += gcnew System::EventHandler(this, &MyForm::bunifuFlatButton6_Click);
			// 
			// btnModificar
			// 
			this->btnModificar->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnModificar->BackColor = System::Drawing::Color::Transparent;
			this->btnModificar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnModificar->BorderRadius = 0;
			this->btnModificar->ButtonText = L"Modificar";
			this->btnModificar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->animationSideBar->SetDecoration(this->btnModificar, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBarback->SetDecoration(this->btnModificar, BunifuAnimatorNS::DecorationType::None);
			this->btnModificar->DisabledColor = System::Drawing::Color::Gray;
			this->btnModificar->Iconcolor = System::Drawing::Color::Transparent;
			this->btnModificar->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnModificar.Iconimage")));
			this->btnModificar->Iconimage_right = nullptr;
			this->btnModificar->Iconimage_right_Selected = nullptr;
			this->btnModificar->Iconimage_Selected = nullptr;
			this->btnModificar->IconMarginLeft = 0;
			this->btnModificar->IconMarginRight = 0;
			this->btnModificar->IconRightVisible = true;
			this->btnModificar->IconRightZoom = 0;
			this->btnModificar->IconVisible = true;
			this->btnModificar->IconZoom = 90;
			this->btnModificar->IsTab = false;
			this->btnModificar->Location = System::Drawing::Point(9, 2);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Normalcolor = System::Drawing::Color::Transparent;
			this->btnModificar->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnModificar->OnHoverTextColor = System::Drawing::Color::White;
			this->btnModificar->selected = false;
			this->btnModificar->Size = System::Drawing::Size(112, 20);
			this->btnModificar->TabIndex = 5;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnModificar->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnModificar->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			// 
			// menuSideBar
			// 
			this->menuSideBar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->animationSideBar->SetDecoration(this->menuSideBar, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBarback->SetDecoration(this->menuSideBar, BunifuAnimatorNS::DecorationType::None);
			this->menuSideBar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuSideBar.Image")));
			this->menuSideBar->Location = System::Drawing::Point(9, 27);
			this->menuSideBar->Name = L"menuSideBar";
			this->menuSideBar->Size = System::Drawing::Size(39, 45);
			this->menuSideBar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->menuSideBar->TabIndex = 9;
			this->menuSideBar->TabStop = false;
			this->menuSideBar->Click += gcnew System::EventHandler(this, &MyForm::menuSideBar_Click);
			// 
			// subMenu1
			// 
			this->subMenu1->BackColor = System::Drawing::Color::Transparent;
			this->subMenu1->Controls->Add(this->btnSelecSort);
			this->subMenu1->Controls->Add(this->btnBurbuja);
			this->subMenu1->Controls->Add(this->btnRadix);
			this->animationSideBarback->SetDecoration(this->subMenu1, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBar->SetDecoration(this->subMenu1, BunifuAnimatorNS::DecorationType::None);
			this->subMenu1->Location = System::Drawing::Point(9, 201);
			this->subMenu1->Name = L"subMenu1";
			this->subMenu1->Size = System::Drawing::Size(162, 79);
			this->subMenu1->TabIndex = 7;
			// 
			// btnSelecSort
			// 
			this->btnSelecSort->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnSelecSort->BackColor = System::Drawing::Color::Transparent;
			this->btnSelecSort->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSelecSort->BorderRadius = 0;
			this->btnSelecSort->ButtonText = L"Selection";
			this->btnSelecSort->Cursor = System::Windows::Forms::Cursors::Hand;
			this->animationSideBar->SetDecoration(this->btnSelecSort, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBarback->SetDecoration(this->btnSelecSort, BunifuAnimatorNS::DecorationType::None);
			this->btnSelecSort->DisabledColor = System::Drawing::Color::Gray;
			this->btnSelecSort->Iconcolor = System::Drawing::Color::Transparent;
			this->btnSelecSort->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSelecSort.Iconimage")));
			this->btnSelecSort->Iconimage_right = nullptr;
			this->btnSelecSort->Iconimage_right_Selected = nullptr;
			this->btnSelecSort->Iconimage_Selected = nullptr;
			this->btnSelecSort->IconMarginLeft = 0;
			this->btnSelecSort->IconMarginRight = 0;
			this->btnSelecSort->IconRightVisible = true;
			this->btnSelecSort->IconRightZoom = 0;
			this->btnSelecSort->IconVisible = true;
			this->btnSelecSort->IconZoom = 90;
			this->btnSelecSort->IsTab = false;
			this->btnSelecSort->Location = System::Drawing::Point(9, 30);
			this->btnSelecSort->Name = L"btnSelecSort";
			this->btnSelecSort->Normalcolor = System::Drawing::Color::Transparent;
			this->btnSelecSort->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnSelecSort->OnHoverTextColor = System::Drawing::Color::White;
			this->btnSelecSort->selected = false;
			this->btnSelecSort->Size = System::Drawing::Size(112, 20);
			this->btnSelecSort->TabIndex = 6;
			this->btnSelecSort->Text = L"Selection";
			this->btnSelecSort->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSelecSort->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnSelecSort->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnSelecSort->Click += gcnew System::EventHandler(this, &MyForm::btnSelecSort_Click);
			// 
			// btnBurbuja
			// 
			this->btnBurbuja->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnBurbuja->BackColor = System::Drawing::Color::Transparent;
			this->btnBurbuja->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnBurbuja->BorderRadius = 0;
			this->btnBurbuja->ButtonText = L"Bubble";
			this->btnBurbuja->Cursor = System::Windows::Forms::Cursors::Hand;
			this->animationSideBar->SetDecoration(this->btnBurbuja, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBarback->SetDecoration(this->btnBurbuja, BunifuAnimatorNS::DecorationType::None);
			this->btnBurbuja->DisabledColor = System::Drawing::Color::Gray;
			this->btnBurbuja->Iconcolor = System::Drawing::Color::Transparent;
			this->btnBurbuja->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBurbuja.Iconimage")));
			this->btnBurbuja->Iconimage_right = nullptr;
			this->btnBurbuja->Iconimage_right_Selected = nullptr;
			this->btnBurbuja->Iconimage_Selected = nullptr;
			this->btnBurbuja->IconMarginLeft = 0;
			this->btnBurbuja->IconMarginRight = 0;
			this->btnBurbuja->IconRightVisible = true;
			this->btnBurbuja->IconRightZoom = 0;
			this->btnBurbuja->IconVisible = true;
			this->btnBurbuja->IconZoom = 90;
			this->btnBurbuja->IsTab = false;
			this->btnBurbuja->Location = System::Drawing::Point(8, 6);
			this->btnBurbuja->Name = L"btnBurbuja";
			this->btnBurbuja->Normalcolor = System::Drawing::Color::Transparent;
			this->btnBurbuja->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnBurbuja->OnHoverTextColor = System::Drawing::Color::White;
			this->btnBurbuja->selected = false;
			this->btnBurbuja->Size = System::Drawing::Size(112, 20);
			this->btnBurbuja->TabIndex = 5;
			this->btnBurbuja->Text = L"Bubble";
			this->btnBurbuja->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnBurbuja->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnBurbuja->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBurbuja->Click += gcnew System::EventHandler(this, &MyForm::btnBurbuja_Click);
			// 
			// btnRadix
			// 
			this->btnRadix->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnRadix->BackColor = System::Drawing::Color::Transparent;
			this->btnRadix->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnRadix->BorderRadius = 0;
			this->btnRadix->ButtonText = L"Radix";
			this->btnRadix->Cursor = System::Windows::Forms::Cursors::Hand;
			this->animationSideBar->SetDecoration(this->btnRadix, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBarback->SetDecoration(this->btnRadix, BunifuAnimatorNS::DecorationType::None);
			this->btnRadix->DisabledColor = System::Drawing::Color::Gray;
			this->btnRadix->Iconcolor = System::Drawing::Color::Transparent;
			this->btnRadix->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRadix.Iconimage")));
			this->btnRadix->Iconimage_right = nullptr;
			this->btnRadix->Iconimage_right_Selected = nullptr;
			this->btnRadix->Iconimage_Selected = nullptr;
			this->btnRadix->IconMarginLeft = 0;
			this->btnRadix->IconMarginRight = 0;
			this->btnRadix->IconRightVisible = true;
			this->btnRadix->IconRightZoom = 0;
			this->btnRadix->IconVisible = true;
			this->btnRadix->IconZoom = 90;
			this->btnRadix->IsTab = false;
			this->btnRadix->Location = System::Drawing::Point(9, 56);
			this->btnRadix->Name = L"btnRadix";
			this->btnRadix->Normalcolor = System::Drawing::Color::Transparent;
			this->btnRadix->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnRadix->OnHoverTextColor = System::Drawing::Color::White;
			this->btnRadix->selected = false;
			this->btnRadix->Size = System::Drawing::Size(112, 20);
			this->btnRadix->TabIndex = 4;
			this->btnRadix->Text = L"Radix";
			this->btnRadix->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnRadix->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnRadix->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRadix->Click += gcnew System::EventHandler(this, &MyForm::btnRadix_Click);
			// 
			// bunifuFlatButton3
			// 
			this->bunifuFlatButton3->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton3->BackColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton3->BorderRadius = 0;
			this->bunifuFlatButton3->ButtonText = L"Settings";
			this->bunifuFlatButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->animationSideBar->SetDecoration(this->bunifuFlatButton3, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBarback->SetDecoration(this->bunifuFlatButton3, BunifuAnimatorNS::DecorationType::None);
			this->bunifuFlatButton3->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton3->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton3->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton3.Iconimage")));
			this->bunifuFlatButton3->Iconimage_right = nullptr;
			this->bunifuFlatButton3->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton3->Iconimage_Selected = nullptr;
			this->bunifuFlatButton3->IconMarginLeft = 0;
			this->bunifuFlatButton3->IconMarginRight = 0;
			this->bunifuFlatButton3->IconRightVisible = true;
			this->bunifuFlatButton3->IconRightZoom = 0;
			this->bunifuFlatButton3->IconVisible = true;
			this->bunifuFlatButton3->IconZoom = 90;
			this->bunifuFlatButton3->IsTab = false;
			this->bunifuFlatButton3->Location = System::Drawing::Point(9, 289);
			this->bunifuFlatButton3->Name = L"bunifuFlatButton3";
			this->bunifuFlatButton3->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton3->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuFlatButton3->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton3->selected = false;
			this->bunifuFlatButton3->Size = System::Drawing::Size(162, 48);
			this->bunifuFlatButton3->TabIndex = 4;
			this->bunifuFlatButton3->Text = L"Settings";
			this->bunifuFlatButton3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton3->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton3->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			// 
			// guna2GradientButton1
			// 
			this->guna2GradientButton1->CheckedState->Parent = this->guna2GradientButton1;
			this->guna2GradientButton1->CustomImages->Parent = this->guna2GradientButton1;
			this->animationSideBar->SetDecoration(this->guna2GradientButton1, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBarback->SetDecoration(this->guna2GradientButton1, BunifuAnimatorNS::DecorationType::None);
			this->guna2GradientButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->guna2GradientButton1->ForeColor = System::Drawing::Color::White;
			this->guna2GradientButton1->HoverState->Parent = this->guna2GradientButton1;
			this->guna2GradientButton1->Location = System::Drawing::Point(51, 27);
			this->guna2GradientButton1->Name = L"guna2GradientButton1";
			this->guna2GradientButton1->ShadowDecoration->Parent = this->guna2GradientButton1;
			this->guna2GradientButton1->Size = System::Drawing::Size(180, 45);
			this->guna2GradientButton1->TabIndex = 6;
			this->guna2GradientButton1->Text = L"UNITED DISK";
			this->guna2GradientButton1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// bunifuFlatButton1
			// 
			this->bunifuFlatButton1->Activecolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton1->BorderRadius = 0;
			this->bunifuFlatButton1->ButtonText = L"Agregar Cancion";
			this->bunifuFlatButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->animationSideBar->SetDecoration(this->bunifuFlatButton1, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBarback->SetDecoration(this->bunifuFlatButton1, BunifuAnimatorNS::DecorationType::None);
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
			this->bunifuFlatButton1->Location = System::Drawing::Point(9, 102);
			this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
			this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton1->selected = false;
			this->bunifuFlatButton1->Size = System::Drawing::Size(162, 48);
			this->bunifuFlatButton1->TabIndex = 2;
			this->bunifuFlatButton1->Text = L"Agregar Cancion";
			this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton1->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton1->Click += gcnew System::EventHandler(this, &MyForm::bunifuFlatButton1_Click);
			// 
			// bunifuFlatButton2
			// 
			this->bunifuFlatButton2->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton2->BorderRadius = 0;
			this->bunifuFlatButton2->ButtonText = L"Ordenar ";
			this->bunifuFlatButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->animationSideBar->SetDecoration(this->bunifuFlatButton2, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBarback->SetDecoration(this->bunifuFlatButton2, BunifuAnimatorNS::DecorationType::None);
			this->bunifuFlatButton2->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton2->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton2.Iconimage")));
			this->bunifuFlatButton2->Iconimage_right = nullptr;
			this->bunifuFlatButton2->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton2->Iconimage_Selected = nullptr;
			this->bunifuFlatButton2->IconMarginLeft = 0;
			this->bunifuFlatButton2->IconMarginRight = 0;
			this->bunifuFlatButton2->IconRightVisible = true;
			this->bunifuFlatButton2->IconRightZoom = 0;
			this->bunifuFlatButton2->IconVisible = true;
			this->bunifuFlatButton2->IconZoom = 90;
			this->bunifuFlatButton2->IsTab = false;
			this->bunifuFlatButton2->Location = System::Drawing::Point(9, 156);
			this->bunifuFlatButton2->Name = L"bunifuFlatButton2";
			this->bunifuFlatButton2->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuFlatButton2->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton2->selected = false;
			this->bunifuFlatButton2->Size = System::Drawing::Size(162, 48);
			this->bunifuFlatButton2->TabIndex = 3;
			this->bunifuFlatButton2->Text = L"Ordenar ";
			this->bunifuFlatButton2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton2->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton2->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton2->Click += gcnew System::EventHandler(this, &MyForm::bunifuFlatButton2_Click);
			// 
			// guna2Panel2
			// 
			this->guna2Panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->guna2Panel2->Controls->Add(this->btnComprar);
			this->guna2Panel2->Controls->Add(this->btnLimpiar);
			this->guna2Panel2->Controls->Add(this->pictureBox7);
			this->animationSideBarback->SetDecoration(this->guna2Panel2, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBar->SetDecoration(this->guna2Panel2, BunifuAnimatorNS::DecorationType::None);
			this->guna2Panel2->Location = System::Drawing::Point(3, 12);
			this->guna2Panel2->Name = L"guna2Panel2";
			this->guna2Panel2->ShadowDecoration->Parent = this->guna2Panel2;
			this->guna2Panel2->Size = System::Drawing::Size(210, 45);
			this->guna2Panel2->TabIndex = 0;
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
			this->animationSideBar->SetDecoration(this->btnComprar, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBarback->SetDecoration(this->btnComprar, BunifuAnimatorNS::DecorationType::None);
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
			this->btnComprar->Location = System::Drawing::Point(75, 13);
			this->btnComprar->Name = L"btnComprar";
			this->btnComprar->Normalcolor = System::Drawing::Color::Transparent;
			this->btnComprar->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnComprar->OnHoverTextColor = System::Drawing::Color::White;
			this->btnComprar->selected = false;
			this->btnComprar->Size = System::Drawing::Size(77, 25);
			this->btnComprar->TabIndex = 12;
			this->btnComprar->Text = L"Comprar";
			this->btnComprar->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnComprar->Textcolor = System::Drawing::Color::Purple;
			this->btnComprar->TextFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->btnComprar->Click += gcnew System::EventHandler(this, &MyForm::btnComprar_Click);
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->BackColor = System::Drawing::Color::Transparent;
			this->animationSideBarback->SetDecoration(this->btnLimpiar, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBar->SetDecoration(this->btnLimpiar, BunifuAnimatorNS::DecorationType::None);
			this->btnLimpiar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLimpiar.Image")));
			this->btnLimpiar->ImageActive = nullptr;
			this->btnLimpiar->Location = System::Drawing::Point(158, 8);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(31, 28);
			this->btnLimpiar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnLimpiar->TabIndex = 11;
			this->btnLimpiar->TabStop = false;
			this->btnLimpiar->Zoom = 10;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &MyForm::btnLimpiar_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->animationSideBar->SetDecoration(this->pictureBox7, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBarback->SetDecoration(this->pictureBox7, BunifuAnimatorNS::DecorationType::None);
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(3, 11);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(86, 27);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 1;
			this->pictureBox7->TabStop = false;
			// 
			// guna2Panel3
			// 
			this->guna2Panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->guna2Panel3->Controls->Add(this->bunifuImageButton1);
			this->guna2Panel3->Controls->Add(this->btnRestore);
			this->guna2Panel3->Controls->Add(this->btnClose);
			this->guna2Panel3->Controls->Add(this->btnMinimizar);
			this->guna2Panel3->Controls->Add(this->btnMAximizar);
			this->guna2Panel3->Controls->Add(this->txtNum);
			this->guna2Panel3->Controls->Add(this->pictureBox1);
			this->guna2Panel3->Controls->Add(this->guna2Button1);
			this->guna2Panel3->Controls->Add(this->btnTable);
			this->animationSideBarback->SetDecoration(this->guna2Panel3, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBar->SetDecoration(this->guna2Panel3, BunifuAnimatorNS::DecorationType::None);
			this->guna2Panel3->Location = System::Drawing::Point(209, 12);
			this->guna2Panel3->Name = L"guna2Panel3";
			this->guna2Panel3->ShadowDecoration->Parent = this->guna2Panel3;
			this->guna2Panel3->Size = System::Drawing::Size(589, 45);
			this->guna2Panel3->TabIndex = 1;
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Transparent;
			this->animationSideBarback->SetDecoration(this->bunifuImageButton1, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBar->SetDecoration(this->bunifuImageButton1, BunifuAnimatorNS::DecorationType::None);
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(335, 3);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(36, 28);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 11;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &MyForm::bunifuImageButton1_Click);
			// 
			// btnRestore
			// 
			this->btnRestore->BackColor = System::Drawing::Color::Transparent;
			this->animationSideBarback->SetDecoration(this->btnRestore, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBar->SetDecoration(this->btnRestore, BunifuAnimatorNS::DecorationType::None);
			this->btnRestore->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRestore.Image")));
			this->btnRestore->ImageActive = nullptr;
			this->btnRestore->Location = System::Drawing::Point(257, 8);
			this->btnRestore->Name = L"btnRestore";
			this->btnRestore->Size = System::Drawing::Size(31, 28);
			this->btnRestore->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnRestore->TabIndex = 10;
			this->btnRestore->TabStop = false;
			this->btnRestore->Zoom = 10;
			this->btnRestore->Click += gcnew System::EventHandler(this, &MyForm::btnRestore_Click);
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::Transparent;
			this->animationSideBarback->SetDecoration(this->btnClose, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBar->SetDecoration(this->btnClose, BunifuAnimatorNS::DecorationType::None);
			this->btnClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClose.Image")));
			this->btnClose->ImageActive = nullptr;
			this->btnClose->Location = System::Drawing::Point(555, 4);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(31, 28);
			this->btnClose->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnClose->TabIndex = 9;
			this->btnClose->TabStop = false;
			this->btnClose->Zoom = 10;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// btnMinimizar
			// 
			this->btnMinimizar->BackColor = System::Drawing::Color::Transparent;
			this->animationSideBarback->SetDecoration(this->btnMinimizar, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBar->SetDecoration(this->btnMinimizar, BunifuAnimatorNS::DecorationType::None);
			this->btnMinimizar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimizar.Image")));
			this->btnMinimizar->ImageActive = nullptr;
			this->btnMinimizar->Location = System::Drawing::Point(481, 3);
			this->btnMinimizar->Name = L"btnMinimizar";
			this->btnMinimizar->Size = System::Drawing::Size(31, 28);
			this->btnMinimizar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnMinimizar->TabIndex = 8;
			this->btnMinimizar->TabStop = false;
			this->btnMinimizar->Zoom = 10;
			this->btnMinimizar->Click += gcnew System::EventHandler(this, &MyForm::btnMinimizar_Click);
			// 
			// btnMAximizar
			// 
			this->btnMAximizar->BackColor = System::Drawing::Color::Transparent;
			this->animationSideBarback->SetDecoration(this->btnMAximizar, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBar->SetDecoration(this->btnMAximizar, BunifuAnimatorNS::DecorationType::None);
			this->btnMAximizar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMAximizar.Image")));
			this->btnMAximizar->ImageActive = nullptr;
			this->btnMAximizar->Location = System::Drawing::Point(518, 3);
			this->btnMAximizar->Name = L"btnMAximizar";
			this->btnMAximizar->Size = System::Drawing::Size(31, 28);
			this->btnMAximizar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnMAximizar->TabIndex = 7;
			this->btnMAximizar->TabStop = false;
			this->btnMAximizar->Zoom = 10;
			this->btnMAximizar->Click += gcnew System::EventHandler(this, &MyForm::btnMAximizar_Click);
			// 
			// txtNum
			// 
			this->txtNum->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->animationSideBar->SetDecoration(this->txtNum, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBarback->SetDecoration(this->txtNum, BunifuAnimatorNS::DecorationType::None);
			this->txtNum->Location = System::Drawing::Point(66, 11);
			this->txtNum->Name = L"txtNum";
			this->txtNum->Size = System::Drawing::Size(100, 13);
			this->txtNum->TabIndex = 6;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->animationSideBar->SetDecoration(this->pictureBox1, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBarback->SetDecoration(this->pictureBox1, BunifuAnimatorNS::DecorationType::None);
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(46, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(269, 29);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// guna2Button1
			// 
			this->guna2Button1->CheckedState->Parent = this->guna2Button1;
			this->guna2Button1->CustomImages->Parent = this->guna2Button1;
			this->animationSideBarback->SetDecoration(this->guna2Button1, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBar->SetDecoration(this->guna2Button1, BunifuAnimatorNS::DecorationType::None);
			this->guna2Button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2Button1->ForeColor = System::Drawing::Color::White;
			this->guna2Button1->HoverState->Parent = this->guna2Button1;
			this->guna2Button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2Button1.Image")));
			this->guna2Button1->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->guna2Button1->Location = System::Drawing::Point(8, 3);
			this->guna2Button1->Name = L"guna2Button1";
			this->guna2Button1->ShadowDecoration->Parent = this->guna2Button1;
			this->guna2Button1->Size = System::Drawing::Size(307, 35);
			this->guna2Button1->TabIndex = 4;
			this->guna2Button1->Click += gcnew System::EventHandler(this, &MyForm::guna2Button1_Click);
			// 
			// btnTable
			// 
			this->btnTable->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnTable->BackColor = System::Drawing::Color::Transparent;
			this->btnTable->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnTable->BorderRadius = 5;
			this->btnTable->ButtonText = L"Tabla";
			this->btnTable->Cursor = System::Windows::Forms::Cursors::Hand;
			this->animationSideBar->SetDecoration(this->btnTable, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBarback->SetDecoration(this->btnTable, BunifuAnimatorNS::DecorationType::None);
			this->btnTable->DisabledColor = System::Drawing::Color::Gray;
			this->btnTable->Iconcolor = System::Drawing::Color::Transparent;
			this->btnTable->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnTable.Iconimage")));
			this->btnTable->Iconimage_right = nullptr;
			this->btnTable->Iconimage_right_Selected = nullptr;
			this->btnTable->Iconimage_Selected = nullptr;
			this->btnTable->IconMarginLeft = 0;
			this->btnTable->IconMarginRight = 0;
			this->btnTable->IconRightVisible = true;
			this->btnTable->IconRightZoom = 0;
			this->btnTable->IconVisible = true;
			this->btnTable->IconZoom = 90;
			this->btnTable->IsTab = false;
			this->btnTable->Location = System::Drawing::Point(377, -4);
			this->btnTable->Name = L"btnTable";
			this->btnTable->Normalcolor = System::Drawing::Color::Transparent;
			this->btnTable->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnTable->OnHoverTextColor = System::Drawing::Color::White;
			this->btnTable->selected = false;
			this->btnTable->Size = System::Drawing::Size(98, 42);
			this->btnTable->TabIndex = 2;
			this->btnTable->Text = L"Tabla";
			this->btnTable->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnTable->Textcolor = System::Drawing::Color::Purple;
			this->btnTable->TextFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->btnTable->Click += gcnew System::EventHandler(this, &MyForm::bunifuFlatButton4_Click);
			// 
			// guna2ShadowPanel1
			// 
			this->guna2ShadowPanel1->BackColor = System::Drawing::Color::Transparent;
			this->guna2ShadowPanel1->Controls->Add(this->pictureBox2);
			this->guna2ShadowPanel1->Controls->Add(this->datas);
			this->animationSideBarback->SetDecoration(this->guna2ShadowPanel1, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBar->SetDecoration(this->guna2ShadowPanel1, BunifuAnimatorNS::DecorationType::None);
			this->guna2ShadowPanel1->FillColor = System::Drawing::Color::White;
			this->guna2ShadowPanel1->Location = System::Drawing::Point(255, 56);
			this->guna2ShadowPanel1->Name = L"guna2ShadowPanel1";
			this->guna2ShadowPanel1->ShadowColor = System::Drawing::Color::Black;
			this->guna2ShadowPanel1->Size = System::Drawing::Size(543, 477);
			this->guna2ShadowPanel1->TabIndex = 3;
			// 
			// pictureBox2
			// 
			this->animationSideBar->SetDecoration(this->pictureBox2, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBarback->SetDecoration(this->pictureBox2, BunifuAnimatorNS::DecorationType::None);
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(5, 44);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(556, 433);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// datas
			// 
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->datas->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->datas->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->datas->BackgroundColor = System::Drawing::Color::White;
			this->datas->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->datas->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->datas->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.75F));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->datas->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->datas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datas->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1, this->Column2,
					this->Column3, this->Column4
			});
			this->animationSideBar->SetDecoration(this->datas, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBarback->SetDecoration(this->datas, BunifuAnimatorNS::DecorationType::None);
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->datas->DefaultCellStyle = dataGridViewCellStyle3;
			this->datas->DoubleBuffered = true;
			this->datas->EnableHeadersVisualStyles = false;
			this->datas->HeaderBgColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->datas->HeaderForeColor = System::Drawing::Color::White;
			this->datas->Location = System::Drawing::Point(5, 16);
			this->datas->Name = L"datas";
			this->datas->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->datas->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->datas->RowHeadersVisible = false;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::Blue;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::White;
			this->datas->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->datas->Size = System::Drawing::Size(547, 414);
			this->datas->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"ARTIST";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"CANCIÓN";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"AÑO";
			this->Column4->Name = L"Column4";
			// 
			// bunifuElipse1
			// 
			this->bunifuElipse1->ElipseRadius = 5;
			this->bunifuElipse1->TargetControl = this->datas;
			// 
			// animationSideBar
			// 
			this->animationSideBar->AnimationType = BunifuAnimatorNS::AnimationType::Particles;
			this->animationSideBar->Cursor = nullptr;
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
			this->animationSideBar->DefaultAnimation = animation1;
			// 
			// animationSideBarback
			// 
			this->animationSideBarback->AnimationType = BunifuAnimatorNS::AnimationType::HorizSlide;
			this->animationSideBarback->Cursor = nullptr;
			animation2->AnimateOnlyDifferences = true;
			animation2->BlindCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.BlindCoeff")));
			animation2->LeafCoeff = 0;
			animation2->MaxTime = 1;
			animation2->MinTime = 0;
			animation2->MosaicCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.MosaicCoeff")));
			animation2->MosaicShift = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.MosaicShift")));
			animation2->MosaicSize = 0;
			animation2->Padding = System::Windows::Forms::Padding(0);
			animation2->RotateCoeff = 0;
			animation2->RotateLimit = 0;
			animation2->ScaleCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.ScaleCoeff")));
			animation2->SlideCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.SlideCoeff")));
			animation2->TimeCoeff = 0;
			animation2->TransparencyCoeff = 0;
			this->animationSideBarback->DefaultAnimation = animation2;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(801, 535);
			this->Controls->Add(this->guna2ShadowPanel1);
			this->Controls->Add(this->guna2Panel3);
			this->Controls->Add(this->sideBarWrapper);
			this->Controls->Add(this->guna2Panel2);
			this->animationSideBarback->SetDecoration(this, BunifuAnimatorNS::DecorationType::None);
			this->animationSideBar->SetDecoration(this, BunifuAnimatorNS::DecorationType::None);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->sideBarWrapper->ResumeLayout(false);
			this->sideBar->ResumeLayout(false);
			this->subMenu2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuSideBar))->EndInit();
			this->subMenu1->ResumeLayout(false);
			this->guna2Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnLimpiar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->guna2Panel3->ResumeLayout(false);
			this->guna2Panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnRestore))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnClose))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMinimizar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMAximizar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->guna2ShadowPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datas))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void bunifuFlatButton4_Click(System::Object^ sender, System::EventArgs^ e) {//boton TAbla
	pictureBox2->Visible = false;
	int longitud;
	ListaDoble list;
	list.addFromExcelData("examples.csv");//agrega desde un archivo excel

	list.Mostrar();
	longitud = list.longitudLista();
	std::cout << "la longitud de la lista es " << longitud << "\n";


	//codigo para pasar la lista al DataGriwview

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
		this->datas->Rows->Add(row);
		N = N->getSiguiente();
	}



	

}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

	private: System::Void guna2Button1_Click(System::Object^ sender, System::EventArgs^ e) {//boton Buscar
		pictureBox2->Visible = false;
		int longitud, value;
		ListaDoble lista;

		if (txtNum->Text->Length != 0)
		{
			lista.addFromExcelData("examples.csv");//agrega desde un archivo excel

			lista.ordenarPorFecha();
			lista.Mostrar();
			longitud = lista.longitudLista();
			std::cout << "la longitud de la lista es " << longitud << "\n";
			value = Convert::ToInt32(txtNum->Text);
			Tlista N = lista.binarysearchId(value);
			String^ idCon;
			String^ Mensaje = "";
			String^ artisCon;
			String^ autorCon;
			String^ anioCon;
			if (N != NULL)
			{

				idCon = Convert::ToString(N->getId());
				artisCon = gcnew String(N->getArtist().c_str());
				autorCon = gcnew String(N->getAutor().c_str());
				anioCon = Convert::ToString(N->getAnio()) + "\n";
				Mensaje += idCon + " " + artisCon + " " + autorCon + " " + anioCon + "\n";
				array<System::Object^>^ row = { idCon, artisCon,autorCon,anioCon };
				this->datas->Rows->Add(row);
			}
			else {
				MessageBox::Show("EL valor digitado no se hallo");
			}


		}
		else {
			MessageBox::Show("No se digito el Id");
		}
	}
public:void  close()
{
	Application::Exit();
}




private: bool form2Shown;
private: System::Void bunifuFlatButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	form1^ l = gcnew form1(this);

	//Form2^ frm2 = gcnew Form2(this);
	l->Show();
	//this->Hide();

	/*
	form1^ l = gcnew form1();
	form2Shown = true;
	this->Close();
	l->ShowDialog();
	Application::ExitThread();

	*/
	


} 




private: System::Void Form1_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
	if (!form2Shown)
	{
		Application::ExitThread();    // this line closes application is user closed Form1 without calling Form2
	}
}



private: System::Void bunifuFlatButton2_Click(System::Object^ sender, System::EventArgs^ e) {//boton Ordenar Fecha Burbu
	pictureBox2->Visible = false;
	

	int longitud;
	ListaDoble list;
	list.addFromExcelData("examples.csv");//agrega desde un archivo excel
	
	list.ordenarPorFecha();
	//list.ordenarPorAutor();
	//list.radix_sort();
//	list.metodoQuickSort();
	list.Mostrar();
	longitud = list.longitudLista();
	std::cout << "la longitud de la lista es " << longitud << "\n";
	
	

	//codigo para pasar la lista al DataGriwview
	Tlista N = list.returLis();
	String^ Mensaje = "";
	String^ idCon;
	String^ artisCon;
	String^ autorCon;
	String^ anioCon;

	while (N != NULL)
	{
		//MensajeAnio += Convert::ToString(N->getAnio()) + "\n";
		idCon = Convert::ToString(N->getId());
		artisCon = gcnew String(N->getArtist().c_str());
		autorCon = gcnew String(N->getAutor().c_str());
		anioCon = Convert::ToString(N->getAnio()) + "\n";
		//MensajeArtista += Convert::ToString(N->getArtist()) + "\n";
		Mensaje += idCon + " " + artisCon + " " + autorCon + " " + anioCon + "\n";
		array<System::Object^>^ row = { idCon, artisCon,autorCon,anioCon };
		this->datas->Rows->Add(row);
		N = N->getSiguiente();
	}
	
}

private: System::Void btnMAximizar_Click(System::Object^ sender, System::EventArgs^ e) {

	this->WindowState = FormWindowState::Maximized;
	btnMAximizar->Visible = false;
	//btnMaximizar->Visible = false;
	btnRestore->Visible = true;
}
private: System::Void btnMinimizar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
	this->close();
}
private: System::Void btnRestore_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Normal;
	btnRestore->Visible = false;
	btnMAximizar->Visible = true;
}

private: System::Void bunifuImageButton1_Click(System::Object^ sender, System::EventArgs^ e) {//boton Eliminar
	pictureBox2->Visible = false;


	int longitud,valu;
	ListaDoble list;
	
	
	if (txtNum->Text->Length != 0)
	{
		list.addFromExcelInsert("examples.csv");//agrega desde un archivo excel
		valu = Convert::ToInt32(txtNum->Text);
		list.Mostrar();
		list.borrarValu(valu);
		std::cout << "la longitud de la lista es " << longitud << "\n";


		//codigo para pasar la lista al DataGriwview
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
			this->datas->Rows->Add(row);
			N = N->getSiguiente();
		}


		list.Mostrar();
		list.guardarListaENarchivo("examples.csv");
	}
	else {
		MessageBox::Show("No se digito el Id");
	}

}
private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox2->Visible = true;
	txtNum->Clear();
	datas->Rows->Clear();
}
private: System::Void btnComprar_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox2->Visible = false;

	ListaDoble list;
	ListaDoble listabuy;
	int longitud, value;
	bool buscar;
	int valu;

	
	
	list.addFromExcelData("examples.csv");//agrega desde un archivo excel
	//list.radix_sort();//para la busqueda binaria los datos tienen que estar ordenados
	list.ordenarPorId();
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
			//int nro;
			list.Mostrar();

			remove("examplesbuy.csv");
		//	S = listabuy.returLis();
			//nro = S->getId();
		//	listabuy.borrarValu(nro);
			//listabuy.~ListaDoble();

			//listabuy.borrarValu(valu);
		//	listabuy.elimin;
			//idCon = Convert::ToString(N->getId());
			//artisCon = gcnew String(N->getArtist().c_str());
			//autorCon = gcnew String(N->getAutor().c_str());
			//anioCon = Convert::ToString(N->getAnio()) + "\n";
			idObt = P->getId();
			artisObt = P->getArtist();
			autorObt = P->getAutor();
			anioObt = P->getAnio();
			//MensajeArtista += Convert::ToString(N->getArtist()) + "\n";
		//	Mensaje += idCon + " " + artisCon + " " + autorCon + " " + anioCon + "\n";
		//	array<System::Object^>^ row = { idCon, artisCon,autorCon,anioCon };
			//this->datas->Rows->Add(row);
			MessageBox::Show("Disco comprado con exito");
			listabuy.insertarInicio(idObt, artisObt, autorObt, anioObt);
			//	list.Mostrar();
			listabuy.Mostrar();
			//listabuy.borrarValu(16);
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
	
	



private: System::Void bunifuFlatButton5_Click(System::Object^ sender, System::EventArgs^ e) {
//this->ventanaAbout->ShowDialog();
	About^ c = gcnew About(this);

	//Form2^ frm2 = gcnew Form2(this);
	c->Show();


}


private: System::Void bunifuFlatButton6_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->ventanas->ShowDialog();
	Compras^ c= gcnew Compras(this);

	//Form2^ frm2 = gcnew Form2(this);
	c->Show();
}
private: System::Void btnBurbuja_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox2->Visible = false;


	int longitud;
	ListaDoble list;
	list.addFromExcelData("examples.csv");//agrega desde un archivo excel

	//list.ordenarPorFecha();
	//list.ordenarPorId();
	list.ordenarPorAutor();

	list.Mostrar();
	longitud = list.longitudLista();
	std::cout << "la longitud de la lista es " << longitud << "\n";



	//codigo para pasar la lista al DataGriwview
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
		this->datas->Rows->Add(row);
		N = N->getSiguiente();
	}
}
private: System::Void btnRadix_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox2->Visible = false;


	int longitud;
	ListaDoble list;
	list.addFromExcelData("examples.csv");//agrega desde un archivo excel
	list.radixSort();

	list.Mostrar();
	longitud = list.longitudLista();
	std::cout << "la longitud de la lista es " << longitud << "\n";



	//codigo para pasar la lista al DataGriwview
	Tlista N = list.returLis();
	String^ Mensaje = "";
	String^ idCon;
	String^ artisCon;
	String^ autorCon;
	String^ anioCon;

	while (N != NULL)
	{
		//MensajeAnio += Convert::ToString(N->getAnio()) + "\n";
		idCon = Convert::ToString(N->getId());
		artisCon = gcnew String(N->getArtist().c_str());
		autorCon = gcnew String(N->getAutor().c_str());
		anioCon = Convert::ToString(N->getAnio()) + "\n";
		//MensajeArtista += Convert::ToString(N->getArtist()) + "\n";
		Mensaje += idCon + " " + artisCon + " " + autorCon + " " + anioCon + "\n";
		array<System::Object^>^ row = { idCon, artisCon,autorCon,anioCon };
		this->datas->Rows->Add(row);
		N = N->getSiguiente();
	}
}
private: System::Void menuSideBar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (sideBar->Width == 235)
	{
		sideBar->Visible = false;
		sideBar->Width = 55;
		sideBarWrapper->Width = 250;
		BunifuAnimatorNS::Animation^ anim;
	
		animationSideBar->Show(sideBar, true, anim);

	}
	else {
		sideBar->Visible = false;
		sideBar->Width = 235;
		sideBarWrapper->Width = 250;
		BunifuAnimatorNS::Animation^ anims;
		animationSideBarback->Show(sideBar, true, anims);

	}
}



private: System::Void btnSelecSort_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox2->Visible = false;


	int longitud;
	ListaDoble list;
	list.addFromExcelData("examples.csv");//agrega desde un archivo excel
	list.metodoSelection(list.returLis());
	


	list.Mostrar();
	longitud = list.longitudLista();
	std::cout << "la longitud de la lista es " << longitud << "\n";



	//codigo para pasar la lista al DataGriwview
	Tlista N = list.returLis();
	String^ Mensaje = "";
	String^ idCon;
	String^ artisCon;
	String^ autorCon;
	String^ anioCon;

	while (N != NULL)
	{
		//MensajeAnio += Convert::ToString(N->getAnio()) + "\n";
		idCon = Convert::ToString(N->getId());
		artisCon = gcnew String(N->getArtist().c_str());
		autorCon = gcnew String(N->getAutor().c_str());
		anioCon = Convert::ToString(N->getAnio()) + "\n";
		//MensajeArtista += Convert::ToString(N->getArtist()) + "\n";
		Mensaje += idCon + " " + artisCon + " " + autorCon + " " + anioCon + "\n";
		array<System::Object^>^ row = { idCon, artisCon,autorCon,anioCon };
		this->datas->Rows->Add(row);
		N = N->getSiguiente();
	}
}
};
}
