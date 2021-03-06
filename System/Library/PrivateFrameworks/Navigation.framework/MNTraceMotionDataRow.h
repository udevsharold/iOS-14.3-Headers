/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNTracePlayerTimelineStreamObjectType.h>

@class NSString;

@interface MNTraceMotionDataRow : NSObject <MNTracePlayerTimelineStreamObjectType> {

	double _timestamp;
	unsigned long long _motionType;
	unsigned long long _exitType;
	unsigned long long _confidence;

}

@property (nonatomic,readonly) double position; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned long long motionType;              //@synthesize motionType=_motionType - In the implementation block
@property (assign,nonatomic) unsigned long long exitType;                //@synthesize exitType=_exitType - In the implementation block
@property (assign,nonatomic) unsigned long long confidence;              //@synthesize confidence=_confidence - In the implementation block
-(unsigned long long)confidence;
-(double)timestamp;
-(unsigned long long)motionType;
-(void)setTimestamp:(double)arg1 ;
-(void)setExitType:(unsigned long long)arg1 ;
-(unsigned long long)exitType;
-(double)position;
-(void)setMotionType:(unsigned long long)arg1 ;
-(void)setConfidence:(unsigned long long)arg1 ;
@end

