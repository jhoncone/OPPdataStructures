#pragma once
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
#include <string.h>
#include "ListaDoble.h"
//#include <array>
//using namespace std;


namespace Projectpreueba {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de showForm
	/// </summary>
	public ref class showForm : public System::Windows::Forms::Form
	{
	public:
		showForm(void)
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
		~showForm()
		{
			if (components)
			{
				delete components;
			}
		}
		
	private: System::Windows::Forms::DataGridView^ data;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Artist;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Autor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Anio;
	protected:




		   //private: System::Windows::Forms::DataGridViewTextBoxColumn^ Product;




	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->data = (gcnew System::Windows::Forms::DataGridView());
			this->Artist = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Autor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Anio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data))->BeginInit();
			this->SuspendLayout();
			// 
			// data
			// 
			this->data->AllowUserToAddRows = false;
			this->data->AllowUserToDeleteRows = false;
			this->data->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Artist, this->Autor,
					this->Anio
			});
			this->data->Dock = System::Windows::Forms::DockStyle::Fill;
			this->data->Location = System::Drawing::Point(0, 0);
			this->data->Name = L"data";
			this->data->ReadOnly = true;
			this->data->Size = System::Drawing::Size(352, 293);
			this->data->TabIndex = 0;
			// 
			// Artist
			// 
			this->Artist->HeaderText = L"ARTIST";
			this->Artist->Name = L"Artist";
			this->Artist->ReadOnly = true;
			// 
			// Autor
			// 
			this->Autor->HeaderText = L"AUTOR";
			this->Autor->Name = L"Autor";
			this->Autor->ReadOnly = true;
			// 
			// Anio
			// 
			this->Anio->HeaderText = L"AÑO";
			this->Anio->Name = L"Anio";
			this->Anio->ReadOnly = true;
			// 
			// showForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(352, 293);
			this->Controls->Add(this->data);
			this->Name = L"showForm";
			this->Text = L"showForm";
			this->Load += gcnew System::EventHandler(this, &showForm::showForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void showForm_Load(System::Object^ sender, System::EventArgs^ e) {
		int longitud;
		ListaDoble list;
		list.addFromExcelData("examples.csv");//agrega desde un archivo excel
		//string[] ^ row1 =gcnew string[]{ "Meatloaf", "Main Dish", "ground beef" };
		//array< Int32 >^ local = gcnew array< Int32 >(ARRAY_SIZE);
		list.insertarInicio(10, "luis", "leis", 19);
		list.insertarInicio(11,"luiss", "leiss", 20);
		list.insertarxPosicion(2,12, "les", "hos", 21);
		list.Mostrar();
		longitud=list.longitudLista();
		std::cout << "la longitud de la lista es " << longitud << "\n";
		array<String^>^ gc3 = gcnew array<String^>(3) {
			"ales", "rauls", "carlos"

		};

		array<int>^ gc4 = gcnew array<int>(3) {
			18, 19, 20

		};
		/*
		for (int i = 0; i < 10; i++) {
			//Console::Write("[");
			//Console::Write(gc3[i]);
			//Console::Write(" ]");
			//	Console::WriteLine();
			//DataGridView::data->Rows.Add(gc3);
			for (int j = i; j < 3; j++)
			{
				this->data->Rows[i]->Cells[j]->Value =gc3[j];
			}
		}
		*/

		/*
		int i = 0, j = 0;
		while (i < 3)
		{
			this->data->Rows[i]->Cells[j]->Value = gc3;

			j++;
			if (j % 4 == 0)
			{
				j = 0;
				i++;
			}
		}
		*/

		//array<System::Object^>^ row = { oleDbDataReader[0], oleDbDataReader[1], oleDbDataReader[2],
			//   oleDbDataReader[3], oleDbDataReader[4], thisDate, oleDbDataReader[6] };
	//	this->data->Rows->Add(row);


		//codigo para pasar la lista al DataGriwview

		Tlista N =list.returLis();
		String^ Mensaje = "";
		String^ artisCon;
		String^ autorCon;
		String^ anioCon;

		while (N != NULL)
		{
			//MensajeAnio += Convert::ToString(N->getAnio()) + "\n";
			artisCon = gcnew String(N->getArtist().c_str());
			autorCon = gcnew String(N->getAutor().c_str());
			anioCon = Convert::ToString(N->getAnio()) + "\n";
			//MensajeArtista += Convert::ToString(N->getArtist()) + "\n";
			Mensaje += artisCon + " " + autorCon + " " + anioCon + "\n";
			array<System::Object^>^ row = { artisCon,autorCon,anioCon };
			this->data->Rows->Add(row);
			N = N->getSiguiente();
		}
		list.guardarListaENarchivo("exampless.csv");

		//codigo para añadir array al DataGriewView
	//	for (int i = 0; i < 3; i++)
		//{
		//	array<System::Object^>^ row = { gc3[i],gc4[i] };
		//this->data->Rows->Add(row);
//	}
		
		//
		/*
		string artist = "luis";
		this->data->RowCount = 50;
		String^ artisCon;
		artisCon = gcnew String(artist.c_str());
		int i = 0, j = 0;
		while (i <10)
		{
			this->data->Rows[i]->Cells[j]->Value = artisCon;
			j++;
			if (j % 4 == 0)
			{
				j = 0;
				i++;
			}
		}
		*/

		//ifstream fs("examples.csv");       
		/*
		if (fs.is_open())
		{
		   char word[20];
		   int i = 0, j = 0;

		   fs>>word;
		   while(fs.good())
		   {
			   String^ tmp = gcnew String(word);
			   this->data->Rows[i]->Cells[j]->Value = (Object^)tmp;

			   j++;
			   if (j % 4 == 0)
			   {
				   j = 0;
				   i++;
			   }

			   fs>>word;
		   }

		   fs.close();
		   this->data->RowCount = i;
		}
		else
			MessageBox::Show("No data", "Error");
	}
	*/
	}

	};
	}
