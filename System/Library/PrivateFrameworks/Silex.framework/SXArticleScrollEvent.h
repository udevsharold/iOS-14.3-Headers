/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXAnalyticsEvent.h>

@interface SXArticleScrollEvent : SXAnalyticsEvent {

	double _startPosition;
	double _endPosition;
	double _targetPosition;
	double _velocity;

}

@property (assign,nonatomic) double startPosition;               //@synthesize startPosition=_startPosition - In the implementation block
@property (assign,nonatomic) double endPosition;                 //@synthesize endPosition=_endPosition - In the implementation block
@property (assign,nonatomic) double targetPosition;              //@synthesize targetPosition=_targetPosition - In the implementation block
@property (assign,nonatomic) double velocity;                    //@synthesize velocity=_velocity - In the implementation block
-(void)setVelocity:(double)arg1 ;
-(double)velocity;
-(double)startPosition;
-(double)targetPosition;
-(void)setStartPosition:(double)arg1 ;
-(double)endPosition;
-(void)setTargetPosition:(double)arg1 ;
-(void)setEndPosition:(double)arg1 ;
@end
