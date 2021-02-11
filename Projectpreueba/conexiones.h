#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;
#include "Forms2.h"


ref class conexiones
{
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;

	//public:
		//conexion();

protected:
	void conectar()
	{
		st = gcnew SqlConnectionStringBuilder();
		//st->DataSource = "LAPTOP-F42TTN53\\JONATAN";
		st->DataSource = "localhost";
		st->InitialCatalog = "USERS";
		st->IntegratedSecurity = true;

		cn = gcnew SqlConnection(Convert::ToString(st));
	}

public:
	void Insertar(int id,String^ nombre, String^ autors, int anio)
	{
		conectar();
		
		String^ sentencia = "Insert into Disc  values(@ids,@name,@autor,@anio)";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia,cn);
		ejecutar->Parameters->AddWithValue("@ids", id);
		ejecutar->Parameters->AddWithValue("@name", nombre);
		ejecutar->Parameters->AddWithValue("@autor", autors);
		ejecutar->Parameters->AddWithValue("@anio", anio);
		
		cn->Open();
		ejecutar->ExecuteNonQuery();
		cn->Close();
	}
	void Modificar(int id,String^ nombre, String^ autorss, int anio)
	{
		conectar();

		String^ sentencia = "UPDATE Disc SET id=@ids, nombre=@name,autorss=@autor,anio=@anio Where id=@ids";
		cn->Open();
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@ids", id);
		ejecutar->Parameters->AddWithValue("@name", nombre);
		ejecutar->Parameters->AddWithValue("@autor", autorss);
		ejecutar->Parameters->AddWithValue("@anio", anio);

		//cn->Open();
		ejecutar->ExecuteNonQuery();
		cn->Close();
	}
	/*
	bool discoRegistrado(String^ buscar)
	{

		try
		{
			bool busc=false;

			return busc;


		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
		finally
		{
			cn->Close();
		}

	}
	*/


	void mostrarDisco()
	{
		try {
			conectar();
			//Sql Command=
			String^ sentencia2 = "Select  LoginName , Password FROM Userss ";

			SqlCommand^ ejecutar = gcnew SqlCommand(sentencia2, cn);


			SqlDataAdapter^ sda = gcnew SqlDataAdapter(ejecutar);
			//	DataTable^ dt = gcnew DataTable();
			DataSet^ ds = gcnew DataSet;
			sda->Fill(ds,"Discos");
			if (ds)
			{
	
			}
			else {
				MessageBox::Show("datos");
			}


		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
		finally
		{
			cn->Close();
		}




	}

	//void Logear(String^ user, String^ password)
	bool Logear(String^ user, String^ password)
	{
		bool band = false;
		try {
			conectar();
			//Sql Command=
			String^ sentencia2 = "Select  LoginName , Password FROM Userss Where LoginName=@LoginName AND Password=@Password";

			SqlCommand^ ejecutar = gcnew SqlCommand(sentencia2, cn);
			ejecutar->Parameters->AddWithValue("@LoginName", user);
			ejecutar->Parameters->AddWithValue("@Password", password);

			SqlDataAdapter^ sda = gcnew SqlDataAdapter(ejecutar);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			if (dt->Rows->Count == 1)
			{ 
				Console::Write("Login successfuly");
				MessageBox::Show("Login Successfuly");
				//Application::Exit();
				band = true;
			}
			else {
				MessageBox::Show("Usuario y/o contraseña Incorrecta");

			}

			
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
		finally
		{
			cn->Close();
		}
		return band;
	}

	void consultar(String^ nombre, String^ autorss, int codigo)
	{
		conectar();
		SqlDataReader^ myreader;

		cn->Open();
		//	myreader=cmdDataBase

	}

};

