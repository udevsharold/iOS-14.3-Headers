/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSConditionLock.h>

@interface _EFLazyCacheConditionLock : NSConditionLock {

	Aq _waiterCount;

}

@property (readonly) long long waiterCount; 
-(void)decrementWaiterCount;
-(id)initWithCondition:(long long)arg1 ;
-(long long)waiterCount;
-(void)incrementWaiterCount;
@end
