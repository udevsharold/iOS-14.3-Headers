/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface RTStateTransitionMotionActivityTypeHistogram : NSObject {

	NSMutableDictionary* _motionActivityTypeBins;

}

@property (nonatomic,retain) NSMutableDictionary * motionActivityTypeBins;              //@synthesize motionActivityTypeBins=_motionActivityTypeBins - In the implementation block
-(void)show;
-(id)init;
-(NSMutableDictionary *)motionActivityTypeBins;
-(void)addMotionActivityType:(unsigned long long)arg1 ;
-(unsigned long long)getDominantMotionActivityType;
-(void)setMotionActivityTypeBins:(NSMutableDictionary *)arg1 ;
@end

