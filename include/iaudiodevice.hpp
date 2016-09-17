#ifndef IAUDIODEVICE_HPP
#define IAUDIODEVICE_HPP

#include <string>
#include "iaudiodata.hpp"

class IAudioDevice
{
public:
	virtual ~IAudioDevice() {}
	virtual IAudioData* CreateAudioFromFile(const std::string& filePath) = 0;
	virtual void ReleaseAudio(IAudioData* audioData) = 0;
private:
};

#endif
