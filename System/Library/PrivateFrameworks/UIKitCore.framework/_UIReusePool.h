/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface _UIReusePool : NSObject {

	NSMutableSet* _reuseSet;
	unsigned long long _purgePolicy;
	NSObject*<OS_dispatch_queue> _reuseSetAccessQueue;

}

@property (nonatomic,readonly) unsigned long long purgePolicy; 
+(void)initialize;
+(void)__applicationWillEnterForeground:(id)arg1 ;
+(void)__applicationDidEnterBackground:(id)arg1 ;
-(id)init;
-(unsigned long long)purgePolicy;
-(void)drainPool;
-(id)reusableObject;
-(void)addObject:(id)arg1 ;
-(id)initWithPolicy:(unsigned long long)arg1 ;
@end
