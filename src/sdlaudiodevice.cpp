#include "sdlaudiodevice.hpp"
#include "sdlwavaudiodata.hpp"


IAudioData* SdlAudioDevice::CreateAudioFromFile(const std::string& filePath)
{
	return new SdlWavAudioData(filePath, false);
}

void SdlAudioDevice::ReleaseAudio(IAudioData* audioData)
{
	if (audioData)
	{
		delete audioData;
	}
}
