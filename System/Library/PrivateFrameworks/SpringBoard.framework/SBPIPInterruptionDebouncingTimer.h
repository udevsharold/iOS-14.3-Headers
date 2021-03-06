/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSTimer.h>

@class SBPIPInterruptionAssertion;

@interface SBPIPInterruptionDebouncingTimer : BSTimer {

	SBPIPInterruptionAssertion* _debouncedAssertion;

}

@property (assign,nonatomic,__weak) SBPIPInterruptionAssertion * debouncedAssertion;              //@synthesize debouncedAssertion=_debouncedAssertion - In the implementation block
-(SBPIPInterruptionAssertion *)debouncedAssertion;
-(void)setDebouncedAssertion:(SBPIPInterruptionAssertion *)arg1 ;
@end

