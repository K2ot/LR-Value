#include <iostream>

void printValue(const int& x) noexcept
{
	std::cout << " &: " << x << "\n";
}

void printValue(const int&& x) noexcept
{
	std::cout << "&&: " << x << "\n";
}

class LR_Value
{
public:
	// Funkcja składowa wywoływana tylko na l-value
	void show() & noexcept
	{
		std::cout << "Called on l-value (persistent object)\n";
	}

	// Funkcja składowa wywoływana tylko na r-value
	void show() && noexcept
	{
		std::cout << "Called on r-value (temporary object)\n";
	}
};

int main()
{
	int x{ 5 };
	printValue(x);
	printValue(10);

	LR_Value p;
	p.show();

	LR_Value().show();
}

