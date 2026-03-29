#include <iostream>
using namespace std;
int main () {
	int room,food,meal;
	cout<<"welcome to a GRAND LUXE HOTEL"<<endl;
	cout<<"selected a room type for GRAND LUXE HOTEL:1 for Standard room,2 for Deluxe room,3 for Suite room:";
	cin>>room;
	switch (room) {
		case 1:
			cout<<"the price of Standard room is $ 120/night:"<<endl;
			cout<<"enter a food type:1 for breakfast,2 for lunch,3 for dinner:";
			cin>>food;
	switch (food) {
		case 1:
			cout<<"enter a breakfast menu: 1 for tea and toast,2 for omellete,3 for pancackes:";
			cin>>meal;
	switch (meal) {
		case 1:
			cout<<"you have ordered tea and toast:"<<endl;
			break;
		case 2:
			cout<<"you have ordered omellete:"<<endl;
			break;
		case 3:
			cout<<"you have ordered pancackes:"<<endl;
			break;
	}
	       break;
	    case 2:
	    	cout<<"enter a lunch menu: 1 for sandwiches,2 for biryani, 3 for burger:";
	    	cin>>meal;
	switch (meal) {
		case 1:
			cout<<"you have ordered a sandwiches:"<<endl;
			break;
		case 2:
			cout<<"you have ordered biryani:"<<endl;
			break;
		case 3:
			cout<<"you have ordered burger:"<<endl;
			break;
	}
	      break;
	    case 3:
	    	cout<<"enter a dinner menu:1 for pizza,2 for pasta, 3 for fries:";
	    	cin>>meal;
	switch (meal) {
		case 1:
			cout<<"you have ordered pizza:"<<endl;
			break;
		case 2:
			cout<<"you have ordered pasta:"<<endl;
			break;
		case 3:
			cout<<"you have ordered fries:"<<endl;
			break;		
	}
	      break;
  }
        break;
        case 2:
        	cout<<"the price for Deluxe room is $220/night:"<<endl;
        	cout<<"enter a food type:1 for breakfast,2 for lunch,3for dinner:";
        	cin>>food;
    switch (food) {
    	case 1:
    		cout<<"enter a breakfast menu:1 for freanch toast,2 for cheese omellete,3 for fresh juice :";
    		cin>>meal;
    switch (meal) {
    	case 1:
    		cout<<"you have ordered a french toast:"<<endl;
    		break;
    	case 2:
    		cout<<"you have ordered a cheese omellete:"<<endl;
    		break;
    	case 3:
    		cout<<"you have ordered fresh juice:"<<endl;
    		break;
    	}
    	 break;
    	case 2:
		    cout<<"enter a lunch menu:1 for grilled chicken,2 for qorma, 3 for white kharahi:";
		    cin>>meal;
	switch (meal) {
		case 1:
			cout<<"you have orderec grilled chicken:"<<endl;
			break;
		case 2:
			cout<<"you have ordered a qorma:"<<endl;
			break;
		case 3:
			cout<<"you have oredered a white kharahi:"<<endl;
			break;
	}
	   break;
	    case 3:
	    	cout <<"enter a dinner menu:1 for steak, 2 for roast, 3 for chinese rice:";
	    	cin>>meal;
	switch (meal) {
		case 1:
			cout<<"you have ordered steak:"<<endl;
			break;
		case 2:
			cout<<"you have ordered roast:"<<endl;
			break;
		case 3:
			cout<<"you have ordered chinese rice:"<<endl;
			break;
	}
	      break;
	  }
	      break;
	    case 3:
	    	cout<<"the price for Suite room is $450/night:"<<endl;
	    	cout<<"enter a food type:1 for breakfast, 2 for lunch, 3 for dinner :";
	    	cin>>food;
	switch (food) {
		case 1:
			cout<<"enter a breakfast menu:1 for fruit platter,2 for salmon, 3 for sandwich:";
			cin>>meal;
	switch (meal) {
		case 1:
			cout<<"you have ordered friut platter:"<<endl;
			break;
		case 2:
			cout<<"you have ordered salmon:"<<endl;
			break;
		case 3:
			cout<<"you have ordered sandwich:"<<endl;
			break;
	}
	     break;
	    case 2:
	    	cout<<"enter a lunch menu:1 for sushi, 2 for lamb chops,3 for nihari:";
	    	cin>>meal;
	switch (meal) {
		case 1:
			cout<<"you have ordered sushi:"<<endl;
			break;
		case 2:
			cout<<"you have ordered lamb chops:"<<endl;
			break;
		case 3:
			cout<<"you have ordered nihari:"<<endl;
			break;
	}
	     break;
	    case 3:
	    	cout<<"enter a dinner menu:1 for italian,2 for soup, 3 for chinese:";
	    	cin>>meal;
	switch (meal) {
		case 1:
			cout<<"you have ordered italian:"<<endl;
			break;
		case 2:
			cout<<"you have ordered soup:"<<endl;
			break;
		case 3:
			cout<<"you have ordered chinese:"<<endl;
			break;
		}
		 break;
	}
	    break;
	}
	    cout<<"thank you for visiting";
	return 0;
}

		
  	
		

