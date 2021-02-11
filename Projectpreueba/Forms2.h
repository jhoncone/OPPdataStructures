#pragma once
#include "ListaDoble.h"

namespace Projectpreueba {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form1
	/// </summary>
	public ref class Forms2 : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::Form^ otherform;
	public:
		Forms2(System::Windows::Forms::Form^ frm1)
		{
			otherform = frm1;
			InitializeComponent();

		}
/*
	public:
		Forms2(void)
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
		~Forms2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI2::WinForms::Guna2ShadowPanel^ guna2ShadowPanel1;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^ table;




	private: Bunifu::Framework::UI::BunifuGradientPanel^ sideBar;
	private: Bunifu::Framework::UI::BunifuImageButton^ btnClose;
	private: Bunifu::Framework::UI::BunifuImageButton^ btnMinimizar;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;




	protected:





	protected:




	protected:




	protected:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Forms2::typeid));
			this->guna2ShadowPanel1 = (gcnew Guna::UI2::WinForms::Guna2ShadowPanel());
			this->table = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->sideBar = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->btnMinimizar = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->btnClose = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->guna2ShadowPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->BeginInit();
			this->sideBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMinimizar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnClose))->BeginInit();
			this->SuspendLayout();
			// 
			// guna2ShadowPanel1
			// 
			this->guna2ShadowPanel1->BackColor = System::Drawing::Color::Transparent;
			this->guna2ShadowPanel1->Controls->Add(this->table);
			this->guna2ShadowPanel1->FillColor = System::Drawing::Color::White;
			this->guna2ShadowPanel1->Location = System::Drawing::Point(8, 27);
			this->guna2ShadowPanel1->Name = L"guna2ShadowPanel1";
			this->guna2ShadowPanel1->ShadowColor = System::Drawing::Color::Black;
			this->guna2ShadowPanel1->Size = System::Drawing::Size(495, 433);
			this->guna2ShadowPanel1->TabIndex = 4;
			// 
			// table
			// 
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->table->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->table->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->table->BackgroundColor = System::Drawing::Color::White;
			this->table->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->table->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->table->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.75F));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->table->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->table->DefaultCellStyle = dataGridViewCellStyle3;
			this->table->DoubleBuffered = true;
			this->table->EnableHeadersVisualStyles = false;
			this->table->HeaderBgColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->table->HeaderForeColor = System::Drawing::Color::White;
			this->table->Location = System::Drawing::Point(15, 17);
			this->table->Name = L"table";
			this->table->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->table->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->table->RowHeadersVisible = false;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(191)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::White;
			this->table->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->table->Size = System::Drawing::Size(461, 413);
			this->table->TabIndex = 0;
			// 
			// sideBar
			// 
			this->sideBar->BackColor = System::Drawing::Color::Transparent;
			this->sideBar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sideBar.BackgroundImage")));
			this->sideBar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->sideBar->Controls->Add(this->btnMinimizar);
			this->sideBar->Controls->Add(this->btnClose);
			this->sideBar->Controls->Add(this->guna2ShadowPanel1);
			this->sideBar->GradientBottomLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->sideBar->GradientBottomRight = System::Drawing::Color::White;
			this->sideBar->GradientTopLeft = System::Drawing::Color::White;
			this->sideBar->GradientTopRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->sideBar->Location = System::Drawing::Point(2, 2);
			this->sideBar->Name = L"sideBar";
			this->sideBar->Quality = 10;
			this->sideBar->Size = System::Drawing::Size(506, 475);
			this->sideBar->TabIndex = 5;
			// 
			// btnMinimizar
			// 
			this->btnMinimizar->BackColor = System::Drawing::Color::Transparent;
			this->btnMinimizar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimizar.Image")));
			this->btnMinimizar->ImageActive = nullptr;
			this->btnMinimizar->Location = System::Drawing::Point(427, 3);
			this->btnMinimizar->Name = L"btnMinimizar";
			this->btnMinimizar->Size = System::Drawing::Size(31, 28);
			this->btnMinimizar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnMinimizar->TabIndex = 11;
			this->btnMinimizar->TabStop = false;
			this->btnMinimizar->Zoom = 10;
			this->btnMinimizar->Click += gcnew System::EventHandler(this, &Forms2::btnMinimizar_Click);
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::Transparent;
			this->btnClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClose.Image")));
			this->btnClose->ImageActive = nullptr;
			this->btnClose->Location = System::Drawing::Point(464, 3);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(31, 28);
			this->btnClose->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnClose->TabIndex = 10;
			this->btnClose->TabStop = false;
			this->btnClose->Zoom = 10;
			this->btnClose->Click += gcnew System::EventHandler(this, &Forms2::btnClose_Click);
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
			// Forms2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(509, 480);
			this->ControlBox = false;
			this->Controls->Add(this->sideBar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Forms2";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Forms2::Form1_Load);
			this->guna2ShadowPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->EndInit();
			this->sideBar->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMinimizar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnClose))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		int longitud;
		table->Rows->Clear();
		ListaDoble list;
		list.addFromExcelData("examples.csv");//agrega desde un archivo excel
	
		list.Mostrar();
		longitud = list.longitudLista();
		std::cout << "la longitud de la lista es " << longitud << "\n";
		list.borrarValu(14);
	
		//list.modificarValu(8, "yat", "sebas", 2019);

		Tlista N = list.returLis();
		String^ Mensaje = "";
		String^ idCon;
		String^ artisCon;
		String^ autorCon;
		String^ anioCon;

		while (N != NULL)
		{
			//MensajeAnio += Convert::ToString(N->getAnio()) + "\n";
			idCon = Convert::ToString(N->getId()) ;
			artisCon = gcnew String(N->getArtist().c_str());
			autorCon = gcnew String(N->getAutor().c_str());
			anioCon = Convert::ToString(N->getAnio()) + "\n";
			//MensajeArtista += Convert::ToString(N->getArtist()) + "\n";
			Mensaje += idCon+" "+artisCon + " " + autorCon + " " + anioCon + "\n";
			array<System::Object^>^ row = {idCon, artisCon,autorCon,anioCon };
			this->table->Rows->Add(row);
			N = N->getSiguiente();
		}
		//list.guardarListaENarchivo("exampless.csv");

		//conexion conex;

		//table->DataSource = conex.mostrarDisco();
		//table->Rows->Clear();

	}
	private: System::Void btnMinimizar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	
	}
private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	otherform->Show();
}
};
}
