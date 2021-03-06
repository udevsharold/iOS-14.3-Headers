/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@interface AVAudioUnitEQFilterParameters : NSObject {

	void* _impl;

}

@property (assign,nonatomic) long long filterType; 
@property (assign,nonatomic) float frequency; 
@property (assign,nonatomic) float bandwidth; 
@property (assign,nonatomic) float gain; 
@property (assign,nonatomic) BOOL bypass; 
-(float)gain;
-(float)frequency;
-(id)init;
-(float)bandwidth;
-(BOOL)bypass;
-(long long)filterType;
-(void)dealloc;
-(void)setFilterType:(long long)arg1 ;
-(void)setFrequency:(float)arg1 ;
-(void)setBypass:(BOOL)arg1 ;
-(id)initWithImpl:(AVAudioUnitEQFilterParametersImpl*)arg1 ;
-(void)setBandwidth:(float)arg1 ;
-(void)setGain:(float)arg1 ;
@end

