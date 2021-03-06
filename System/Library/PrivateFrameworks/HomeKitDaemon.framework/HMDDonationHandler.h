/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface HMDDonationHandler : HMFObject <HMFLogging> {

	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedDonationHandler;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(id)_init;
-(void)donateActionSet:(id)arg1 withMessage:(id)arg2 ;
-(void)removeIntentForActionSet:(id)arg1 ;
-(void)_donateActionSet:(id)arg1 withMessage:(id)arg2 ;
-(void)_removeIntentForActionSet:(id)arg1 ;
-(void)_donateIntent:(id)arg1 withActionSet:(id)arg2 ;
@end

