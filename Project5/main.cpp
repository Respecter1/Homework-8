/*
	5. Жучки: знайдіть помилку у наступному фрагменті програми.
	Відповідь: 
				Перш ніж  присвоїти значення через вказівник,
				треба ініціалізувати вказівник, 
				щоб він вказував на дійсну область пам'яті.
*/

#include <iostream>

using namespace std;

int main()
{
	int i_nt;
	int*pInt = &i_nt;
	*pInt = 9;
	cout << " The value at pInt: " << *pInt;

	return 0;
}

