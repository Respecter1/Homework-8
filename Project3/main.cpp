
/*
	3. За допомогою вказівника присвойте змінній вашого значення 50.
*/
int main()
{
	unsigned short yourAge;
	unsigned short* ptr_yourAge = &yourAge;

	*ptr_yourAge = 50;
}
