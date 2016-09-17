#ifndef SDL_AUDIO_DEVICE_HPP
#define SDL_WAV_AUDIO_DATA_HPP

class SdlAudioDevice : public IAudioDevice
{
public: 
	virtual IAudioData* CreateAudioFromFile(const std::string& filePath);
	virtual void ReleaseAudio(IAudioData* audioData);
private:
}

#endif
