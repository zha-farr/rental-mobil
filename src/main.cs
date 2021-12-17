using System;
using System.Linq;
using System.Threading;
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
            new Mobil("Vulcar Warrener HKR", 125000, 36, 4, false, 1249, "Hitam", false, true),
        };
        private static List<string> colors = Enumerable.Range(28, 167).Cast<System.Drawing.KnownColor>().Select(x => x.ToString()).ToList();
        private static int[] garasis = new int[4]
        {
            4,5,6,3
        };
        private static Dictionary<int, List<Mobil>> KoleksiMobil = new Dictionary<int, List<Mobil>>();
        private static Random random = new Random(Environment.TickCount);
        static void Main(string[] args)
        {
            int garasiCount = 1;
            foreach (var garasi in garasis)
            {
                List<Mobil> list = new List<Mobil>();
                for (int i = 0; i < garasi; i++)
                {
                    Mobil terpilih = _template[random.Next(_template.Count)];
                    string warna = random.NextDouble() > 0.5 ? terpilih.ColorPriority : colors[random.Next(colors.Count)];
                    int km = random.Next(10000, 100000);
                    string plat = GeneratePlatNomor();
                    Mobil baru = terpilih;
                    baru.LicensePlate = plat;
                    baru.Warna = warna;
                    baru.KilometerUsed = km;
                    list.Add(baru);
                }
                KoleksiMobil.Add(garasi, list);
            }
            "Selamat Datang Di Rental Mobil".Println();
            "Koleksi mobil ada digarasi, silahkan pilih nomor garasi untuk melihat mobil yang ada di garasi".Println();
            foreach (var kvp in KoleksiMobil)
            {
                $"Garasi {garasiCount++}:".Println();
                int nomor = 1;
                foreach (var mbl in kvp.Value)
                {
                    $"{nomor++}.".Print();
                    foreach (var prop in mbl.GetType().GetProperties())
                    {
                        $"\t{prop.Name}: {prop.GetValue(mbl, null)}".Println();
                    }
                    Console.WriteLine();
                }
                Console.WriteLine();
            }
        }
        private static void Print(this string str) => Console.Write(str);
        private static void Println(this string str) => Console.WriteLine(str);
        private static string GeneratePlatNomor()
        {
            string[] awalan = { "AB", "B", "AA", "G", "H", "K", "AD" };
            string plat = awalan[random.Next(awalan.Length)] + random.Next(1000, 9999).ToString() + (char)random.Next(65, 91) + (char)random.Next(65, 91);
            if (random.NextDouble() < 0.25) plat += (char)random.Next(65, 91);
            return plat;
        }
        private static string FormatBoolean(bool boolean) => boolean ? "Ya" : "Tidak";
    }
    internal class Mobil
    {
        public string Model { get; set; }
        public string Warna { get; set; }
        public int HargaPerHari { get; set; }
        public string LicensePlate { get; set; }
        public int Garasi { get; set; }
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
