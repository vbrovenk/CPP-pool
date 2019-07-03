#include <iostream>


struct Data {
	 
	 std::string s1;
	 int n;
	 std::string s2;
};

// void * serialize( void )
// {
// 	srand(time(NULL));

// 	std::string *s1 = new std::string();
// 	std::string *s2 = new std::string();


// 	std::string alphanumerical = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

// 	for (int i = 0; i < 8; i++)
// 	{

// 		*s1 += alphanumerical[rand() % 61];
// 		*s2 += alphanumerical[rand() % 61];
// 	}

// 	Data *data = new Data;
// 	data->s1 = *s1;
// 	data->n = rand();
// 	data->s2 = *s2;


// 	std::cout << "======= SERIALIZED DATA ========" << std::endl;

// 	std::cout << "s1 = " << data->s1 << std::endl;
// 	std::cout << "n = " << data->n << std::endl;
// 	std::cout << "s2 = " << data->s2 << std::endl;

// 	void * result = reinterpret_cast<void *> (data);
// 	return result;
// }

// Data * deserialize( void * raw )
// {
// 	Data *data = reinterpret_cast<Data *> (raw);

// 	return data;
// }

void * serialize( void )
{
	srand(time(NULL));
	char *data = new char[20];

	std::string alphanumerical = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	for (int i = 0; i < 8; i++)
	{

		data[i] = alphanumerical[rand() % 61];
		data[i + 12] = alphanumerical[rand() % 61];
	}
	for (int i = 8; i < 12; i++)
	{
		data[i] = rand() % 255;
	}

	std::cout << "======= SERIALIZED DATA ========" << std::endl;

	for (int i = 0; i < 20; i++)
		std::cout << data[i];
	std::cout << std::endl;

	int *nbr = reinterpret_cast<int *> (data + 8);
	std::cout << "nbr = " << *nbr << std::endl;

	void * result = reinterpret_cast<void *> (data);
	return result;
}

Data * deserialize( void * raw )
{
	Data *unser = new Data;

	char *data = reinterpret_cast<char *> (raw);

	for (int i = 0; i < 8; i++)
	{

		unser->s1 += data[i];
		unser->s2 += data[i + 12];
	}
	int *nbr = reinterpret_cast<int *> (data + 8);

	unser->n = *nbr;

	return unser;
}

int main(void)
{

	void * serialized_data = serialize();

	Data *data = deserialize(serialized_data);

	std::cout << "======= UNSERIALIZED DATA ========" << std::endl;

	std::cout << "s1 = " << data->s1 << std::endl;
	std::cout << "n = " << data->n << std::endl;
	std::cout << "s2 = " << data->s2 << std::endl;

	return 0;
}