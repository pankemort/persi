
Given the package and channel details, write a program to perform the following functions using it.
1. Add the package details
2. Add the channel details to a package
3. Display the package and channel details
4. Display the number of channels under each package
5. Display the package based on the DTH
6. Remove the channel based on the hd quality
7. Find the package and DTH name based on channel name
8. Find the best DTH based on type and cost

The header file Channel.h has been created with the following attributes:
DataType    	Name
int    	id
string    	name
string    	language
string    	type
bool   	hd_quality
-
The following methods are declared in this file. And also required getters and setters are also declared in this file

Member Functions	 Description
void deleteChannelBasedOnHD(list<Channel>channelList, bool hd)	This function is used to delete the channels which are not present in the given hd quality.
If all the channels are in hd quality, then display “All channels in this package are in hd quality”.
Else delete the channel details and display the channels deleted.

The class Channel.cpp has been created. Define all the above member functions inside this class.

The header file Package.h has been created with the following attributes
DataType    	Name
string    	name
string    	reference_code
string    	type
double    	cost
int   	validity
DTH	dth
list<Channel>	channelList

The following methods are declared in this file. And also required getters and setters are also declared in this file
Member function	Description
void addPackage(map<string, Package>& packageMap, const string& packageDetails)	This function accepts the new package detail and adds the new package to the packageMap.
void addChannelsToPackage(map<string, Package>& packageMap, const string& packageCode, const list<Channel>& channels)	This function accepts the channel details and the package reference code to which all these new channel details need to be added.
void displayPackageDetails()	This function is used to display the package and the channel details.
void displayNoOfChannelsinPackage(map<string, Package> packageMap)	This function is used to display the number of channels under each package.
void findPackageBasedOnDTH(map<string, Package) packageMap, string dthname)	This function accepts the package map, dth name. Display the package details with dth as the given dth name in the specified format.

If the dth name does not exist, then display “Packages not found for the given DTH”.

Format specifier:
cout << "Package Name" << setw(25) << "Type" << setw(25) << "Cost" << setw(25) << "Validity" << setw(25) << "Number of channels" << endl;
void findPackageBasedOnChannel(map<string, Package) packageMap, string channelname)	 DTH name with the given channel present in the package channel list.

If the channel name does not exist in any of the packages, then display “Channel name not found in any package”.

Format specifier:
cout << "Package Name" << setw(25) << "DTH Name" << setw(25) << endl;

The class Package.cpp has been created. Define all the above member functions inside this class.

The header file DTH.h has been created with the following attributes
DataType    	Name
string    	name
string    	website
int	estimated_year
list<Package>	packageList

The following methods are declared in this file. And also required getters and setters are also declared in this file
Member function	Description
void getBestDTH(map <string, Package > packageMap)	This function takes list of DTH as argument and return the best DTH option by the below criteria.

The Best DTH is the DTH with best package of type "AllinOne". The packages are compared based on cost per channel (assume the validity of the packs are same). The best package is the package with lowest cost per channel.

The class Package.cpp has been created. Define all the above member functions inside this class.

The class Main.cpp has been created and in the main function, read all the inputs, form a package channel summary map and display it. 

Sample Input And Output:

1. Add the package details
2. Add the channel details to a package
3. Display the package and channel details
4. Display the number of channels under each package
5. Display the package based on the DTH
6. Remove the channel based on the hd quality
7. Find the package and DTH name based on channel name
8. Find the best DTH based on type and cost
9. Exit
Enter your choice
3
Package Name: BumperPack
Channels in this package:
GeminiMovies
VijaySuper
Colors

Package Name: KidsPack
Channels in this package:
Pogo
Chutti
CN

Package Name: MyFamilyPack
Channels in this package:
Discovery
HBO
StarWorld
NatGeo

Package Name: UltraPack
Channels in this package:
Colors
SonyMax
StarPlus
Aadithya
1. Add the package details
2. Add the channel details to a package
3. Display the package and channel details
4. Display the number of channels under each package
5. Display the package based on the DTH
6. Remove the channel based on the hd quality
7. Find the package and DTH name based on channel name
8. Find the best DTH based on type and cost
9. Exit
Enter your choice
4
Package NameNumber of channels
BP-02              3
KP-11              3
MFP-99              4
UP-45              4
1. Add the package details
2. Add the channel details to a package
3. Display the package and channel details
4. Display the number of channels under each package
5. Display the package based on the DTH
6. Remove the channel based on the hd quality
7. Find the package and DTH name based on channel name
8. Find the best DTH based on type and cost
9. Exit
Enter your choice
5
Enter the DTH name
SunDirect
Package Name                     Type                     Cost                 Validity       Number of channels
BumperPack                   Movies                      399                        3                        3
KidsPack                  Cartoon                      501                        5                        3
1. Add the package details
2. Add the channel details to a package
3. Display the package and channel details
4. Display the number of channels under each package
5. Display the package based on the DTH
6. Remove the channel based on the hd quality
7. Find the package and DTH name based on channel name
8. Find the best DTH based on type and cost
9. Exit
Enter your choice
6
Enter the package name
KidsPack
All channels in this package are in hd quality
1. Add the package details
2. Add the channel details to a package
3. Display the package and channel details
4. Display the number of channels under each package
5. Display the package based on the DTH
6. Remove the channel based on the hd quality
7. Find the package and DTH name based on channel name
8. Find the best DTH based on type and cost
9. Exit
Enter your choice
6
Enter the package name
BumperPack
Below channels deleted successfully
GeminiMovies
VijaySuper
1. Add the package details
2. Add the channel details to a package
3. Display the package and channel details
4. Display the number of channels under each package
5. Display the package based on the DTH
6. Remove the channel based on the hd quality
7. Find the package and DTH name based on channel name
8. Find the best DTH based on type and cost
9. Exit
Enter your choice
7
Enter the channel name
Chutti
Package Name DTH Name
KidsPack SunDirect
1.Add the channel and package details
2.Number of channels under each package
3.Display the package based on DTH
4.Update the package cost
5.Remove the channel based on hd quality
6.Find the package and DTH name based on channel name
7.Find the best DTH based on type and cost
8.Exit
Enter your choice
8
The best DTH for everyone is Airtel
1. Add the package details
2. Add the channel details to a package
3. Display the package and channel details
4. Display the number of channels under each package
5. Display the package based on the DTH
6. Remove the channel based on the hd quality
7. Find the package and DTH name based on channel name
8. Find the best DTH based on type and cost
9. Exit
Enter your choice
1
Enter the package details
MusicPack,MU-11,Musics,201,1,SunDirect
Package added successfully
1. Add the package details
2. Add the channel details to a package
3. Display the package and channel details
4. Display the number of channels under each package
5. Display the package based on the DTH
6. Remove the channel based on the hd quality
7. Find the package and DTH name based on channel name
8. Find the best DTH based on type and cost
9. Exit
Enter your choice
2
Enter the package name to which channels should be added
MusicPack
Enter the number of channels to add
2
Enter the channel details
SunMusic,Tamil,Music,true
Isai,Tamil,Music,true
Channels added to the MusicPack package successfully
1. Add the package details
2. Add the channel details to a package
3. Display the package and channel details
4. Display the number of channels under each package
5. Display the package based on the DTH
6. Remove the channel based on the hd quality
7. Find the package and DTH name based on channel name
8. Find the best DTH based on type and cost
9. Exit
Enter your choice
9
Thank You!!!