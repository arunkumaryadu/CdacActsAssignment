#include<iostream>
#include<string>
using namespace std;
namespace nm056
{
class IAudio
{
public:
	virtual void CreateAudio()=0;
	virtual void AttachAudio()=0;
};
class IVideo
{
public:
	virtual void CreateVideo()=0;
	virtual void AttachVideo()=0;
};
class IMag
{
public:
	virtual void ZoomIn()=0;
	virtual void ZoomOut()=0;
};

class IFactory //Neeraj
{
public:
	virtual IAudio* BuildAudio()=0;
	virtual IVideo* BuildVideo()=0;
	virtual IMag* BuildMag()=0;
};

class ExpAudio :public IAudio
{
public:
	virtual void CreateAudio()
	{
		cout<<"Exp Audio Created"<<endl;
	}
	virtual void AttachAudio()
	{
		cout<<"Exp Audio Attached"<<endl;
	}
};


class ExpVideo:public IVideo
{
public:
	virtual void CreateVideo()
	{
		cout<<"Exp Video Created"<<endl;
	}
	virtual void AttachVideo()
	{
		cout<<"Exp Video Attached"<<endl;
	}
};

class ExpMag:public IMag
{
public:
	virtual void ZoomIn()
	{
		cout<<"Exp Zoom In"<<endl;
	}
	virtual void ZoomOut()
	{
		cout<<"Exp Zoom Out"<<endl;
	}
};

class ExpFactory:public IFactory 
{
public:
	virtual IAudio* BuildAudio()
	{
		return new ExpAudio();
	}
	virtual IVideo* BuildVideo()
	{
		return new ExpVideo();
	}
	virtual IMag* BuildMag()
	{
		return new ExpMag();
	}
};


class ChromeAudio :public IAudio
{
public:
	virtual void CreateAudio()
	{
		cout<<"Chrome Audio Created"<<endl;
	}
	virtual void AttachAudio()
	{
		cout<<"Chrome Audio Attached"<<endl;
	}
};


class ChromeVideo:public IVideo
{
public:
	virtual void CreateVideo()
	{
		cout<<"Chrome Video Created"<<endl;
	}
	virtual void AttachVideo()
	{
		cout<<"Chrome Video Attached"<<endl;
	}
};

class ChromeMag:public IMag
{
public:
	virtual void ZoomIn()
	{
		cout<<"Chrome Zoom In"<<endl;
	}
	virtual void ZoomOut()
	{
		cout<<"Chrome Zoom Out"<<endl;
	}
};

class ChromeFactory:public IFactory 
{
public:
	virtual IAudio* BuildAudio()
	{
		return new ChromeAudio();
	}
	virtual IVideo* BuildVideo()
	{
		return new ChromeVideo();
	}
	virtual IMag* BuildMag()
	{
		return new ChromeMag();
	}
};


class FireFoxAudio :public IAudio
{
public:
	virtual void CreateAudio()
	{
		cout<<"FireFox Audio Created"<<endl;
	}
	virtual void AttachAudio()
	{
		cout<<"FireFox Audio Attached"<<endl;
	}
};


class FireFoxVideo:public IVideo
{
public:
	virtual void CreateVideo()
	{
		cout<<"FireFox Video Created"<<endl;
	}
	virtual void AttachVideo()
	{
		cout<<"FireFox Video Attached"<<endl;
	}
};

class FireFoxMag:public IMag
{
public:
	virtual void ZoomIn()
	{
		cout<<"FireFox Zoom In"<<endl;
	}
	virtual void ZoomOut()
	{
		cout<<"FireFox Zoom Out"<<endl;
	}
};


class FireFoxFactory:public IFactory 
{
public:
	virtual IAudio* BuildAudio()
	{
		return new FireFoxAudio();
	}
	virtual IVideo* BuildVideo()
	{
		return new FireFoxVideo();
	}
	virtual IMag* BuildMag()
	{
		return new FireFoxMag();
	}
};

IFactory * CreateFactory(int choice)
{
	if(10==choice)
	{
		return new ExpFactory();
	}
	else if(20==choice)
	{
		return new ChromeFactory();
	}
	else
	{
		return new FireFoxFactory();
	}
}

void main()
{
	IFactory *factory=CreateFactory(20);
	IAudio *aud=factory->BuildAudio();
	aud->CreateAudio();
	aud->AttachAudio();
	IVideo *video=factory->BuildVideo();
	video->CreateVideo();
	video->AttachVideo();
	IMag *mag=factory->BuildMag();
	mag->ZoomIn();
	mag->ZoomOut();
}
}