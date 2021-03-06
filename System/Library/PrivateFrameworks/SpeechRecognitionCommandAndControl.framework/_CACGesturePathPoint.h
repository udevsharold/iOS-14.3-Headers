/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
@interface _CACGesturePathPoint : NSObject {

	BOOL _sentinelPoint;
	double _force;
	double _relativeTime;
	double _absoluteTime;
	double _decay;
	double _length;
	CGPoint _point;

}

@property (assign,getter=isSentinelPoint,nonatomic) BOOL sentinelPoint;              //@synthesize sentinelPoint=_sentinelPoint - In the implementation block
@property (assign,nonatomic) CGPoint point;                                          //@synthesize point=_point - In the implementation block
@property (assign,nonatomic) double force;                                           //@synthesize force=_force - In the implementation block
@property (assign,nonatomic) double relativeTime;                                    //@synthesize relativeTime=_relativeTime - In the implementation block
@property (assign,nonatomic) double absoluteTime;                                    //@synthesize absoluteTime=_absoluteTime - In the implementation block
@property (assign,nonatomic) double decay;                                           //@synthesize decay=_decay - In the implementation block
@property (assign,nonatomic) double length;                                          //@synthesize length=_length - In the implementation block
-(void)setPoint:(CGPoint)arg1 ;
-(double)decay;
-(void)setLength:(double)arg1 ;
-(double)length;
-(void)setForce:(double)arg1 ;
-(double)force;
-(double)absoluteTime;
-(id)description;
-(void)setDecay:(double)arg1 ;
-(void)setRelativeTime:(double)arg1 ;
-(void)setAbsoluteTime:(double)arg1 ;
-(void)setSentinelPoint:(BOOL)arg1 ;
-(BOOL)isSentinelPoint;
-(CGPoint)point;
-(double)relativeTime;
@end

