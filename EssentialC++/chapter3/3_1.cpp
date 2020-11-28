//写一个读取文本文件的程序，将文件中的每个单字存入map。map中的key便是刚才说的单字
//map的value则是该单字在文本文件中出现的次数。再定义一个由排除字眼组成的set。将某单字
//放入map之前先确认单字并不存在“排除字集”中。一旦文件读取完毕，显示一份单字清单，并显示各单字出现的次数
#include <map>
#include <set>
#include<string>
#include<iostream>
#include <fstream>

using namespace std;

void initialize_exclusion_set(set<string>&);
void process_file(map<string,int>&,const set<string>& ,ifstream&);
void user_query(const map<string,int>&);
void display_word_count(const map<string,int>&,ofstream&);

int main()
{
  ifstream ifile("./test.txt");
  ofstream ofile("./test.map");
  if(!ifile||!ofile)
  {
    cerr<<"open file error\n"<<endl;
    return -1;
  }
  set<string> 
}

