/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CoreTelephonyClientSubscriberDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CoreTelephonyClient, CTActivationPolicyState, NSString;

@interface PSUICoreTelephonyPostponementCache : NSObject <CoreTelephonyClientSubscriberDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CoreTelephonyClient* _client;
	CTActivationPolicyState* _activationPolicyState;

}

@property (nonatomic,retain) CoreTelephonyClient * client;                       //@synthesize client=_client - In the implementation block
@property (retain) CTActivationPolicyState * activationPolicyState;              //@synthesize activationPolicyState=_activationPolicyState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)initPrivate;
-(id)init;
-(void)setClient:(CoreTelephonyClient *)arg1 ;
-(CoreTelephonyClient *)client;
-(void)willEnterForeground;
-(id)getActivationPolicyState;
-(void)setActivationPolicyState:(CTActivationPolicyState *)arg1 ;
-(CTActivationPolicyState *)activationPolicyState;
-(void)fetchActivationPolicyState;
@end

