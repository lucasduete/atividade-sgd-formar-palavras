#include <iostream>
#include <string>
#include <vector>

int main(int argc, char const *argv[])
{
	std::string consoantes("BCDFGHJKLMNPQRSTVWXYZ");
	std::string vogais("AEIOU");

	std::vector<std::string> pares;

	for(int i = 0; i < consoantes.length(); ++i){
		std::string letra1 = {1, consoantes[i]};
		for(int j = 0; j < vogais.length(); ++j){
			std::string letra2 = {1, vogais[j]};

			pares.push_back(letra1+letra2);
		}
	}

	double count = 0;

	for(int i = 0; i < pares.size(); ++i){
		for(int j = 0; j < pares.size(); ++j){
			count++;
			std::cout << count << " - " << pares[i] + pares[j] << std::endl;
		}
	}

	return 0;
}