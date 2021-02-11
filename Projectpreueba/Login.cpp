#include "stdafx.h"
#include "Login.h"




using namespace Projectpreueba;
[STAThreadAttribute]

int main(array<System::String^>^ args)
{
   
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

 

    Login^ l = gcnew Login();         
    l->Show();
    Application::Run();

    return 0;
}
