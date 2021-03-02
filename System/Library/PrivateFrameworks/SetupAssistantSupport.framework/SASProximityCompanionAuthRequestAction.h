/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantSupport/SASProximityAction.h>

@class AKDevice, ACAccount;

@interface SASProximityCompanionAuthRequestAction : SASProximityAction {

	AKDevice* _companionDevice;
	ACAccount* _account;

}

@property (retain) AKDevice * companionDevice;              //@synthesize companionDevice=_companionDevice - In the implementation block
@property (retain) ACAccount * account;                     //@synthesize account=_account - In the implementation block
+(unsigned long long)actionID;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setCompanionDevice:(AKDevice *)arg1 ;
-(ACAccount *)account;
-(AKDevice *)companionDevice;
-(BOOL)hasResponse;
-(void)setResponseFromData:(id)arg1 ;
-(id)responsePayload;
-(id)idmsAccountForiCloud;
@end
