/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantSupport/SASProximityAction.h>

@class NSString;

@interface SASProximityPasscodeValidationAction : SASProximityAction {

	BOOL _passcodeValid;
	NSString* _passcode;

}

@property (retain) NSString * passcode;              //@synthesize passcode=_passcode - In the implementation block
@property (assign) BOOL passcodeValid;               //@synthesize passcodeValid=_passcodeValid - In the implementation block
+(unsigned long long)actionID;
+(id)actionFromDictionary:(id)arg1 ;
-(void)setPasscode:(NSString *)arg1 ;
-(NSString *)passcode;
-(BOOL)hasResponse;
-(id)requestPayload;
-(void)setResponseFromData:(id)arg1 ;
-(id)responsePayload;
-(void)setPasscodeValid:(BOOL)arg1 ;
-(BOOL)passcodeValid;
@end
