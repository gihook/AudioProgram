#ifndef IAUDIOCONTEXT_HPP
#define IAUDIOCONTEXT_HPP

#include "audioobject.hpp"

class IAudioContext
{
public:
	virtual ~IAudioContext() {}
	virtual void PlayAudio(AudioObject& ao) = 0;
	virtual void PauseAudio(AudioObject& ao) = 0;
	virtual void StopAudio(AudioObject& ao) = 0;
private:
};


#endif
