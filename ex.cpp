

    #include <iostream>
    #include <fstream>
    using namespace std;

    int main (int argc, char *argv[] ){

    if(argc<2){
    	cout<<"File name missing!"<<endl;
    	cout<<"Usage: "<<argv[0]<<" file_path_name"<<endl;
    	return -1;
    }

     //Here we open the file output stream for appending data to the file.
      ofstream file_output_stream(argv[1], ios::app);

    //Here we check whether the file is opened or not. 
    if(!file_output_stream) {
      cout<<argv[1]<<" can not be opened"<<endl;
      return 1;
    }

    //Here we write data to the file.
    file_output_stream<<"Jyrki "<<"T1234 "<<4<<endl;
    file_output_stream<<"Juhanna "<<"T1235 "<<5<<endl;
    file_output_stream<<"Jason "<<"T1236 "<<3<<endl;

    //Here we close the file output stream.
    file_output_stream.close();

    cout<<"Data was written successfully to "<<argv[1]<<endl;
    return 0;
    }


