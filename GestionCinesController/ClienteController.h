#pragma once

namespace GestionCinesController {


	using namespace GestionCinesModel;
	using namespace System::Collections::Generic;
	using namespace System;

	public ref class ClienteController {
	private:
		int Existe;

	public:
		ClienteController();
		int validarExisteCliente(String^ dni,String^ contrasenha);
	};

}