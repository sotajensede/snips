/*
	Read machine - depending on what "mode" is - either reads from a file to
	standard output or reads from a file placing each character into a 2 
	dimensional array.
*/

void readMachine(ifstream& file, int mode)
{
	string fileGuts,line;
	if(!file)
		cout << "File not found!\n\n";
	switch(mode){
		case 1: 
			while(getline(file, line)){	
				fileGuts+=line;
				fileGuts.push_back('\n');
				}
			cout << fileGuts;
			break;
		case 2:
			int y=0;
			int x=0;
			while(getline(file,line)){
				for(y=0;y<MAP_WIDTH;y++){
					if(x==xpos && y==ypos)
						map[y][x]='@';
					else map[y][x]=line[y];
					}
				++x;
				}
			break;
		}
	cout << endl;
}

//Write some things (placeholder, no use)
void writeMachine(ofstream& file)
{
	string words[10];
	for (int i=0; i<10; i++){
		cin >> words[i];
		file << words[i] << " ";
		cout << endl;
	}
}