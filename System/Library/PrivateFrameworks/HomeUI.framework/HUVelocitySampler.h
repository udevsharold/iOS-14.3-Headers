/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HomeUI/HomeUI-Structs.h>
@class HUVelocitySample;

@interface HUVelocitySampler : NSObject {

	HUVelocitySample* _currentSample;
	HUVelocitySample* _previousSample;

}

@property (nonatomic,retain) HUVelocitySample * currentSample;               //@synthesize currentSample=_currentSample - In the implementation block
@property (nonatomic,retain) HUVelocitySample * previousSample;              //@synthesize previousSample=_previousSample - In the implementation block
@property (nonatomic,readonly) CGVector velocity; 
-(void)reset;
-(CGVector)velocity;
-(HUVelocitySample *)currentSample;
-(void)setPreviousSample:(HUVelocitySample *)arg1 ;
-(void)setCurrentSample:(HUVelocitySample *)arg1 ;
-(HUVelocitySample *)previousSample;
-(void)addTouchSample:(CGPoint)arg1 ;
@end
