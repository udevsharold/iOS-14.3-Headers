/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary;

@interface HMDAccessoryQueues : HMFObject {

	NSMutableDictionary* queues;

}

@property (nonatomic,retain) NSMutableDictionary * queues; 
-(id)init;
-(NSMutableDictionary *)queues;
-(void)setQueues:(NSMutableDictionary *)arg1 ;
-(void)removeAccessory:(id)arg1 ;
-(BOOL)createQueue:(id)arg1 ;
-(id)popAccessoryFromQueue:(id)arg1 ;
-(id)getContextForAccessory:(id)arg1 ;
-(int)countForQueue:(id)arg1 ;
-(void)addAccessory:(id)arg1 toQueue:(id)arg2 context:(id)arg3 ;
-(id)getAccessoryForContext:(id)arg1 fromQueue:(id)arg2 ;
-(id)whichQueueForAccessory:(id)arg1 ;
-(void)enumerateQueue:(id)arg1 enumerateAccessory:(/*^block*/id)arg2 ;
-(BOOL)_inQueue:(id)arg1 queue:(id)arg2 ;
@end

