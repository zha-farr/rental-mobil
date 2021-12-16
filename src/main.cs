using System;

namespace RentalMobil
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
        }
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
