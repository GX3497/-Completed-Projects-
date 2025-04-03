//Lab 11 Structured Data
//November 29, 2022
//Description: Uses a structure for weatherinfo which holds and calculates and outputs calculated weather data

#include <iostream>
#include <iomanip>
using namespace std;

// Constant for the number of months
const int NUM_MONTHS = 12;

// Declaration of the WeatherInfo structure
struct WeatherInfo
{

	double rain; // Total rainfall
	double high; // High temperature
	double low; // Low temperature
	double averageTemp; // Average temperature'

};

//Main Function
int main()
{
    //Declarations
	int index;
	double highest = 0, aveAve, lowest = 32, totalRain = 0, aveMonthRain, rain;
	
	
	WeatherInfo year[NUM_MONTHS];

	// Get the weather data for each month.
	cout << "Enter Weather Data Below:\n";
	for (index = 0; index < NUM_MONTHS; index++)
	{
	
	cout << "Please Enter Weather Data For Month #: " << index + 1 << ". " << endl;
	// Get the rainfall.
	cout << "Average Rainfall: " << endl;
    cin >> year[index].rain;
	
	// Get the high temperature.
	cout << "High Temp: " << endl;
    cin >> year[index].high;
	
	// Validate the high temperature.
	while (year[index].high < -100 || year[index].high > 140)
	{
	if (year[index].high < -100 || year[index].high > 140)
	{
	cout << "error";
	return 0;
}

}

// Get the low temperature.
cout << "Low Temp: " << endl;
cin >> year[index].low;
cout << endl;
// Validate the low temperature.
while (year[index].low < -100 || year[index].low > 140)
{
if (year[index].low < -100 || year[index].low > 140)
{
cout << "Error";
return 0;	
}	
	
	
}

// Calculate the average temperature.
for(int i=0; i<12;i++)
{
year[i].averageTemp = year[i].high + year[i].low / 24;
}
}

// Calculate total annual rainfall

for(int i=0; i<12;i++)
{
	totalRain += year[i].rain;
}


// Calculate average monthly rainfall
for(int i=0; i<12;i++)
{
aveMonthRain = totalRain / 12;	
}
// Calculate the average monthly average temperature
for(int i=0; i<12;i++)
{
aveAve = year[i].high + year[i].low / 24;
}

// Find the highest & lowest temperatures
for(int i=0; i<12;i++)
{

if(year[i].high > highest)
{
highest = year[i].high;

}

}

for(int l=0; l<12;l++)
{
	
if(year[l].low < lowest)	
{
lowest = year[l].low;	
}	
	
	
	
}



//output
cout << setprecision(2);
cout << "\nTotal Rainfall: " << totalRain << endl;
cout << "Average Monthly Rain: " << aveMonthRain << endl;
cout << "Average Monthly Average Temperature: " << aveAve << endl;
cout << "Highest Temperature: " << highest << endl;
cout << "Lowest Temperature: " << lowest << endl;


return 0;
}