/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _SBCameraLaunchCondition : NSObject {

	BOOL _met;

}

@property (assign,getter=isMet,nonatomic) BOOL met;              //@synthesize met=_met - In the implementation block
+(id)conditionWithConditions:(id)arg1 ;
+(id)conditionWithValue:(BOOL)arg1 ;
-(BOOL)isMet;
-(void)setMet:(BOOL)arg1 ;
@end

