
#include <fstream>
#include <iostream>
//исмисии
//tryrtyrty

using namespace std;

struct _score
{
    char name[20];
    int score;
};
 
int main()
{
  _score arScore[] = {{"Dima",2} ,{"Vasya", 1}};
  _score arScoreRead[20];

  fstream file;
  char str[50];
  //file.open("c:\\Project1\\file.txt",ios::out | ios::binary | ios::trunc);
   file.open("c:\\Project1\\file.txt",ios::in | ios::binary);
  if(!file.is_open())
  {
    cout << "Filed open file!" << endl;
  }
  else
  {
     file.seekg(0,ios_base::end);
    int n=file.tellg()/sizeof(_score);
     file.seekg(0,ios_base::beg);
   // cout << n;
    for(int i=0;i<n;i++)
    {
       // file.write((char *)&(arScore[i]),sizeof(_score));
         file.read((char *)&(arScoreRead[i]),sizeof(_score));
         cout << arScoreRead[i].name << endl;
    }

  }
  file.close();
  system("pause");
}







//  struct _score
//  {
//     char name[20]={'\0'};
//     int score=0;
//  };

// int main(int argc, char* argv[])
// {
//     _score arScore[2];
//     strcpy(arScore[0].name,"Dima");
//     arScore[0].score=5;
//     strcpy(arScore[1].name,"Vasya");
//     arScore[1].score=6;

//     setlocale(LC_ALL, "rus"); // корректное отображение Кириллицы
//     char buff[50]={'D','i','m','a','\0'}; // буфер промежуточного хранения считываемого из файла текста
//     fstream fin; //("c:\\Project1\\cppstudio.txt", std::ios::out | std::ios::trunc); 
//    fin.open("c:\\Project1\\cppstudio.txt",ios:: out | ios::trunc |  std::ios::binary);// открыли файл для чтения
//      if (!fin.is_open()) // если файл не открыт
//         cout << "File not open!\n"; // сообщить об этом
//     else
//     {
//          fin.write((char*)&(arScore[0]),sizeof(_score));
//          fin.write((char*)&(arScore[1]),sizeof(_score));
//          fin.close();
//          fin.open("c:\\Project1\\cppstudio.txt", ios::in |  std::ios::binary);// открыли файл для чтения
//         // fin.seekg(0,ios_base::end);

//         // cout << fin.tellg() << endl;

//         _score arScore1[2];
//         fin.read((char*)&(arScore1[0]),sizeof(_score));
//         cout << fin.tellg() << endl;
//         fin.read((char*)&(arScore1[1]),sizeof(_score));
//         fin.close();
//         cout << "Name:"<<endl;
//         cout << arScore1[0].name;
//     // fin << buff;
//     // fin >> buff; // считали первое слово из файла
//     // cout << buff << endl; // напечатали это слово
 
//     // fin.getline(buff, 50); // считали строку из файла
//     // fin.close(); // закрываем файл
//     // cout << buff << endl; // напечатали эту строку
//     }
//     system("pause");
//     return 0;
// }