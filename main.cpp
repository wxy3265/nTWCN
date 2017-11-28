#include <iostream>
#include <conio.h>
#include <fstream>
#include <windows.h>

using namespace std;

int main (int argc, char *argv[])
{
	
	system("cls");
	
	if (argv[1] == NULL) {
		cerr << "未指明文件地址" << endl;
		return 1;
	}
	const string FILE_NAME = argv[1];
	ifstream fin;
	ofstream fout;
	fin.open(FILE_NAME);
	if(! fin.is_open()) {
		cerr << "打开文件出错" << endl;
		return 1;
	}

	string a;
	char ch;
	while(fin.read(&ch, 1))	{
		a += ch;
	}//读取文件
	cout << a;

	int hlong;
	char f, c;
	while(1) {
		c = getch();
		if (c == '\e'){ //"ESC"
			system("cls");
			break;
		} else if (c == 13) { //"Enter"
			cout << "\n";
			a += '\n';
		} else if (c == '\b') {
			a.erase(a.size());
			//if (f == '\n') {
				system("cls");
				cout << a;
			//}
		} else {
			a += c;
			cout << c;
		}
		if (c != '\b')
			f = c;
	}
} 
