#include <fstream>
#include <vector>

using namespace std;


int main()
{
  //reading and writing raw data to / from binary files


  // data to write to a binary file:
  vector<unsigned char> output {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

  // open a file stream for writing in a binary mode
  ofstream ofile("exercise1.txt", ios::binary); // what's ios?

  // make sure if file is actually open before writing into it
  if(ofile.is_open())
  {
    // write data to the file by providing a pointer to the array of characters and the number of characters to write
    ofile.write(reinterpret_cast<char*>(output.data(), output.size()));
    // close the stream
    ofile.close();
  }

  return 0;
}