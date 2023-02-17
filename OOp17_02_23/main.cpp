#include <iostream>
#include <memory>

// SOLID

// Single Responsibility

// Open - Closed

// Liskov  Subsititution

// Interface segregation

// Dependency inversion

// програмные сущности должны быть открыты для , но закрыты для модификаций
// функции, которые используют базовый тип должны иметь возможность использовать подтипы базового типа не зная об этом
// много интерфейсов специально предназначенных для клиентов лучше, чем один интерфейс общего назначения 

// Паттерн проектирование: фабричный метод

// Базовый класс с фабричным методом

// class Dialog
// void render()
// abstract Button CreateButton () <- fabric method

// windowDialog: public Dialog
// Button createButton() returns windowsButton

// class WebDialog: public Dialog
// Button createButton() returns HTMLButton

class Button {
public:
	virtual void render() = 0;
	virtual ~Button(){ }
};

class WindowsButton :public Button {
public:
	void render() override {
		std::cout << "Render Windows Button \n";
	}
};

class HTMLButton : public Button {
public:
	void render()override {
		std::cout << "Render HTML Button\n";
	}
};

class Dialog {
public:
	void render() {
		std::shared_ptr<Button> button = createButton();
		button->render();
	}

	virtual std::shared_ptr<Button> createButton() = 0;
	virtual ~Dialog() { }
};

class WindowsDialog :public Dialog {
public:
	std::shared_ptr <Button> createButton() override{
		//std::shared_ptr<WindowsButton> btn = std::make_shared <WindowsButton>
		return std::make_shared<WindowsButton>();//return btn;
	}
};

class WebDialog : public Dialog {
public:
	std::shared_ptr<Button> createButton() override {
		return std::make_shared<HTMLButton>();
	}
};
//2
int main() {
	std::shared_ptr<Dialog> dialog;

	std::string config;
	std::cout << "Enter config (windows or web): ";
	std::cin >> config;

	if (config == "Windows") {
		dialog = std::make_shared<WindowsDialog>();
	}

	else if (config == "Web") {
		dialog = std::make_shared<WebDialog>();
	}

	else {
		throw "Error: unknown config";
	}

	dialog->render();


	// 2
	try {
		/*throw std::out_of_range("fpdkwflk");*/
		throw "denndfnd";
	 }
	catch (std::out_of_range& e) {

	}
	catch (const char* msg) {

	}
	return 0;
 }