#include <iostream>
#include <SDL2/SDL.h>
#include <vector>

#include "iaudiodevice.hpp"
#include "iaudiocontext.hpp"
#include "audioobject.hpp"

#include "sdlaudiodevice.hpp"
#include "sdlaudiocontext.hpp"

#include "configreader.hpp"


int main()
{
	SDL_Init(SDL_INIT_AUDIO);
	
	IAudioDevice* device = new SdlAudioDevice();
	IAudioContext* context = new SdlAudioContext();
	
	ConfigReader configReader("configuration.txt");
	std::vector<FileInfo> fileInfos = configReader.GetFileInfos();
	
	IAudioData* data = device->CreateAudioFromFile(fileInfos[0].filePath);
	
	SampleInfo info;
	info.volume = 1.0;
	info.pitch = 1.0;
	
	AudioObject sound(info, data);
	
	char in = 0;
	
	while (in != 'q')
	{
		std::cin >> in;
		
		switch (in)
		{
			case 'a':
				context->PlayAudio(sound);
				break;
			case 's':
				context->PauseAudio(sound);
				break;
			case 'd':
				context->StopAudio(sound);
				break;
		}
	}
	
	device->ReleaseAudio(data);
	delete device;
	delete context;
	
	SDL_Quit();
	
	return 0;
}
