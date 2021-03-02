/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVCaptureAudioChannelInternal;

@interface AVCaptureAudioChannel : NSObject {

	AVCaptureAudioChannelInternal* _internal;
	BOOL _enabled;
	float _volume;

}

@property (nonatomic,readonly) float averagePowerLevel; 
@property (nonatomic,readonly) float peakHoldLevel; 
@property (assign,nonatomic) float volume;                               //@synthesize volume=_volume - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(void)initialize;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(float)averagePowerLevel;
-(BOOL)isEnabled;
-(void)dealloc;
-(id)initWithConnection:(id)arg1 ;
-(float)peakHoldLevel;
-(void)setEnabled:(BOOL)arg1 ;
-(void)invalidate;
@end
