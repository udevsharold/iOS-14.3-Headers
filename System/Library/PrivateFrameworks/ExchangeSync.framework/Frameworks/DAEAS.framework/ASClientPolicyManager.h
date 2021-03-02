/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASPolicyManager.h>

@class NSString;

@interface ASClientPolicyManager : ASPolicyManager {

	NSString* _powerAssertionGroupIdentifier;

}

@property (nonatomic,retain) NSString * powerAssertionGroupIdentifier;              //@synthesize powerAssertionGroupIdentifier=_powerAssertionGroupIdentifier - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)policyKeyChanged:(id)arg1 ;
-(void)policyFailedToUpdate;
-(void)requestPolicyUpdate;
-(void)setPowerAssertionGroupIdentifier:(NSString *)arg1 ;
-(NSString *)powerAssertionGroupIdentifier;
@end
