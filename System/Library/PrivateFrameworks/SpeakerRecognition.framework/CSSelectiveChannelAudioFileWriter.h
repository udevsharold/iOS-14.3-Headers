/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeakerRecognition/SpeakerRecognition-Structs.h>
#import <libobjc.A.dylib/CSAudioFileWriter.h>

@class NSArray, NSURL, NSString;

@interface CSSelectiveChannelAudioFileWriter : NSObject <CSAudioFileWriter> {

	BOOL isWriting;
	OpaqueExtAudioFileRef fFile;
	AudioStreamBasicDescription inASBD;
	AudioStreamBasicDescription outASBD;
	NSArray* selectedChannelList;
	unsigned _numberOfChannels;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) NSURL * fileURL;                        //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) unsigned numberOfChannels;              //@synthesize numberOfChannels=_numberOfChannels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSURL *)fileURL;
-(BOOL)addSamples:(const void*)arg1 numSamples:(long long)arg2 ;
-(unsigned)numberOfChannels;
-(BOOL)endAudio;
-(id)initWithURL:(id)arg1 inputFormat:(AudioStreamBasicDescription)arg2 outputFormat:(AudioStreamBasicDescription)arg3 channelBitset:(unsigned long long)arg4 ;
@end

