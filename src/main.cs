using System;
using System.Collections.Generic;

namespace RentalMobil
{
    internal static class Program
    {
        internal static List<Mobil> _template = new List<Mobil>()
        {
            new Mobil("Debawchee Champion", 500000, 40, 2, true, 2500, "Merah", false, true),
            new Mobil("Coil Voltic", 450000, 50, 2, true, 2500, "Hitam", true, false),
            new Mobil("Canis Mesa", 200000, 40, 4, false, 1949, "Cokelat", false, false),
            new Mobil("Pegassi Toreador", 850000, 50, 4, true, 3000, "Biru", false, true),
            new Mobil("Declasse Granger", 200000, 41, 7, true, 1549, "Hitam", false, true),
            new Mobil("Karin Calico", 400000, 47, 2, true, 2499, "Putih", false, true),
            new Mobil("Dinka Jester RR", 560000, 52, 2, true, 2749, "Putih", false, true),
        };
        static void Main(string[] args)
        {
            
        }
        private static void Print(this string str) => Console.Write(str);
        private static void Println(this string str) => Console.WriteLine(str);
    }
    internal class Mobil
    {
        public string Model { get; set; }
        public string Warna { get; set; }
        public int HargaPerHari { get; set; }
        public string LicensePlate { get; set; }
        public int FuelCapacity { get; set; }
        public int KilometerUsed { get; set; }
        public int SeatCapacity { get; set; }
        public bool AirConditionerEnabled { get; set; }
        /// <summary>
        /// In some country also called CC
        /// </summary>
        public int EngineDisplacement { get; set; }
        public string ColorPriority { get; set; }
        public bool IsAutoMobile { get; set; }
        public bool IsUsingPetrol { get; set; }

        public Mobil(string model,
                    int harga,
                    int fuelCap,
                    int seatCap,
                    bool ac,
                    int cc,
                    string color,
                    bool isMatic,
                    bool isPetrol)
        {
            Model = model;
            HargaPerHari = harga;
            FuelCapacity = fuelCap;
            SeatCapacity = seatCap;
            AirConditionerEnabled = ac;
            EngineDisplacement = cc;
            ColorPriority = color;
            IsAutoMobile = isMatic;
            IsUsingPetrol = isPetrol;
        }
    }
}
