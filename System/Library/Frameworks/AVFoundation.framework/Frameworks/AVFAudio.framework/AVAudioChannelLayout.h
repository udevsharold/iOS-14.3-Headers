/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AVAudioChannelLayout : NSObject <NSSecureCoding> {

	unsigned _layoutTag;
	AudioChannelLayout* _layout;
	void* _reserved;

}

@property (nonatomic,readonly) unsigned layoutTag; 
@property (nonatomic,readonly) const AudioChannelLayout* layout; 
@property (nonatomic,readonly) unsigned channelCount; 
+(BOOL)supportsSecureCoding;
+(id)layoutWithLayout:(const AudioChannelLayout*)arg1 ;
+(id)layoutWithLayoutTag:(unsigned)arg1 ;
-(unsigned)layoutTag;
-(id)init;
-(unsigned)channelCount;
-(void)dealloc;
-(id)initWithLayout:(const AudioChannelLayout*)arg1 ;
-(unsigned long long)layoutSize;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(const AudioChannelLayout*)layout;
-(id)initWithLayoutTag:(unsigned)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

