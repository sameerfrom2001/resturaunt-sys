#include "mainForm.h"
#include "Chef.h"
#include "Customer.h"
#include <iostream>

using namespace System::Windows::Forms;
Manager man1;
Customer cust;
string orderid ="5000";
Manager manSearch;
Chef chefSearch;
Manager manc;
Chef chefc;
int ordercount = 0;
int main()
{


	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	RestaurantSystem::mainForm form;
	Application::Run(% form);
}

