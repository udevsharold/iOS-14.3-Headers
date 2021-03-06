/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMTone.h>

@interface AXMLiveContinuousTone : AXMTone {

	BOOL _muted;
	BOOL _releasing;
	double _phase;
	unsigned long long _framesRendered;
	unsigned long long _releaseFrame;

}

@property (nonatomic,readonly) double phase;                                 //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) unsigned long long framesRendered;              //@synthesize framesRendered=_framesRendered - In the implementation block
@property (assign,nonatomic) BOOL releasing;                                 //@synthesize releasing=_releasing - In the implementation block
@property (assign,nonatomic) unsigned long long releaseFrame;                //@synthesize releaseFrame=_releaseFrame - In the implementation block
@property (assign,nonatomic) BOOL muted;                                     //@synthesize muted=_muted - In the implementation block
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)muted;
-(id)initWithSampleRate:(double)arg1 envelope:(id)arg2 ;
-(void)setFrequency:(double)arg1 ;
-(double)phase;
-(void)startRelease;
-(void)renderInBuffer:(vector<int, std::__1::allocator<int> >*)arg1 atFrame:(unsigned long long)arg2 numSamples:(unsigned long long)arg3 ;
-(BOOL)releasing;
-(void)setReleasing:(BOOL)arg1 ;
-(void)setReleaseFrame:(unsigned long long)arg1 ;
-(unsigned long long)framesRendered;
-(void)resetRelease;
-(unsigned long long)releaseFrame;
-(void)setFramesRendered:(unsigned long long)arg1 ;
@end

