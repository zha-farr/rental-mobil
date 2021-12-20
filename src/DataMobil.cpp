#include "iostream"
using namespace std;

string models[] =
{
	"Daihatsu Ayla", "Toyota Raize", "Nissan Livina", "Daihatsu Gran Max", "Toyota Land cruiser", "Toyota Vellfire", "Chevrolet Colorado",
	"Toyota Veloz", "Daihatsu Sigra", "Hummer", "Range Rover sport", "Toyota Alphard", "Toyota Avanza ", "Toyota Camry", "Honda CRV 1.5L Turbo ",
	"Honda CRV 1.5L Turbo Prestige", "Toyota Fortuner ", "Toyota Hiace Premio", "Hyundai H1 Royale", "Hyundai H1 XG ", "Toyota Kijang Innova",
	"Toyota Kijang Innova Venturer ", "Lexus LX 570", "Mercedes Benz C300 AMG", "Mercedes Benz E250", "Mercedes Benz E300 AMG",
	"Mercedes Benz S400 Hybrid", "Toyota Voxy", "Daihatsu Xenia", "Mitsubishi Xpander", "Honda Brio", "Honda Jazz", "Toyota Yaris",
	"Nissan March", "Nissan Evalia", "Daihatsu Luxio",
};
string fuels[] =
{
	"45", "36", "55", "45", "93", "75", "53", "45", "36", "6,2", "80", "75", "45", "60", "58",
	"53", "80", "70", "75", "75", "55", "55", "138", "66", "66", "66", "70", "55", "43", "45",
	"35", "40", "42", "41", "55", "43",
};
string seats[] =
{
	"5", "5", "7", "8", "7", "7", "7", "7", "7", "5", "5", "7", "7", "5", "7", "7", "7", "16", "8",
	"9", "7", "6", "7", "5", "5", "5", "5", "7", "7", "7", "5", "5", "5", "5", "7", "8",
};
string engines[] =
{
	"1000", "998", "1500", "1330", "4500", "2494", "2231", "1496", "998", "6200", "3550", "2494", "1329", "2494",
	"1498", "1498", "2393", "2755", "2497", "2497", "2393", "2393", "5663", "1991", "1991", "1991", "3498", "1987",
	"989", "1499", "1199", "1497", "1496", "1198", "1498", "1495",
};
int prices[] =
{
	250000, 350000, 250000, 350000, 11000000, 2500000, 1500000, 400000, 275000, 9500000, 5000000, 2200000,
	400000, 1300000, 1200000, 1300000, 1400000, 1450000, 1400000, 850000, 850000, 1000000, 11000000, 2700000,
	3000000, 3200000, 11000000, 1200000, 400000, 600000, 275000, 350000, 400000, 300000, 325000, 325000,
};
string colors[] =
{
	"Red", "Black", "Brown", "Blue", "Silver", "Silver", "Red", "Silver", "Black", "Aqua Blue", "Black", "Graphite", "Dark Brown",
	"Burning Black", "Crystal Black Pearl", "White Orchid Pearl", "Dark Grey", "Silver", "Silver", "Silver", "Phantom Brown",
	"Silver Metalic", "White", "Polar White", "Silver", "Blue", "Bright White", "White Pearl", "Icy White", "Black", "Tafetta White",
	"Rallye Red", "Attitude Black Mica", "Ruby Red", "Grey", "Icy White",
};
string haveAC[] =
{
	"Tidak", "Ya", "Ya", "Tidak", "Ya", "Tidak", "Ya", "Tidak", "Ya", "Ya", "Ya", "Ya", "Ya", "Ya", "Ya",
	"Ya", "Ya", "Ya", "Ya", "Ya", "Ya", "Ya", "Ya", "Ya", "Ya", "Ya", "Ya", "Ya", "Ya", "Ya", "Ya", "Ya",
	"Ya", "Ya", "Ya", "Ya",
};
string engineTypes[] =
{
	"Otomatis", "Otomatis", "Otomatis", "Manual", "Otomatis", "Otomatis", "Otomatis", "Manual", "Otomatis", "Manual", "Otomatis",
	"Otomatis", "Manual", "Otomatis", "Otomatis", "Otomatis", "Otomatis", "Manual", "Otomatis", "Otomatis", "Otomatis", "Otomatis",
	"Otomatis", "Otomatis", "Otomatis", "Otomatis", "Otomatis", "Otomatis", "Otomatis", "Manual", "Manual", "Manual", "Manual",
	"Manual", "Otomatis", "Manual",
};
string fuelTypes[] =
{
	"Bensin", "Bensin", "Bensin", "Bensin", "Diesel", "Bensin", "Bensin", "Bensin", "Bensin", "Bensin", "Bensin", "Bensin",
	"Bensin", "Bensin", "Bensin", "Bensin", "Diesel", "Diesel", "Diesel", "Diesel", "Diesel", "Diesel", "Bensin", "Bensin",
	"Bensin", "Bensin", "Bensin", "Bensin", "Bensin", "Bensin", "Bensin", "Bensin", "Bensin", "Bensin", "Bensin", "Bensin",
};