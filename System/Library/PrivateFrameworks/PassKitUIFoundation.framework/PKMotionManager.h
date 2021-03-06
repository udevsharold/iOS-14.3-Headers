/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMMotionManager, NSHashTable;

@interface PKMotionManager : NSObject {

	CMMotionManager* _motion;
	NSHashTable* _clients;

}
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)registerClient:(id)arg1 ;
-(void)unregisterClient:(id)arg1 ;
-(BOOL)isClientRegistered:(id)arg1 ;
-(void)updateWithMotion:(id)arg1 ;
@end

