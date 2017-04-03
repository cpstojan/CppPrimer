// what does the following program do

int main () {
	int i = 42;
	int * p1 = &i; // an int pointer is assigned to the address of i
	*p1 = *p1 * *p1; // i is squared
}
