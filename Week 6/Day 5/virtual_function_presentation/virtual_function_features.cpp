//#include <iostream>
//using namespace std;
//
//class Weapon
//{
//    public:
//       void features(){
//            cout << "Loading weapon features.\n";
//        }
//};
//
//class Sniper_rifle: public Weapon
//{
//    public:
//       void features(){
//           cout << "Loading Sniper rifle features.\n";
//        }
//};
//
//class Laser_gun: public Weapon
//{
//    public:
//       void features(){
//           cout << "Loading Laser gun features.\n";
//        }
//};
//
//class Loader
//{
//   public:
//     void loadFeatures(Weapon *weapon){
//        weapon->features();
//     }
//};
//
//int main()
//{
//    Loader *l = new Loader;
//    Weapon *w;
//    Sniper_rifle sr;
//    Laser_gun lg;
//
//    w = &sr;
//    l->loadFeatures(w);
//
//    w = &lg;
//    l->loadFeatures(w);
//
//    return 0;
//}
