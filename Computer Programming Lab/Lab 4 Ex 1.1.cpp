 #include <iostream>
 
using namespace std;
 
int main()
{
    int nump;
    float productprice1, productprice2, productprice3, productprice4, productprice5;
    int num1, num2, num3, num4, num5;
    cout << "Enter the quantity of 5 of the products sold respectively: \n";
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cin >> num5;
    cout << "Enter the the the product number that have been brought (1, 2, 3, 4, 5)\nEx if product 1, 2, 3 is chosen type 123, from lowest to highest: ";
    cin >> nump;
	
	productprice1 = 2.98;
	productprice2 = 4.50;
	productprice3 = 9.98;
	productprice4 = 4.49;
	productprice5 = 6.87;
 
    switch(nump)
     {
    	case 1:
        	cout << "The total is: RM " << productprice1*num1  << endl;
    		break;
    	case 12:
        	cout << "The total is: RM " << productprice1*num1 + productprice2*num2 << endl;
    		break;
    	case 13:
        	cout << "The total is: RM " << productprice1*num1 + productprice3*num3 << endl;
    		break;
    	case 14:
        	cout << "The total is: RM " << productprice1*num1 + productprice4*num4 << endl;
    		break;
    	case 15:
        	cout << "The total is: RM " << productprice1*num1 + productprice5*num5 << endl;
    		break;
    	case 123:
        	cout << "The total is: RM " << productprice1*num1 + productprice2*num2 + productprice3*num3 << endl;
    		break;
    	case 124:
        	cout << "The total is: RM " << productprice1*num1 + productprice2*num2 + productprice4*num4 << endl;
    		break;
    	case 125:
        	cout << "The total is: RM " << productprice1*num1 + productprice2*num2 + productprice5*num5 << endl;
    		break;
    	case 134:
        	cout << "The total is: RM " << productprice1*num1 + productprice3*num3 + productprice4*num4 << endl;
    		break;
    	case 135:
        	cout << "The total is: RM " << productprice1*num1 + productprice3*num3 + productprice5*num5 << endl;
    		break;
    	case 145:
        	cout << "The total is: RM " << productprice1*num1 + productprice4*num4 + productprice5*num5 << endl;     
        	break;
    	case 1234:
        	cout << "The total is: RM " << productprice1*num1 + productprice2*num2 + productprice3*num3 + productprice4*num4 << endl;
    		break;
    	case 1235:
        	cout << "The total is: RM " << productprice1*num1 + productprice2*num2 + productprice3*num3 + productprice5*num5 << endl;
    		break;
    	case 1245:
        	cout << "The total is: RM " << productprice1*num1 + productprice2*num2 + productprice4*num4 + productprice5*num5 << endl;
    		break;
    	case 1345:
        	cout << "The total is: RM " << productprice1*num1 + productprice3*num3 + productprice4*num4 + productprice5*num5 << endl;
    		break;
    	case 12345:
        	cout << "The total is: RM " << productprice1*num1 + productprice2*num2 + productprice3*num3 + productprice4*num4 + productprice5*num5 << endl;
    		break;
    	case 2:
        	cout << "The total is: RM " << productprice2*num2 << endl;
    		break;
		case 23:
        	cout << "The total is: RM " << productprice2*num2 + productprice3*num3 << endl;
        	break;
    	case 24:
        	cout << "The total is: RM " << productprice2*num2 + productprice4*num4 << endl;
       		break;
       	case 25:
        	cout << "The total is: RM " << productprice2*num2 + productprice5*num5 << endl;     
        	break;
        case 234:
        	cout << "The total is: RM " << productprice2*num2 + productprice3*num3 + productprice4*num4 << endl;     
        	break;
        case 235:
        	cout << "The total is: RM " << productprice2*num2 + productprice3*num3 + productprice5*num5 << endl;     
        	break;
        case 245:
        	cout << "The total is: RM " << productprice2*num2 + productprice4*num4 + productprice5*num5 << endl;     
        	break;
       	case 2345:
        	cout << "The total is: RM " << productprice2*num2 + productprice3*num3 + productprice4*num4 + productprice5*num5 << endl;     
        	break;
        case 3:
        	cout << "The total is: RM " << productprice3*num3 << endl;     
        	break;
        case 34:
        	cout << "The total is: RM " << productprice3*num3 + productprice4*num4 << endl;     
        	break;
        case 35:
        	cout << "The total is: RM " << productprice3*num3 + productprice5*num5 << endl;     
        	break;
        case 345:
        	cout << "The total is: RM " << productprice3*num3 + productprice4*num4 + productprice5*num5 << endl;     
        	break;
        case 4:
        	cout << "The total is: RM " << productprice4*num4 << endl;     
        	break;
        case 45:
        	cout << "The total is: RM " << productprice4*num4 + productprice5*num5 << endl;     
        	break;
        case 5:
        	cout << "The total is: RM " << productprice5*num5 << endl;     
        	break;
    	default:
        	cout << "Error, enter in the right format or the input is invalid" << endl;
        	break;
    }
 
   

   return 0;
}
 