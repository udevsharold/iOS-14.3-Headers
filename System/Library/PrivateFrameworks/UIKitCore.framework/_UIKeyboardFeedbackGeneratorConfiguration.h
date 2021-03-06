/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@class NSDictionary;

@interface _UIKeyboardFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration {

	BOOL _scalingForSpeedEnabled;
	NSDictionary* _feedbacks;
	double _slowTypingTime;
	double _fastTypingTime;
	double _fastTypingVolumeMultiplier;
	double _slowTypingVolumeMultiplier;
	double _releaseThreshold;

}

@property (nonatomic,retain) NSDictionary * feedbacks;                       //@synthesize feedbacks=_feedbacks - In the implementation block
@property (assign,nonatomic) double slowTypingTime;                          //@synthesize slowTypingTime=_slowTypingTime - In the implementation block
@property (assign,nonatomic) double fastTypingTime;                          //@synthesize fastTypingTime=_fastTypingTime - In the implementation block
@property (assign,nonatomic) double fastTypingVolumeMultiplier;              //@synthesize fastTypingVolumeMultiplier=_fastTypingVolumeMultiplier - In the implementation block
@property (assign,nonatomic) double slowTypingVolumeMultiplier;              //@synthesize slowTypingVolumeMultiplier=_slowTypingVolumeMultiplier - In the implementation block
@property (assign,nonatomic) BOOL scalingForSpeedEnabled;                    //@synthesize scalingForSpeedEnabled=_scalingForSpeedEnabled - In the implementation block
@property (assign,nonatomic) double releaseThreshold;                        //@synthesize releaseThreshold=_releaseThreshold - In the implementation block
+(id)defaultConfiguration;
+(id)configuration3;
+(id)configuration2;
+(id)configuration1;
-(double)releaseThreshold;
-(NSDictionary *)feedbacks;
-(id)feedbackKeyPaths;
-(double)fastTypingVolumeMultiplier;
-(double)fastTypingTime;
-(void)setFeedbacks:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSlowTypingTime:(double)arg1 ;
-(void)setScalingForSpeedEnabled:(BOOL)arg1 ;
-(void)setSlowTypingVolumeMultiplier:(double)arg1 ;
-(void)setReleaseThreshold:(double)arg1 ;
-(double)slowTypingTime;
-(void)setFastTypingTime:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)defaultEnabled;
-(BOOL)scalingForSpeedEnabled;
-(void)setFastTypingVolumeMultiplier:(double)arg1 ;
-(double)slowTypingVolumeMultiplier;
@end

