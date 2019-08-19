#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream rom;
	char rom_buffer[0x1000];

	rom.open("Roms/Stars_Sergey_Naydenov_2010.ch8", ios::in | ios::binary | ios::ate);
	
	if (rom.is_open())
	{
		cout << "File is open";
		rom.seekg(0, ios::beg);
		rom.read(rom_buffer, 0x1000);
		rom.close();
	}
	else {
		cout << "File is not open";
		ofstream log;
		log.open("log.txt");
		log << "ch8 file did not load.";
		log.close();
	}
	
	return 0;
}