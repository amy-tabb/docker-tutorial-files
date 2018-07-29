#include <iostream>
#include <string>
#include <fstream> 
using namespace std;
     
int main(int argc, char **argv)
{
  cout << "Hello world 2, with a directory and arguments!" << endl;
  
  ofstream out;
  string val;
  if (argc >= 2){
	val = argv[1];
	cout << "Directory is : " << val << endl;
       
        string filename = val + "/test_write.txt";
	out.open(filename.c_str());
	out << "HELLO WORLD FROM A BINDMOUNT!" << endl;
	 for (int i = 2; i < argc; i++){
		val = argv[i];
        	cout << "Argument " << i << " " << val << endl;
		out << "Argument " << i << " " << val << endl;
  	}
	out.close();	
  } else

 
  return 0;
}
