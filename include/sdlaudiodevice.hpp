#ifndef SDL_AUDIO_DEVICE_HPP
#define SDL_AUDIO_DEVICE_HPP

#include "iaudiodevice.hpp"

class SdlAudioDevice : public IAudioDevice
{
public: 
	virtual IAudioData* CreateAudioFromFile(const std::string& filePath);
	virtual void ReleaseAudio(IAudioData* audioData);
private:
};

#endif
