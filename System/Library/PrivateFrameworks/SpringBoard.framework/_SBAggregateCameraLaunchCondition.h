/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/_SBCameraLaunchCondition.h>

@class NSArray;

@interface _SBAggregateCameraLaunchCondition : _SBCameraLaunchCondition {

	NSArray* _conditions;

}

@property (nonatomic,retain) NSArray * conditions;              //@synthesize conditions=_conditions - In the implementation block
-(BOOL)isMet;
-(NSArray *)conditions;
-(void)setConditions:(NSArray *)arg1 ;
@end
