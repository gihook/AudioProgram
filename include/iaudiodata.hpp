#ifndef IAUDIODATA_HPP
#define IAUDIODATA_HPP

#include "sampleinfo.hpp"
#include <cstddef>

class IAudioData
{
public:
	virtual ~IAudioData() {}
	virtual size_t GenerateSamples(float* stream, size_t streamLength, size_t pos, const SampleInfo& info) = 0;
	virtual size_t GetAudioLength() = 0;
private:
};

#endif
