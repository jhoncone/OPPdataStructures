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

	/// <summary>
	/// Resumen de Buscar
	/// </summary>
	public ref class Buscar : public System::Windows::Forms::Form
	{
	public:
		Buscar(void)
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
		~Buscar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuGradientPanel^ bunifuGradientPanel1;
	protected:
	private: Guna::UI2::WinForms::Guna2HtmlLabel^ guna2HtmlLabel1;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^ table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Buscar::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->bunifuGradientPanel1 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->table = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->guna2HtmlLabel1 = (gcnew Guna::UI2::WinForms::Guna2HtmlLabel());
			this->bunifuGradientPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->BeginInit();
			this->SuspendLayout();
			// 
			// bunifuGradientPanel1
			// 
			this->bunifuGradientPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel1.BackgroundImage")));
			this->bunifuGradientPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel1->Controls->Add(this->table);
			this->bunifuGradientPanel1->Controls->Add(this->guna2HtmlLabel1);
			this->bunifuGradientPanel1->GradientBottomLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(231)));
			this->bunifuGradientPanel1->GradientBottomRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->bunifuGradientPanel1->GradientTopLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(121)));
			this->bunifuGradientPanel1->GradientTopRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->bunifuGradientPanel1->Location = System::Drawing::Point(-6, 12);
			this->bunifuGradientPanel1->Name = L"bunifuGradientPanel1";
			this->bunifuGradientPanel1->Quality = 10;
			this->bunifuGradientPanel1->Size = System::Drawing::Size(527, 495);
			this->bunifuGradientPanel1->TabIndex = 0;
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
			this->table->Location = System::Drawing::Point(18, 79);
			this->table->Name = L"table";
			this->table->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->table->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->table->RowHeadersVisible = false;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::Blue;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::White;
			this->table->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->table->Size = System::Drawing::Size(461, 413);
			this->table->TabIndex = 1;
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
			this->dataGridViewTextBoxColumn3->HeaderText = L"AUTOR";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"AÑO";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// guna2HtmlLabel1
			// 
			this->guna2HtmlLabel1->BackColor = System::Drawing::Color::Transparent;
			this->guna2HtmlLabel1->ForeColor = System::Drawing::Color::White;
			this->guna2HtmlLabel1->Location = System::Drawing::Point(18, 33);
			this->guna2HtmlLabel1->Name = L"guna2HtmlLabel1";
			this->guna2HtmlLabel1->Size = System::Drawing::Size(475, 40);
			this->guna2HtmlLabel1->TabIndex = 0;
			this->guna2HtmlLabel1->Text = L"Resumen de Discos Comprados";
			// 
			// Buscar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(531, 507);
			this->Controls->Add(this->bunifuGradientPanel1);
			this->Name = L"Buscar";
			this->Text = L"Buscar";
			this->Load += gcnew System::EventHandler(this, &Buscar::Buscar_Load);
			this->bunifuGradientPanel1->ResumeLayout(false);
			this->bunifuGradientPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->EndInit();
			this->ResumeLayout(false);

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
#pragma endregion
	private: System::Void Buscar_Load(System::Object^ sender, System::EventArgs^ e) {
		int longitud,nro;
		ListaDoble list;
		BinaryTree tree;
		table->Rows->Clear();
		remove("arbolesPos.csv");
		
		//list.addFromExcelData("examplesbuy.csv");//agrega desde un archivo excel
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

		list.Mostrar();
		
		longitud = list.longitudLista();
		std::cout << "la longitud de la lista es:" << longitud << "\n";
	//	list.borrarValu(14);
		nro=tree.cont(tree.returnRaiz());
		std::cout << "la cantidad  de nodos del arbol es: " << nro << "\n";
		//list.modificarValu(8, "yat", "sebas", 2019);

		Tlista N = list.returLis();
		Tree ABB = tree.returnRaiz();
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
			this->table->Rows->Add(row);
			N = N->getSiguiente();
		}
		

        


		//list.guardarListaENarchivo("exampless.csv");

		//conexion conex;

		//table->DataSource = conex.mostrarDisco();
		//table->Rows->Clear();

	}

};
}
