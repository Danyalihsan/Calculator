#include <iostream>
#include <cmath>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <complex>

using namespace std;

double Add() {
    double a, b ;
    cout <<"Enter the first number : " ;
    cin >> a ;

    cout <<"Enter the second number : " ;
    cin >> b ;

    cout << "The sum of 2 numbers is : " << a + b <<endl ;

}

double Subtract() {
    double a, b ;
    cout <<"Enter the first number : " ;
    cin >> a ;

    cout <<"Enter the second number : " ;
    cin >> b ;

    cout << "The difference of 2 numbers is : " << a - b <<endl ;
}

double Multiply() {
     double a, b ;
    cout <<"Enter the first number : " ;
    cin >> a ;

    cout <<"Enter the second number : " ;
    cin >> b ;

    cout << "The product of 2 numbers is : " << a * b <<endl ;
}

double Divide() {
  double a, b ;
    cout <<"Enter the first number : " ;
    cin >> a ;

    cout <<"Enter the second number : " ;
    cin >> b ;
    if (a==0 || b==0){
        cout << "Invalid Input." ;
    }
    else
    cout << "The Quotient of 2 numbers is : " << a / b <<endl ;
}

double Power() {
    double result = 1.0 ;
    double base ;
    int exponent;

    cout << "Enter the base : " ;
    cin >> base ;
    cout << "Enter the exponent : " ;
    cin >> exponent ;

    if (base==0 || exponent==0){
        cout << "Invalid Input." ;}

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    
    cout << "Result : " << result <<endl ;}

void ModularArithmetic(){
                 int l,m,Result ;
                cout << "Enter 2 numebers, you want the remainder of: " ;
                cin >> l >> m ;
                Result = l % m ;
                cout << "The ramainder of the given numbers is: " << Result <<endl ;

}

void DataFunctions(){
                        // Create a vector to store your data
            std::vector<double> data;

            // Input data
            int n = 0;
            std::cout << "Enter the number of data points: ";
            std::cin >> n;

            std::cout << "Enter the data points, one at a time:" << std::endl;
            for (int i = 0; i < n; i++) {
                double value = 0;
                std::cin >> value;
                data.push_back(value);
            }

            // Calculate mean
            double sum = 0;
            for (const double& value : data) {
                sum += value;
            }
            double mean = sum / n;

            // Calculate median
            std::sort(data.begin(), data.end());
            double median;
            if (n % 2 == 0) {
                median = (data[n / 2 - 1] + data[n / 2]) / 2.0;
            } else {
                median = data[n / 2];
            }

            // Calculate mode
            std::map<double, int> frequency;
            for (const double& value : data) {
                frequency[value]++;
            }
            double mode = data[0];
            int maxFrequency = 0;
            for (const auto& entry : frequency) {
                if (entry.second > maxFrequency) {
                    maxFrequency = entry.second;
                    mode = entry.first;
                }
            }

            // Calculate variance and standard deviation
            double variance = 0;
            for (const double& value : data) {
                variance += pow(value - mean, 2);
            }
            variance /= n;
            double stdDeviation = sqrt(variance);

            // Output the results
            std::cout << "Mean: " << mean << std::endl;
            std::cout << "Median: " << median << std::endl;
            std::cout << "Mode: " << mode << std::endl;
            std::cout << "Variance: " << variance << std::endl;
            std::cout << "Standard Deviation: " << stdDeviation << std::endl;
}

void LengthConversion(){
                int choice ;
                double n ;
              cout << "\nTypes of length conversion\n" ;
              cout << "1. Meters to Yards\n" ;
              cout << "2. Yards to meters\n" ;
              cout << "3. Kilometers to miles\n" ;
              cout << "4. Miles to kilometers\n" ;
              cout << "5. Meters to centimeters\n" ;
              cout << "6. centimeters to meters\n" ;
              cout << "7. Feet  to inches\n" ;
              cout << "8. Inches to feet\n" ;
              cout << "9. centimeters to millimeters\n" ;
              cout << "10. Millimeters to centimeters\n" ;

              cout << "0. Exit\n" ;
              cout << "Enter your choice: " ;
              cin >> choice ;

              switch (choice)
              {
              case 1: 

              cout << "Enter the length in meters : " ;
              cin >> n ;
              cout << "The length in Yards is = " << n*1.09 ;
              
                break;

              case 2:

              cout << "Enter the length in yards : " ;
              cin >> n ;
              cout << "The length in meters is = " << n*0.9144 ;
              
                break;
              
              case 3:

                cout << "Enter the length in Kilometers : " ;
                cin >> n ;
                cout << "The length in miles is = " << n*0.621371 ;
                break;

              case 4:

                cout << "Enter the length in Miles : " ;
                cin >> n ;
                cout << "The length in Kilometers is = " << n*1.60934 ;
                break;

              case 5:

                cout << "Enter the length in Meters : " ;
                cin >> n ;
                cout << "The length in centimeters is = " << n*100 ;
                break;

              case 6:

                cout << "Enter the length in centimeters : " ;
                cin >> n ;
                cout << "The length in Meters is = " << n*0.01 ;
                break;
  
              case 7:

                cout << "Enter the length in Feet : " ;
                cin >> n ;
                cout << "The length in Inches is = " << n*12 ;
                break;
             
              case 8:

                cout << "Enter the length in Inches : " ;
                cin >> n ;
                cout << "The length in feet is = " << n*0.0833333 ;
                break;
             
              case 9:

                cout << "Enter the length in Centimeters : " ;
                cin >> n ;
                cout << "The length in millimeters is = " << n*10 ;
                break;
             
              case 10:

                cout << "Enter the length in Millimeters : " ;
                cin >> n ;
                cout << "The length in centimeters is = " << n*0.1 ;
                break;

              case 0:
               std::  cout << "\nExit\n";
                break;
                              
              default: cout << "Invalid choice.\n" ;
                break;

              }

               }

void AreaConversion(){
                int choice ;
                double n ;
              cout << "\nTypes of Area conversion\n" ;
              cout << "1. Square Millimeter to Square Centimeter\n" ;
              cout << "2. Square Centimeter to Square Millimeter\n" ;
              cout << "3. Square Meter to Square Yard\n" ;
              cout << "4. Square Yard to Square Meter\n" ;
              cout << "5. Square Inch to Square Feet\n" ;
              cout << "6. Square Feet to Square Inch\n" ;
              cout << "7. Square Kilometer to Square Mile\n" ;
              cout << "8. Square Mile to Square Kilometer\n" ;

              cout << "0. Exit\n" ;
              cout << "Enter your choice: " ;
              cin >> choice ;

              switch (choice)
              {
              case 1: 

              cout << "Enter the area in Square Millimeter : " ;
              cin >> n ;
              cout << "The area in Square Centimeter is = " << n*0.01 ;
              
                break;

              case 2:

              cout << "Enter the area in Square Centimeter : " ;
              cin >> n ;
              cout << "The area in Square Millimeter is = " << n*100 ;
              
                break;
              
              case 3:

                cout << "Enter the area in Square Meter : " ;
                cin >> n ;
                cout << "The area in Square Yard is = " << n*1.19599 ;
                break;

              case 4:

                cout << "Enter the area in Square Yard : " ;
                cin >> n ;
                cout << "The area in Square Meter is = " << n*0.836127 ;
                break;

              case 5:

                cout << "Enter the area in Square Inch : " ;
                cin >> n ;
                cout << "The area in Square Foot is = " << n*0.00694444 ;
                break;

              case 6:

                cout << "Enter the area in Square Foot : " ;
                cin >> n ;
                cout << "The area in Square Inch is = " << n*144 ;
                break;
  
              case 7:

                cout << "Enter the area in Square Kilometer : " ;
                cin >> n ;
                cout << "The area in Square miles is = " << n*0.386102 ;
                break;
             
              case 8:

                cout << "Enter the area in Square miles : " ;
                cin >> n ;
                cout << "The area in Square Kilometer is = " << n*2.58999 ;
                break;

              case 0:
               std::  cout << "\nExit\n";
                break;
                              
              default: cout << "Invalid choice.\n" ;
                break;

              }

               }

void TempratureConversion(){
                int choice ;
                double n ;
              cout << "\nTypes of Temprature conversion\n" ;
              cout << "1. Celsius to  Fahrenheit\n" ;
              cout << "2. Fahrenheit  to Celsius \n" ;
              
              cout << "0. Exit\n" ;
              cout << "Enter your choice: " ;
              cin >> choice ;

              switch (choice)
              {
              case 1: 

              cout << "Enter the Temperature in Celsius : " ;
              cin >> n ;
              cout << "The Temperature in Fahrenheit is = " << (n * 9/5) + 32 ;
              
                break;

              case 2:

              cout << "Enter the Temperature in Fahrenheit : " ;
              cin >> n ;
              cout << "The Temperature in Fahrenheit is = " << (n - 32) * 5/9  ;
              
                break;

              case 0:
               std::  cout << "\nExit\n";
                break;

              default: cout << "Invalid choice.\n" ;
              break;

              }
              }

void VolumeConversion(){
                int choice ;
                double n ;
              cout << "\nTypes of Volume conversion\n" ;
              cout << "1. Litres to  Millilitres\n" ;
              cout << "2. Millilitres  to Litres \n" ;
              cout << "3. centilitre to decilitre\n" ;
              cout << "4. decilitre to centilitre\n" ;
              cout << "5. ounce to  cubic inch\n" ;
              cout << "6. cubic inch to ounce \n" ;

              cout << "0. Exit\n" ;
              cout << "Enter your choice: " ;
              cin >> choice ;

              switch (choice)
              {
              case 1: 

              cout << "Enter the volume in Litres : " ;
              cin >> n ;
              cout << "The volume in Millilitres is = " << n*1000 ;
              
                break;

              case 2:

              cout << "Enter the volume in Millilitres : " ;
              cin >> n ;
              cout << "The volume in Litres is = " << n*0.001 ;
              
                break;
              
              case 3:

                cout << "Enter the volume in Centilitres : " ;
                cin >> n ;
                cout << "The volume in Decilitres is = " << n*0.1 ;
                break;

              case 4:

                cout << "Enter the volume in Decilitres : " ;
                cin >> n ;
                cout << "The volume in Centilitres is = " << n*10 ;
                break;

              case 5:

                cout << "Enter the Volume in Ounce : " ;
                cin >> n ;
                cout << "The volume in Cubic inch is = " << n*1.80469 ;
                break;

              case 6:

                cout << "Enter the Volume in Cubic inch : " ;
                cin >> n ;
                cout << "The volume in Ounce is = " << n*0.554113 ;
                break;

              case 0:
               std::  cout << "\nExit\n";
                break;
  
                              
              default: cout << "Invalid choice.\n" ;
                break;

              }

               }

void WeightConversion(){
                int choice ;
                double n ;
              cout << "\nTypes of Weight / Mass conversion\n" ;
              cout << "1. Kilograms to  Grams\n" ;
              cout << "2. Grams to Kilograms \n" ;
              cout << "3. Pounds to Kilograms\n" ;
              cout << "4. Kilograms to Pounds\n" ;
              cout << "5. Grams to Milligrams\n" ;
              cout << "6. Milligrams to Grams \n" ;

              cout << "0. Exit\n" ;
              cout << "Enter your choice: " ;
              cin >> choice ;

              switch (choice)
              {
              case 1: 

              cout << "Enter the Weight in Kilograms : " ;
              cin >> n ;
              cout << "The Weight in Grams is = " << n*1000 ;
              
                break;

              case 2:

              cout << "Enter the Weight in Grams : " ;
              cin >> n ;
              cout << "The Weight in Kilograms is = " << n*0.001 ;
              
                break;
              
              case 3:

                cout << "Enter the Weight in Pounds : " ;
                cin >> n ;
                cout << "The Weight in Kilograms is = " << n*0.453592 ;
                break;

              case 4:

                cout << "Enter the Weight in Kilograms : " ;
                cin >> n ;
                cout << "The Weight in Pounds is = " << n*2.20462 ;
                break;

              case 5:

                cout << "Enter the Weight in Grams : " ;
                cin >> n ;
                cout << "The Weight in Milligrams is = " << n*1000 ;
                break;

              case 6:

                cout << "Enter the Weight in Milligrams : " ;
                cin >> n ;
                cout << "The Weight in Grams is = " << n*0.001 ;
                break;

              case 0:
               std::  cout << "\nExit\n";
                break;
  
                              
              default: cout << "Invalid choice.\n" ;
                break;

              }

               }

void AddComplexNumbers(){

        class complex{
             public :
            int real, img;};
        complex a, b, c;

   cout << "Enter a and b where a + bi is the first complex number.";
   cout << "\na = ";
   cin >> a.real;
   cout << "b = ";
   cin >> a.img;
   cout << "Enter c and d where c + di is the second complex number.";
   cout << "\nc = ";
   cin >> b.real;
   cout << "d = ";
   cin >> b.img;
   
   c.real = a.real + b.real;
   c.img = a.img + b.img;

   if (c.img >= 0)
      cout << "Sum of two complex numbers = " << c.real << " + " << c.img << "i";
   else
      cout << "Sum of two complex numbers = " << c.real << " " << c.img << "i";

}

void SubtractComplexNumbers(){

        class complex{
             public :
            int real, img;};
        complex a, b, c;

   cout << "Enter a and b where a - bi is the first complex number.";
   cout << "\na = ";
   cin >> a.real;
   cout << "b = ";
   cin >> a.img;
   cout << "Enter c and d where c - di is the second complex number.";
   cout << "\nc = ";
   cin >> b.real;
   cout << "d = ";
   cin >> b.img;
   
   c.real = a.real - b.real;
   c.img = a.img - b.img;

   if (c.img >= 0)
      cout << "Subtraction of two complex numbers = " << c.real << " - " << c.img << "i";
   else
      cout << "Subtraction of two complex numbers = " << c.real << " " << c.img << "i";

}

void MultiplyComplexNumbers(){

   int a1, b1, a2, b2, a3, b3;
   cout << "Enter a and b where a + bi is the first complex number.";
    cout << "\na1 = ";
    cin >> a1 ;
    cout << "\nb1 = ";
    cin >> b1 ;

   cout << "Enter a and b where a + bi is the second complex number.";
    cout << "\na2 = ";
    cin >> a2 ;
    cout << "\nb2 = ";
    cin >> b2 ;

   a3 = a1 * a2 - b1 * b2;
   b3 = a1 * b2 + b1 * a2;
   cout<<"Product of two complex numbers = "<<a3<<" + "<<b3<<"i";

}

void DivideComplexNumbers(){

    double a1, b1, a2, b2;

    cout << "Enter a and b where a + bi is the first complex number.";
    cout << "\na1 = ";
    cin >> a1 ;
    cout << "\nb1 = ";
    cin >> b1 ;

    cout << "Enter a and b where a + bi is the second complex number.";
    cout << "\na2 = ";
    cin >> a2 ;
    cout << "\nb2 = ";
    cin >> b2 ;

    std::complex<double> z1(a1, b1);
    std::complex<double> z2(a2, b2);

    std::complex<double> result = z1 / z2;

    std::cout << "Quotient of two complex numbers = " << result << std::endl;

}


int main() {
    double a = 0, b = 0, n = 0, result = 0;
    int l = 0, m = 0, Result = 0 ;
    int exponent = 0, base = 0;
    int choice = 0;
    bool isValid = false;
    const double PI = 3.14159265 ;
    int rows = 0, columns = 0;
    int x[100][100], y[100][100], sum[100][100], sub[100][100], product[100][100];
    

    do {
        cout << "\nMenu:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exponentiation\n";
        cout << "6. Modular Arithmetic\n";
        cout << "7. Square root\n" ;
        cout << "8. Logarithm\n" ;
        cout << "9. Trignometry\n" ;
        cout << "10. Matrix addition\n" ; 
        cout << "11. Matrix subtraction\n" ;
        cout << "12. Matrix multiplication\n" ;
        cout << "13. Matrix determinant\n" ;
        cout << "14. Mean, median, mode, variance and standard deviation\n" ;
        cout << "15. Length conversion\n" ;
        cout << "16. Area conversion\n" ;
        cout << "17. Volume conversion\n" ;
        cout << "18. Temprature conversion\n" ;
        cout << "19. Weight/Mass conversion\n" ;
        cout << "20. Add complex numbers\n" ;
        cout << "21. Subtract complex numbers\n" ;
        cout << "22. Multiplication of complex numbers\n" ;
        cout << "23. Division of complex numbers\n" ;
        cout << "24. Complex Numbers\n" ;
        cout << "22. Multiplication of complex numbers\n" ;

         


         std::cout << "0. Exit\n";
         std::cout << "Enter your choice: ";
         std::cin >> choice;


        switch (choice) {
            case 1:
                Add() ;
                break;

            case 2:
                Subtract() ;
                break;

            case 3:
               Multiply() ;
                break;

            case 4:
                Divide() ;
                break;

            case 5:
               Power() ;
                break;
            case 6:
                ModularArithmetic() ;
                break ;

            case 7:
              std::   cout << "Enter a number: ";
               std::  cin >> n ;
                if (n<0)
                std:: cout << "Invalid Input\n " ;
                std:: cout << "Result: " << sqrt(n) <<endl ;
                break;

            case 8:
                std:: cout << "Enter a number: " ;
                std:: cin >> n ;
                if (n<=0){
                    isValid = true ;
                   std::  cout << "Invalid input\n" ;}
                else {
                   std::  cout << "Result: " << log10(n) <<endl ;
                }
                break;
            case 9:
                std:: cout << "Enter angle in degrees: " ;
                std:: cin >> a ;
                      b = (a * PI) / 180.0 ;
                std:: cout << "Result : \n" <<"cos(Radian) = " << cos(b) <<endl ;
                std:: cout <<"sin(Radian) = " << sin(b) <<endl ;
                std:: cout <<"tan(Radian) = " << tan(b) <<endl ;
                break;
            case 10:
                cout << "Enter number of rows (between 1 and 100): ";
                cin >> rows;

                cout << "Enter number of columns (between 1 and 100): ";
                cin >> columns;

                cout << endl << "Enter elements of 1st matrix: " << endl;

                for(int i = 0; i < rows; ++i)
                for(int j = 0; j < columns; ++j)
                 {
                cout << "Enter element a" << i + 1 << j + 1 << " : ";
                cin >> x[i][j];
                 }

                cout << endl << "Enter elements of 2nd matrix: " << endl;
                for(int i = 0; i < rows; ++i)
                for(int j = 0; j < columns; ++j)
                 {
                cout << "Enter element b" << i + 1 << j + 1 << " : ";
                cin >> y[i][j];
                 }
                 for(int i = 0; i < rows; ++i)
                 for(int j = 0; j < columns; ++j)
                    sum[i][j] = x[i][j] + y[i][j];

                 cout << endl << "Sum of two matrix is: " << endl;
                 for(int i = 0; i < rows; ++i)
                 for(int j = 0; j < columns; ++j)
                {
                    cout << sum[i][j] << "  ";
                    if(j == columns - 1)
                        cout << endl;
        }
                break;
            case 11:
                cout << "Enter number of rows (between 1 and 100): ";
                cin >> rows;

                 cout << "Enter number of columns (between 1 and 100): ";
                 cin >> columns;

                cout << endl << "Enter elements of 1st matrix: " << endl;

                for(int i = 0; i < rows; ++i)
                for(int j = 0; j < columns; ++j)
                 {
                cout << "Enter element a" << i + 1 << j + 1 << " : ";
                cin >> x[i][j];
                 }

                cout << endl << "Enter elements of 2nd matrix: " << endl;
                for(int i = 0; i < rows; ++i)
                for(int j = 0; j < columns; ++j)
                 {
                cout << "Enter element b" << i + 1 << j + 1 << " : ";
                cin >> y[i][j];
                 }

                 for(int i = 0; i < rows; ++i)
                 for(int j = 0; j < columns; ++j)
                    sub[i][j] = x[i][j] - y[i][j];

                 cout << endl << "Subtraction of two matrix is: " << endl;
                 for(int i = 0; i < rows; ++i)
                 for(int j = 0; j < columns; ++j)
                {
                    cout << sub[i][j] << "  ";
                    if(j == columns - 1)
                        cout << endl;
        }
                break;
            case 12:
                cout << "Enter number of rows (between 1 and 100): ";
                cin >> rows;

                 cout << "Enter number of columns (between 1 and 100): ";
                 cin >> columns;

                cout << endl << "Enter elements of 1st matrix: " << endl;

                for(int i = 0; i < rows; ++i)
                for(int j = 0; j < columns; ++j)
                 {
                cout << "Enter element a" << i + 1 << j + 1 << " : ";
                cin >> x[i][j];
                 }

                cout << endl << "Enter elements of 2nd matrix: " << endl;
                for(int i = 0; i < rows; ++i)
                for(int j = 0; j < columns; ++j)
                 {
                cout << "Enter element b" << i + 1 << j + 1 << " : ";
                cin >> y[i][j];
                 }

                 for(int i = 0; i < rows; ++i)
                 for(int j = 0; j < columns; ++j)
                    product[i][j] = x[i][j] * y[i][j];


                 cout << endl << "Product of two matrix is: " << endl;
                 for(int i = 0; i < rows; ++i)
                 for(int j = 0; j < columns; ++j)
                {
                    cout << product[i][j] << "  ";
                    if(j == columns - 1)
                        cout << endl;
                 }
                 break;
            case 13:
                cout << "\nPlease Enter the 2 * 2 Matrix Items\n";
	            for(rows = 0; rows < 2; rows++)	
	            {
		        for(columns = 0; columns < 2; columns++) 
		         {
		    	cin >> x[rows][columns];
		            }		
	            }
	
	            m = ((x[0][0] * x[1][1]) - (x[0][1] * x[1][0]));
 
 	            cout << "\nThe Determinant of 2 * 2 Matrix = " << m;	
 
 	        
                break;

           case 14:
                DataFunctions();
                break;
                cout << "\n";

            case 15:
                LengthConversion();
                cout << "\n";
                cout << "\n";
                break;
                
            case 16:
                AreaConversion();
                cout << "\n";
                cout << "\n";
                break;

            case 17:
                VolumeConversion();
                cout << "\n";
                cout << "\n";
                break;    

            case 18:
                TempratureConversion();
                cout << "\n";
                cout << "\n";
                break; 

            case 19:
                WeightConversion();
                cout << "\n";
                cout << "\n";
                break; 

            case 20:
                AddComplexNumbers();
                cout << "\n";
                cout << "\n";
                break;

            case 21:
                SubtractComplexNumbers();
                cout << "\n";
                cout << "\n";
                break;

            case 22:
                MultiplyComplexNumbers();
                cout << "\n";
                cout << "\n";
                break;

            case 23:
                DivideComplexNumbers();
                cout << "\n";
                cout << "\n";
                break;

            case 0:
               std::  cout << "\nExit\n";
                break;

            default:
                std:: cout << "Invalid choice. Please try again.\n";
        }

    } 
    
    while (choice != 0);

    return 0;
}