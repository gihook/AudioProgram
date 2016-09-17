#ifndef SDL_AUDIO_CONTEXT_HPP
#define SDL_AUDIO_CONTEXT_HPP

#include "iaudiocontext.hpp"
#include <SDL2/SDL.h>
#include <vector>

class SdlAudioContext : public IAudioContext
{
public:
	SdlAudioContext();
	virtual ~SdlAudioContext();
	virtual void PlayAudio(AudioObject& ao);
	virtual void PauseAudio(AudioObject& ao);
	virtual void StopAudio(AudioObject& ao);
	
	void GenerateSamples(Uint8* stream, int streamLength);
private:
	SDL_AudioDeviceID m_device;
	std::vector<float> m_stream;
	std::vector<AudioObject*> m_playingAudio;
	
	bool RemoveAudio(AudioObject& ao);
	
	SdlAudioContext(SdlAudioContext& other) { (void)other; }
	void operator=(const SdlAudioContext& other) { (void)other; }
};

#endif
