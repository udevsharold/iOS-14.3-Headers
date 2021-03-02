/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSwitcherModifierEventResponse.h>

@class NSString;

@interface SBTimerEventSwitcherEventResponse : SBSwitcherModifierEventResponse {

	NSString* _reason;

}

@property (nonatomic,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)type;
-(NSString *)reason;
-(id)initWithDelay:(double)arg1 validator:(/*^block*/id)arg2 reason:(id)arg3 ;
@end
