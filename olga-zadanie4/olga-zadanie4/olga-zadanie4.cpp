#include <iostream>

/*ZADANIE 4*/
/*Temat: pêtle while i do while, operator logiczny || */

int main()
{
	bool example = false; 

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
		/*KONIEC PRZYK£AD 4.1*//*PRZYK£AD 4.2*/
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
		bool switch_current_exercise = true;

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
			bool rigth_try = false;
			bool false_try = true;
			bool right_try_2 = false;
			bool false_try_2 = true;

		
			

			std::cout << "Podaj pierwsza liczbe" << "\n\n";

			std::cin >> liczba_jeden;

			std::cout << "\n";

			std::cout << "#1. Dodawanie                   #" << "\n\n";
			std::cout << "#2. Odejmowanie                 #" << "\n\n";
			std::cout << "#3. Dzielenie                   #" << "\n\n";
			std::cout << "#4. Mnozenie                    #" << "\n\n";
			
			
			do
			{	
				if (!false_try)
				{
					std::cout << "Wybrales bledny numer dzialania" << "\n\n";
				}
				
				std::cout << "Podaj numer opcji" << "\n\n";
				std::cin >> u_input;
				std::cout << "\n\n";

				if (u_input == 1 || u_input == 2 || u_input == 3 || u_input == 4)
				{
					rigth_try = true;
				}

				else if (false_try)
				{
					false_try = false;
				}

			} while (rigth_try == false);
			

			switch (u_input)
			{
			case 1:

				std::cout<< "Podaj druga liczbe" << "\n\n";
				std::cin >> liczba_dwa;
				std::cout<< "\n\n";
				suma = liczba_jeden + liczba_dwa;
				std::cout << "Twoj wynik wynosi: " << suma;
				break;

			case 2:

				std::cout << "Podaj druga liczbe" << "\n\n";
				std::cin >> liczba_dwa;
				std::cout << "\n\n";
				suma = liczba_jeden - liczba_dwa;
				std::cout << "Twoj wynik wynosi: " << suma;
				break;

			case 3:

				do
				{	if (!false_try_2)
					{
					std::cout << "Nie mozna dzielic przez 0, sprobuj jeszcze raz" << "\n\n";
					}

					std::cout << "Podaj druga liczbe" << "\n\n";
					std::cin >> liczba_dwa;
					std::cout << "\n\n";

					if (liczba_dwa != 0)
					{
						suma = liczba_jeden / liczba_dwa;
						std::cout << "Twoj wynik wynosi: " << suma << "\n\n";
						right_try_2 = true;
					}
					else
					{
						false_try_2 = false;
					}
				} while (right_try_2 == false);

				break;



			case 4:

				suma = liczba_jeden * liczba_dwa;
				std::cout << "Twoj wynik wynosi: " << suma;

				break;

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
			int podstawa = 0;
			int wykladnik = 1;
			int suma = 1;

			std::cout << "Podaj prosze podstawe potegi" << "\n\n";
			std::cin >> podstawa;
			std::cout << "\n\n" << "Podaj prosze wykladnik potegi" << "\n\n";
			std::cin >> wykladnik;
			std::cout << "\n\n";

			while (wykladnik > 0)
			{
				
				suma *= podstawa;
				wykladnik--;
			}
			
			std::cout << suma << "\n\n";
			 
			
		}


		std::cout << "Mam calkiem fajnego mezczyzne \n\n";	
















































		std::cout << "Ewentualnie, ze jest irytujacy \n\n";



















		std::cout << "Wtedy musi odpokutowac \n\n";
		
	}
}
