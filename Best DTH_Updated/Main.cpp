#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <iomanip>
#include <map>
#include <string>
#include <stdlib.h> 
#include "Channel.h"
#include "Package.h"
#include "DTH.h"

using namespace std;

int main()
{
    int choice;
    string pname, dname, pkname, chname;
    double ucost;
    Channel ch;
    Package pkg;
    DTH dth;    
    list<Channel> channelList,channelLists;;
    list<Channel> kidsPackChannels = {
        Channel(1, "Pogo", "English", "Cartoon", true),
        Channel(2, "Chutti", "Tamil", "Cartoon", true),
        Channel(3, "CN", "English", "Cartoon", true)
    };

    list<Channel> bumperPackChannels = {
        Channel(1, "GeminiMovies", "Telugu", "Movies", false),
        Channel(2, "VijaySuper", "Tamil", "Movies", false),
        Channel(3, "Colors", "Hindi", "Movies", true)
    };

    list<Channel> ultraPackChannels = {
        Channel(1, "Colors", "Hindi", "Movies", true),
        Channel(2, "SonyMax", "Hindi", "Sports", false),
        Channel(3, "StarPlus", "Hindi", "Serials", true),
        Channel(4, "Aadithya", "Tamil", "Comedy", false)
    };

    list<Channel> myFamilyPackChannels = {
        Channel(1, "Discovery", "English", "Documentary", true),
        Channel(2, "HBO", "English", "Movies", true),
        Channel(3, "StarWorld", "English", "Series", true),
        Channel(4, "NatGeo", "English", "Documentary", true)
    };

    map<string, Package> packageMap;
    packageMap["KP-11"] = Package("KidsPack", "KP-11", "Cartoon", 501, 5, "SunDirect", kidsPackChannels);
    packageMap["BP-02"] = Package("BumperPack", "BP-02", "Movies", 399, 3, "SunDirect", bumperPackChannels);
    packageMap["UP-45"] = Package("UltraPack", "UP-45", "AllinOne", 240, 6, "Airtel", ultraPackChannels);
    packageMap["MFP-99"] = Package("MyFamilyPack", "MFP-99", "AllinOne", 315, 6, "TataSky", myFamilyPackChannels);

    do {
        cout << "\n1. Add the package details" << endl;
        cout << "2. Add the channel details to a package" << endl;
        cout << "3. Display the package and channel details" << endl;
        cout << "4. Display the number of channels under each package" << endl;
        cout << "5. Display the package based on the DTH" << endl;
        cout << "6. Remove the channel based on the hd quality" << endl;
        cout << "7. Find the package and DTH name based on channel name" << endl;
        cout << "8. Find the best DTH based on type and cost" << endl;
        cout << "9. Exit" << endl;
        cout << "Enter your choice\n";
        cin >> choice;

        switch (choice) {
        case 1: // Add package details
        {
            string packageDetails;
            cout << "Enter the package details\n";
            cin.ignore();
            getline(cin, packageDetails);


            pkg.addPackage(packageMap, packageDetails);
            cout << "Package added successfully\n" << endl;
            break;
        }

        case 2: // Add channel details to a package
        {
            string packageCode;
            cout << "Enter the package code to which channels should be added\n";
            cin >> packageCode;

            int numChannels;
            cout << "Enter the number of channels to add\n";
            cin >> numChannels;
            cout << "Enter the channel details\n";
            for (int i = 0; i < numChannels; i++) {
                string channelDetails;
                cin.ignore();
                getline(cin, channelDetails);
                Channel ch;  
                channelList.push_back(ch);
            }

            pkg.addChannelsToPackage(packageMap,packageCode, channelList);
            break;
        }
        case 3: // Display package and channel details
            for (auto& pair : packageMap) {
                pair.second.displayPackageDetails(); 
            }
            break;
        case 4: // Display the number of channels under each package
            pkg.displayNoOfChannelsinPackage(packageMap);
            break;
        case 5: // Display the package based on the DTH
            cout << "Enter the DTH name" << endl;
            cin >> dname;
            pkg.findPackageBasedOnDTH(packageMap, dname);
            break;
        case 6: // Remove the channel based on the hd quality
            cout << "Enter the package name" << endl;
            cin >> pkname;
            cout<<"Below channels deleted successfully"<<endl;
            for (auto& pair : packageMap) {
                if (pair.second.getName() == pkname) {
                    channelLists = pair.second.getChannelList();
                    ch.deleteChannelBasedOnHD(channelLists, false);
                    pair.second.setChannelList(channelLists);
                }
            }
            break;
        case 7: // Find the package and DTH name based on channel name
            cout << "Enter the channel name" << endl;
            cin >> chname;
            pkg.findPackageBasedOnChannel(packageMap, chname);
            break;
        case 8: // Find the best DTH based on type and cost
            dth.getBestDTH(packageMap);
            break;
        case 9:
            cout << "Thank You!!!";
            break;
        }
    } while (choice < 9);
    return 0;
}


