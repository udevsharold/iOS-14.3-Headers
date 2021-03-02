/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class HMDHomeManager, NSString;

@interface HMDBackingStoreSaveToPersistentStore : NSOperation {

	BOOL _incrementGeneration;
	HMDHomeManager* _homeManager;
	NSString* _reason;

}

@property (nonatomic,readonly) HMDHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,readonly) NSString * reason;                         //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) BOOL incrementGeneration;                  //@synthesize incrementGeneration=_incrementGeneration - In the implementation block
-(void)main;
-(NSString *)reason;
-(HMDHomeManager *)homeManager;
-(BOOL)incrementGeneration;
-(id)initWithHomeManager:(id)arg1 reason:(id)arg2 incrementGeneration:(BOOL)arg3 ;
@end
