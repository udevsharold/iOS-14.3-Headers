/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@interface HMFPowerLogger : HMFObject
+(id)sharedPowerLogger;
-(void)reportIncomingIDSPush:(id)arg1 fromToken:(id)arg2 ;
-(void)reportIncomingCloudPush:(id)arg1 ;
-(void)reportIncomingLoxyMessage:(id)arg1 ;
-(void)reportConnection:(id)arg1 linkType:(long long)arg2 accessoryCategory:(id)arg3 ;
-(id)linkTypeDescription:(long long)arg1 ;
-(void)reportIncomingAdvertisementChange:(id)arg1 accessoryCategory:(id)arg2 ;
-(void)reportIncomingIPEvent:(id)arg1 accessoryCategory:(id)arg2 ;
-(void)reportConnection:(id)arg1 linkType:(long long)arg2 ;
-(void)reportIncomingAdvertisementChange:(id)arg1 ;
-(void)reportIncomingIPEvent:(id)arg1 ;
@end
