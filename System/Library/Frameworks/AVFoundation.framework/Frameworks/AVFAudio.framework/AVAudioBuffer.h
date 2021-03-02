/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVAudioFormat;

@interface AVAudioBuffer : NSObject <NSCopying, NSMutableCopying> {

	void* _impl;

}

@property (nonatomic,readonly) AVAudioFormat * format; 
@property (nonatomic,readonly) const AudioBufferList* audioBufferList; 
@property (nonatomic,readonly) AudioBufferList* mutableAudioBufferList; 
-(AVAudioFormat *)format;
-(unsigned)byteLength;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setByteLength:(unsigned)arg1 ;
-(void)dealloc;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)byteCapacity;
-(id)initWithFormat:(id)arg1 byteCapacity:(unsigned)arg2 ;
-(const AudioBufferList*)audioBufferList;
-(AudioBufferList*)mutableAudioBufferList;
@end
