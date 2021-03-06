/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXMediaEvent.h>

@class NSString, NSError;

@interface SXMediaEngageEvent : SXMediaEvent {

	BOOL _muted;
	unsigned long long _userAction;
	double _mediaTimePlayed;
	unsigned long long _mediaPlayMethod;
	NSString* _mediaPauseMethod;
	NSString* _mediaResumeMethod;
	unsigned long long _mediaPausePosition;
	unsigned long long _mediaResumePosition;
	double _mediaFrameRate;
	double _mediaDuration;
	double _volume;
	NSError* _error;

}

@property (assign,nonatomic) unsigned long long userAction;                       //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) double mediaTimePlayed;                              //@synthesize mediaTimePlayed=_mediaTimePlayed - In the implementation block
@property (assign,nonatomic) unsigned long long mediaPlayMethod;                  //@synthesize mediaPlayMethod=_mediaPlayMethod - In the implementation block
@property (nonatomic,retain) NSString * mediaPauseMethod;                         //@synthesize mediaPauseMethod=_mediaPauseMethod - In the implementation block
@property (nonatomic,retain) NSString * mediaResumeMethod;                        //@synthesize mediaResumeMethod=_mediaResumeMethod - In the implementation block
@property (assign,nonatomic) unsigned long long mediaPausePosition;               //@synthesize mediaPausePosition=_mediaPausePosition - In the implementation block
@property (assign,nonatomic) unsigned long long mediaResumePosition;              //@synthesize mediaResumePosition=_mediaResumePosition - In the implementation block
@property (assign,nonatomic) double mediaFrameRate;                               //@synthesize mediaFrameRate=_mediaFrameRate - In the implementation block
@property (assign,nonatomic) double mediaDuration;                                //@synthesize mediaDuration=_mediaDuration - In the implementation block
@property (assign,nonatomic) BOOL muted;                                          //@synthesize muted=_muted - In the implementation block
@property (assign,nonatomic) double volume;                                       //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
-(void)setMuted:(BOOL)arg1 ;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(BOOL)muted;
-(NSError *)error;
-(unsigned long long)userAction;
-(void)setError:(NSError *)arg1 ;
-(void)setMediaDuration:(double)arg1 ;
-(void)setMediaTimePlayed:(double)arg1 ;
-(double)mediaTimePlayed;
-(unsigned long long)mediaPlayMethod;
-(void)setMediaPlayMethod:(unsigned long long)arg1 ;
-(NSString *)mediaPauseMethod;
-(void)setMediaPauseMethod:(NSString *)arg1 ;
-(void)setMediaPausePosition:(unsigned long long)arg1 ;
-(NSString *)mediaResumeMethod;
-(void)setMediaResumeMethod:(NSString *)arg1 ;
-(void)setMediaResumePosition:(unsigned long long)arg1 ;
-(unsigned long long)mediaPausePosition;
-(unsigned long long)mediaResumePosition;
-(double)mediaDuration;
-(void)setUserAction:(unsigned long long)arg1 ;
-(double)mediaFrameRate;
-(void)setMediaFrameRate:(double)arg1 ;
@end

