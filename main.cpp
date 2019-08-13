//Name: Nelson Lim
#include<iostream>
#include<cmath>
#include<vector>
using namespace std; 

void Fabric_snake(double width, double height, double & total){
  double piece;
  double price;
  double round_piece;
  double type;
  double meter;
  cout<<"Enter Fabric Code : ";
  cin >> type;
  
  while(type < 53.3 || type > 126){
    cout<<"Error, enter valid type : ";
    cin>>type;
  }

  piece =( width * 2.8 ) / type;
  cout<<"Total meter : " << piece <<" , Rounded to : " << ceil(piece) <<endl;
  round_piece = ceil(piece);
  
  meter = (height + 12) / 39;

  cout<<"Order Meter : " <<meter * round_piece<<endl;

  cout<<"Enter Fabric Price : ";
  cin>>price;
  total += ((round_piece * meter) * price);
 // cout<<"Fabric Price : "<<(round * price)<<endl; 
}

//
void Fabric_normal_snake(double width, double height, double & total){
  double meter;
  double price;
  double round;
  meter =( width * 2.8 ) / 39;
  cout<<"Total meter : " << meter <<" , Rounded to : " << ceil(meter) <<endl;
  round = ceil(meter);
  
  cout<<"Enter Fabric Price : ";
  cin>>price;
  total += (round * price);
 // cout<<"Fabric Price : "<<(round * price)<<endl; 
}


void Fabric(double width, double height, double & total){
  double piece;
  double price;
  double round_piece;
  double type;
  double meter;
  cout<<"Enter Fabric Code : ";
  cin >> type;
  
  while(type < 53.3 || type > 126){
    cout<<"Error, enter valid type : ";
    cin>>type;
  }

  piece =( width * 2.2 ) / type;
  cout<<"Total meter : " << piece <<" , Rounded to : " << ceil(piece) <<endl;
  round_piece = ceil(piece);
  
  meter = (height + 12) / 39;

  cout<<"Order Meter : " <<meter * round_piece<<endl;

  cout<<"Enter Fabric Price : ";
  cin>>price;
  total += ((round_piece * meter) * price);
 // cout<<"Fabric Price : "<<(round * price)<<endl; 
}

void Fabric_normal(double width, double height, double & total){
  double meter;
  double price;
  double round;
  meter =( width * 2.2 ) / 39;
  cout<<"Total meter : " << meter <<" , Rounded to : " << ceil(meter) <<endl;
  round = ceil(meter);
  
  cout<<"Enter Fabric Price : ";
  cin>>price;
  total += (round * price);
 // cout<<"Fabric Price : "<<(round * price)<<endl; 
}


void Sewing(double width, double height, double & total){
  double price;
  double feet;
  feet = width / 12;
  cout<<"Enter Sewing Price : ";
  cin >> price;
  total += (feet * price);
  //cout<<"Sewing Price : " <<  (feet * price)<<endl;


}

void Track(double width, double height, double & total){
  double price;
  double feet;
  cout<<"Enter Track Price : ";
  cin>>price;
  feet = width / 12;
  total += (feet * price );
  //cout<<"Track Price : " <<  (feet * price)<<endl;

}
void Install(double width, double height, double & total){
  double price;
  double feet;
  cout<<"Enter install Price : ";
  cin>>price;
  feet = width / 12;
  total += (feet * price );
  //cout<<"install Price : " <<  (feet * price)<<endl;

}

void Tiebelt(double & total){
double price;
cout<<"Enter Tiebelt price : ";
cin>>price;
total += price;
}

void Transport(double & total){
double price;
cout<<"Enter Transport Price : ";
cin>>price;
total += price;
}


void ring(double width, double height, double & total){
  double ring;
  int ceil_ring;
  double price;
  ring = (width / 2) / 3;
  ceil_ring = ceil(ring);
  if(ceil_ring % 2 == 1){
    ceil_ring += 1;
  }
  ceil_ring = ceil_ring * 2;
  cout<<"Ring count : " << ceil_ring<<endl;
  cout<<"Enter Ring Price"<<endl;
  cin >> price;
  total += (ceil_ring * price);
  cout<<"Ring Total : " << ceil_ring * price<<endl;
}

int main(){
  vector<double> window;
  int cont = 1;
  
  while (cont == 1){
  double total = 0;  
  double width, height;
  
  double choice;
  cout<<"Enter Type of Formula : "<<endl;
  cout<<"Enter (1) for normal cloth formula \t";
  cout<<"Enter (3) for normal sheer formula \t";
  cout<<"Enter (5) for normal snake formula \t";
  cout<<"Enter (7) for normal eyelet formula \t"<<endl;

  cout<<"Enter (2) for other cloth formula \t"; 
  cout<<"Enter (4) for other sheer formula \t";
  cout<<"Enter (6) for other snake formula \t";
  cout<<"Enter (8) for other eyelet formula "<<endl;




  cin >> choice;
  while (choice < 1 || choice > 8){
    cout<<"Enter a valid choice :"<<endl;
    cin >> choice;
  }

  cout<<"Enter Width : ";
    cin>>width;
  cout<<"Enter Height : ";
    cin>>height;
  cout<<endl;

  if(choice == 1 && 128 - height < 6 ){
    cout<<"OVERRIDE : Use other formula"<<endl;
    choice = 2;

  }
  if(choice == 3 && 128 - height < 4){
    cout<<"OVERRIDE : Use other formula"<<endl;
    choice = 4;

  }
  
  if(choice == 5 && 128 - height < 6){
    cout<<"OVERRIDE : Use other formula"<<endl;
    choice = 6;  
  }
  if(choice == 7 && 128 - height < 6){
    cout<<"OVERRIDE : Use other formula"<<endl;
    choice = 8;  
  }

  // for snake and eyelet

  if(choice == 1){
    Fabric_normal(width,height,total);
    Sewing(width,height,total);
    Track(width,height,total);
    Install(width,height,total);
    Tiebelt(total);
    Transport(total);
    window.push_back(total);
    cout<<"Total : " << total << endl;
  }
  if(choice == 2){
    Fabric(width,height,total);
    Sewing(width,height,total);
    Track(width,height,total);
    Install(width,height,total);
    Tiebelt(total);
    Transport(total);
    window.push_back(total);
    cout<<"Total : " << total <<endl;
        
  }
    if(choice == 3){
    Fabric_normal(width,height,total);
    Sewing(width,height,total);
    Track(width,height,total);
    Install(width,height,total);
    window.push_back(total);
    cout<<"Total : " << total <<endl;
        
  }
  if(choice == 4){
    Fabric(width,height,total);
    Sewing(width,height,total);
    Track(width,height,total);
    Install(width,height,total);
    window.push_back(total);
    cout<<"Total : " << total <<endl;
        
  }
  if(choice == 5){
    Fabric_normal_snake(width,height,total);
    Sewing(width,height,total);
    Track(width,height,total);
    Install(width,height,total);
    Tiebelt(total);
    Transport(total);
    window.push_back(total);
    cout<<"Total : " << total <<endl;
        
  }
  if(choice == 6){
    Fabric_snake(width,height,total);
    Sewing(width,height,total);
    Track(width,height,total);
    Install(width,height,total);
    Tiebelt(total);
    Transport(total);
    window.push_back(total);
    cout<<"Total : " << total <<endl;
        
  }
  if(choice == 7){
    Fabric_normal(width,height,total);
    Sewing(width,height,total);
    Track(width,height,total);
    Install(width,height,total);
    Tiebelt(total);
    Transport(total);
    window.push_back(total);
    ring(width,height,total);
    cout<<"Total : " << total <<endl;
        
  }
  if(choice == 8){
    Fabric(width,height,total);
    Sewing(width,height,total);
    Track(width,height,total);
    Install(width,height,total);
    Tiebelt(total);
    Transport(total);
    ring(width,height,total);    
    window.push_back(total);

    cout<<"Total : " << total <<endl;
        
  }


  cout<<endl;
  cout<<"Do you wish to continue? " <<endl;
  cout<<"Enter (1) to continue \nEnter (2) to finish"<<endl;
  cin>>cont;
  
  while (cont < 1 || cont > 2){
    cout<<"Enter a valid choice :"<<endl;
    cin >> cont;
  }
  
  }
  for(int i = 0; i < window.size();i++){
    cout<<i+1<< ". "<<window[i] <<endl;
  }

  double final_total = 0;

  for(int j = 0; j < window.size();j++){
    final_total += window[j];
  }

  cout<<" Total Price : " << final_total<<endl;


return 0;
}




