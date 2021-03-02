/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@class NSURL;

@interface NviAudioFileWriter : NSObject {

	OpaqueExtAudioFileRef fFile;
	AudioStreamBasicDescription inASBD;
	AudioStreamBasicDescription outASBD;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) NSURL * fileURL;              //@synthesize fileURL=_fileURL - In the implementation block
-(void)dealloc;
-(NSURL *)fileURL;
-(void)addSamples:(const void*)arg1 numSamples:(long long)arg2 ;
-(void)endAudio;
-(id)initWithURL:(id)arg1 inputFormat:(AudioStreamBasicDescription)arg2 outputFormat:(AudioStreamBasicDescription)arg3 ;
@end
