#include <iostream>
#include <ctime>
#include <cstring>
#include <cstdlib>

using namespace std;

class Basic_info {
	string name;
	string id;
	string category;
	Basic_info(){};
	Basic_info(string id, string name, string category, double price){
		this->id = id;
		this->name = name;
		this->category = category;
		this->price = price;
	}
	string id(){
		return this->id;
	}
	string name(){
		return this->name;
	}
	string category(){
		return this->category;
	}
	double price(){
		return this->price;
	}
};

class Product : public Basic_info{
	double price;
public:
	void get_all_info(string check_id, product products[], int numbers_of_products){	//receives id and return info as text
	int i;
	for(i=0; i<numbers_of_products; i++){
		if(products[i].id == check_id){
			return products + i;
			break;
		}
	}
	cout<<"Id :"<<this->id<<"belongs to product :"<<this->name<<"and category"<<this->category;
}

	void get_price(string check_name, product products[]){	//receives name and return price
		int j;
		for(j=0; j<numbers_of_name; j++){
			if(products[i].name == check_name){
				return products + i;
				break;
			}
		}
		cout<<"Product :"<<this->name<<"costs :"<<this->price;
	}
	void update_amount(int){		//receives a value and increment current amount by given values
		this->price=price;
	}
};

class Customer : public Basic_info{
	void upgrade_purchase(Product *Products, Customer *Customers, int index){	//receives an obj of type and amount, add it to purchase
		string name;
		string id;
		string category;
		int amount_of_purchase, check=1;
		double price;
		cout<<"ID of products :";
		cin>> id;
		cout<<"Ammount of purchase";
		cin>>amount_of_purchase;
		while(check==1){
			cout<<"What is your category ? Cheap(1) Normal(2) Luxury(3) ?";
			cin>>category;
			
			switch(category){
				case(1):
					price=50;
					Products[index]=Product(id, "Bronze", price);
				check=0;
				break;
				case(2):
					price=100;
					Products[index]=Product(id, "Silver", price);
				check=0;
				break;
				case(3):
					price=150;
					Products[index]=Product(id, "Gold", price);
				check=0;
				break;
			default:
			cout<<"Invalid choice"<<endl;
			}

		}
	}	
	void get_total_purchase(){	//return total price of all purchases
			Customers[index] = Product(name, id, amount_of_purchase);
			Customers[index].update_amount(price*amount_of_purchase);
			cout<<"Customer saved"<<endl;
	}	
};

int main(void){
	Product Products[100];
	Customer Customers[100];
	Basic_info info("Ring");
	int curr_product=0, curr_customer=0;
	char selection;
	
	switch(selection){
		cout<<"A : Add your products info and amount of purchase:"<<endl;
		cout<<"S : Search informations of products :"<<endl;
		cout<<"R : Search price of product :"<<endl;
		cout<<"Q : Quit"<<endl;
		cout<<"Enter your selection :";
		cin.get(selection);
		selection = tolower(selection);
		switch(selection){
			case 's':
				product.get_all_info(string check_id, product products[], int numbers_of_products);
				break;
			case 'r':
				product.get_price(string check_name, product products[]);
				break;
			case 'a' :
				curr_customer++;
				curr_room++;
				upgrade_purchase(Product *Products, Customer *Customers, int index);
				Customers[curr_customer].get_all_info;
				Products[curr_product].get_all_info;
				break;
			case 'q' :
				cout<<"See you next time";
				break;
			default:
				cout<<"Input a right value";
				break;
		}
		cin.get();
	}
	return 0;
}

