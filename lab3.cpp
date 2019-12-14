#include <iostream>

using namespace std;

//один вариант упорядочивания
struct Book1 {
	char title[20];
	size_t pagesCount;
	bool availability;
	char surnameOfAuthor[20];
	size_t edition;
	short chaptersCount;
};

//другой вариант упорядочивания
struct Book2 {
	char title[20];
	char surnameOfAuthor[20];
	size_t pagesCount;
	size_t edition;
	short chaptersCount;
	bool availability;
};

//первый вариант упорядочивания с выравниванием
#pragma pack(push, 1)
struct Book3 {
	char title[20];
	size_t pagesCount;
	bool availability;
	char surnameOfAuthor[20];
	size_t edition;
	short chaptersCount;
};
#pragma pack(pop)

//второй вариант упорядочивания с выравниванием
#pragma pack(push, 1)
struct Book4 {
	char title[20];
	char surnameOfAuthor[20];
	size_t pagesCount;
	size_t edition;
	short chaptersCount;
	bool availability;
};
#pragma pack(pop)

int main()
{
	Book1 book1;
	Book2 book2;
	Book3 book3;
	Book4 book4;

	cout
		<< "Book1 :" << "\n "
		<< (void*)book1.title << "\n"
		<< &book1.pagesCount << "\n"
		<< &book1.availability << "\n"
		<< (void*)book1.surnameOfAuthor << "\n"
		<< &book1.edition << "\n"
		<< &book1.chaptersCount << "\n"
		<< sizeof(book1.title) + sizeof(book1.pagesCount) + sizeof(book1.availability) + sizeof(book1.chaptersCount) + sizeof(book1.edition) + sizeof(book1.surnameOfAuthor) << "\n"
		<< sizeof(book1) << "\n"

		<< "Book2 :" << "\n "
		<< (void*)book2.title << "\n"
		<< (void*)book2.surnameOfAuthor << "\n"
		<< &book2.pagesCount << "\n"
		<< &book2.edition << "\n"
		<< &book2.chaptersCount << "\n"
		<< &book2.availability << "\n"
		<< sizeof(book2.title) + sizeof(book2.pagesCount) + sizeof(book2.availability) + sizeof(book2.chaptersCount) + sizeof(book2.edition) + sizeof(book2.surnameOfAuthor) << "\n"
		<< sizeof(book2) << "\n"
		
		<< "Book3 :" << "\n "
		<< (void*)book3.title << "\n"
		<< &book3.pagesCount << "\n"
		<< &book3.availability << "\n"
		<< (void*)book3.surnameOfAuthor << "\n"
		<< &book3.edition << "\n"
		<< &book3.chaptersCount << "\n"
		<< sizeof(book3.title) + sizeof(book3.pagesCount) + sizeof(book3.availability) + sizeof(book3.chaptersCount) + sizeof(book3.edition) + sizeof(book3.surnameOfAuthor) << "\n"
		<< sizeof(book3) << "\n"

		<< "Book4 :" << "\n "
		<< (void*)book4.title << "\n"
		<< (void*)book4.surnameOfAuthor << "\n"
		<< &book4.pagesCount << "\n"
		<< &book4.edition << "\n"
		<< &book4.chaptersCount << "\n"
		<< &book4.availability << "\n"
		<< sizeof(book4.title) + sizeof(book4.pagesCount) + sizeof(book4.availability) + sizeof(book4.chaptersCount) + sizeof(book4.edition) + sizeof(book4.surnameOfAuthor) << "\n"
		<< sizeof(book4) << "\n";
	
		return 0;
}
