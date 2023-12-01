//main.cpp

#include "upload.h"
#include "selection.h"

//#include "upload.cpp"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<System::String^>^ args) {
    // Start your application or create an instance of your form here
    graphproject::upload^ form = gcnew graphproject::upload();

    // Run the application
    Application::Run(form);

    return 0;
}
