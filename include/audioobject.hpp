#ifndef AUDIOOBJECT_HPP
#define AUDIOOBJECT_HPP

#include "sampleinfo.hpp"
#include "iaudiodata.hpp"

class AudioObject
{
public:
	AudioObject(const SampleInfo& info, IAudioData* data);
	
	bool GenerateSamples(float* stream, size_t streamLength);
	void SetPos(double pos);
private:
	size_t m_audioPos;
	IAudioData* m_audiodata;
	size_t m_audioLength;
	SampleInfo m_sampleInfo;
	
	size_t PosToAbsolutePos(double pos);
}; 

#endif
