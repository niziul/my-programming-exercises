#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	float user_weight;

	float MET_running = 6.0;
	float MET_swimming = 8.0;
	float MET_bicycling = 7.0;

	float time_the_user_practiced_running_in_the_week_h;
	float time_the_user_practiced_running_in_the_week_m;

	float time_the_user_practiced_swimming_in_the_week_h;
	float time_the_user_practiced_swimming_in_the_week_m;

	float time_the_user_practiced_bicycling_in_the_week_h;
	float time_the_user_practiced_bicycling_in_the_week_m;

	cout << "Enter your weight in kilograms: ";
	cin >> user_weight;

	cout << endl;

	cout << "Enter the total time (ex: 2h30m) you ran during the week." << endl;
	cout << "[ hours ] : ";
	cin >> time_the_user_practiced_running_in_the_week_h;
	cout << "[ minutes ] : ";
	cin >> time_the_user_practiced_running_in_the_week_m;

	cout << endl;

	cout << "Enter the total time (ex: 1h00m) you swim during the week." << endl;
	cout << "[ hours ] : ";
	cin >> time_the_user_practiced_swimming_in_the_week_h;
	cout << "[ minutes ] : ";
	cin >> time_the_user_practiced_swimming_in_the_week_m;

	cout << endl;

	cout << "Enter the total time (ex: 1h20m) you have bicycling during the week." << endl;
	cout << "[ hours ] : ";
	cin >> time_the_user_practiced_bicycling_in_the_week_h;
	cout << "[ minutes ] : ";
	cin >> time_the_user_practiced_bicycling_in_the_week_m;

	cout << endl;

	float total_calories_burned_with_running_this_week = MET_running * user_weight * (time_the_user_practiced_running_in_the_week_h + (time_the_user_practiced_running_in_the_week_m / 60));
	float total_calories_burned_with_swimming_this_week = MET_swimming * user_weight * (time_the_user_practiced_swimming_in_the_week_h + (time_the_user_practiced_swimming_in_the_week_m / 60));
	float total_calories_burned_with_bicycling_this_week = MET_bicycling * user_weight * (time_the_user_practiced_bicycling_in_the_week_h + (time_the_user_practiced_bicycling_in_the_week_m / 60));

	float total_of_calories_burned_this_week = total_calories_burned_with_running_this_week + total_calories_burned_with_swimming_this_week + total_calories_burned_with_bicycling_this_week;

	cout << "[ You have managed to burn a total of " << total_of_calories_burned_this_week << " calories this week! ]";
	
	cout << endl;
	cout << endl;
	
	cout << "- total calories burned with running this week: " << total_calories_burned_with_running_this_week << "kcal;";

	cout << endl;

	cout << "- total calories burned with swimming this week: " << total_calories_burned_with_swimming_this_week << "kcal;";

	cout << endl;

	cout << "- total calories burned with bicycling this week: " << total_calories_burned_with_bicycling_this_week << "kcal;";
	
	cout << endl;

	return 0;
}