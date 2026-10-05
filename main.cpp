#include <iostream>
#include <vector>
#include <cstdlib>

using std::vector, std::cout, std::cin, std::endl;
const short MIN = 1;

int main(int argc, char** argv){
  char input = ' ';
  bool ongoing = true;
  unsigned int options = 0 ;
  vector <unsigned int> tally;

  if( argc == 1 ){
    options = MIN;
  }
  else if( argc == 2 && atoi(argv[1])){ // argument is provided that can convert character -> integer
    options = atoi(argv[1]); // convert character argument into integer
  }
  else{
    ongoing = false;
  } 

  if( options < MIN ){
    return 1;
  }
  
  tally.resize(options, 0); // start all tallies at 0

  while( ongoing ){
    int id;

    // User Instructions provided here for better clarity for the user when
    // program starts.
    cout << "Enter a number between 1 and 2 to tally for the ID >> ";
    cin >> input;

    id = (int) input - '0';
    if( id >= 1 && id <= options ){
      tally[id-1]++;
    }
    else if( input == 'q' || input == 'Q' ){
      ongoing = false;
    }
    else{
      cout<<"Press number "<<MIN<<" - 9 to increase the tally for that ID, or press Q to quit\n";
    } 
  }
  
  cout << "Final Tally\n";
  for(int i = 0; i < tally.size(); i++){
    cout << (i+1) << ": " << tally[i] << endl;
  }

  return 0;
}
