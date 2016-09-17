#ifndef SDL_WAV_AUDIO_DATA_HPP
#define SDL_WAV_AUDIO_DATA_HPP

#include "iaudiodata.hpp"
#include <SDL2/SDL.h>
#include <string>

class SdlWavAudioData : public IAudioData
{
public:
	SdlWavAudioData(const std::string& fileName, bool streamFromFile);
	virtual ~SdlWavAudioData();
	
	virtual size_t GenerateSamples(float* stream, size_t streamLength, size_t pos, const SampleInfo& info);
	virtual size_t GetAudioLength();
private:
	Uint8* m_pos;
	Uint8* m_start;
	Uint8* m_end;
	//Uint32 m_length;

	SdlWavAudioData(SdlWavAudioData& other) { (void)other; }
	void operator=(const SdlWavAudioData& other) { (void)other; }
};

#endif
