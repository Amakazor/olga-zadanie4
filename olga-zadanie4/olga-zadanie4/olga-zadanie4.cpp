#include <iostream>

/*ZADANIE 4*/
/*Temat: pêtle while i do while, operator logiczny || */
int main()
{
	bool example = true; 

	if (example)
	{
		/*Przyk³ad 4.1*/
		/*Wypisanie co ósmej liczby z u¿yciem while*/
		{
			int number = 8;

			while (number < 1000)
			{
				std::cout << number << '\n';
				number += 8; //operator dodania do liczby
			}
		}
		/*KONIEC PRZYK£AD 4.1*/

		/*PRZYK£AD 4.2*/
		/*proszenie u¿ytkownika o wpisanie 1 a¿ do skutku*/
		{
			bool input_good = false;
			bool first_try = true;
			std::string input = "";

			do
			{
				if (!first_try)
				{
					std::cout << "to nie jest 1." << '\n';
				}

				std::cout << "wprowadz liczbe 1." << '\n';

				std::cin >> input;

				if (input == "1")
				{
					input_good = true;
				}
				else if (first_try)
				{
					first_try = false;
				}
				
			} while (input_good == false);

			std::cout << "Tak, to jest liczba 1" << '\n';
		}
		/*KONIEC PRZYK£AD 4.2*/

		/*PRZYK£AD 4.3*/
		// Operator logiczny ||
		{
			// || mo¿e zostaæ umieszczony w warunku if lub pêtli. £¹czy on dwa warunki spójnikiem logicznym OR czyli LUB (nie myliæ z ALBO).
			// Dla dwóch podwarunków ca³y warunek zwróci true, jeœli jeden lub oba z podwarunków zwróc¹ true.

			int example_number = 4;
			if (example_number == 6 || example_number == 4 || example_number == 25) //Warunek zwraca true, gdy wartoœæ example_number wynosi 6 lub 4 lub 25
			{
				std::cout << "Warunek spe³niony!\n";
			}
		}
		/*KONIEC PRZYK£AD 4.3*/
	}
	else
	{
		bool switch_current_exercise = false;

		/*ZADANIE 4.1*/
		// Przerób Twój kod z poprzedniego zadania. Wykorzystaj odpowiednie petle w celu sprawdzenia czy dane wprowadzone przez u¿ytkownika s¹ poprawne tak d³ugo, a¿ poda poprawne dane
		// 1. Wykorzystaj pêtle w wyborze w menu oraz przy podawaniu drugiej liczby jeœli wybrane zostanie dzielenie
		// 2. Poprawnoœæ danych w wyborze w menu sprawdŸ u¿ywaj¹c operatora ||
		if (!switch_current_exercise)
		{
			int liczba_jeden = 0;
			int liczba_dwa = 0;
			int u_input = 0;
			int suma = 0;


			std::cout << "Podaj pierwsza liczbe" << "\n\n";

			std::cin >> liczba_jeden;

			std::cout << "\n";

			std::cout << "#1. Dodawanie                   #" << "\n\n";
			std::cout << "#2. Odejmowanie                 #" << "\n\n";
			std::cout << "#3. Dzielenie                   #" << "\n\n";
			std::cout << "#4. Mnozenie                    #" << "\n\n";
			std::cout << "Podaj numer opcji" << "\n\n";

			std::cin >> u_input;

			std::cout << "\n";

			std::cout << "Podaj druga liczbe" << "\n\n";

			std::cin >> liczba_dwa;

			std::cout << "\n";

			switch (u_input)
			{
			case 1:
				suma = liczba_jeden + liczba_dwa;
				std::cout << "Twoj wynik wynosi: " << suma;
				break;

			case 2:
				suma = liczba_jeden - liczba_dwa;
				std::cout << "Twoj wynik wynosi: " << suma;
				break;

			case 3:

				if (liczba_dwa != 0)
				{
					suma = liczba_jeden / liczba_dwa;
					std::cout << "Twoj wynik to: " << suma;
				}

				else
				{
					std::cout << "\n";
					std::cout << "Nie mozna dzielic przez 0, wybierz inna liczbe" << "\n";
					std::cin >> liczba_dwa;
					std::cout << "\n";

					if (liczba_dwa != 0)
					{
						suma = liczba_jeden / liczba_dwa;
						std::cout << "Twoj wynik to: " << suma;
					}

					else
					{
						std::cout << "Jestes glupi" << "\n";
					}
				}

			case 4:

				suma = liczba_jeden * liczba_dwa;
				std::cout << "Twoj wynik wynosi: " << suma;

			default:

				std::cout << "Niepoprawna opcja" << "\n";

			}

			std::cout << "\n";
			std::cout << "Czy juz moge zarabiac 6tys netto?" << "\n";
		}
		else
		/*KONIEC ZADANIE 4.1*/

		/*ZADANIE 4.2*/
		// Kolejny raz napisz kod na potêgowanie. Tym razam skorzystaj z odpowiedniej pêtli, ¿eby móc wprowadziæ dowolny wyk³adnik
		// 1. pobierz z konsoli podstawê oraz wyk³adnik.
		// 2. opieraj¹c siê o wartoœæ wyk³adnika odpowiedni¹ liczbê razy przemnó¿ podstawê przez siebie.
		// 3. wypisz wynik na konsolê.
		// NOTATKA: W liczbach ca³kowitych powy¿ej 2147483647 bêd¹ pojawia³y siê b³êdy. To wina tego, ¿e int zajmuje w pamiêci ograniczone miejsce i gdy jego wartoœæ je przekroczy dziej¹ siê anomalne rzeczy.
		{
			
		}
		/*KONIEC ZADANIE 4.2*/
	}
}
