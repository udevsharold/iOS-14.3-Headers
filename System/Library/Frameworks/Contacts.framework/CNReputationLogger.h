/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNReputationLogger : NSObject
+(id)obfuscateHandle:(id)arg1 ;
+(id)queryLog;
+(id)describeScore:(long long)arg1 ;
+(id)performanceLog;
+(id)obfuscate:(id)arg1 ;
-(void)couldNotQueryContactsForEmailAddressWithError:(id)arg1 ;
-(void)timeToResolve:(double)arg1 ;
-(void)reputationUnestablished;
-(void)queryForHandle:(id)arg1 didFinishWithReputation:(id)arg2 ;
-(void)couldNotQueryCoreRecentsWithError:(id)arg1 ;
-(void)contactsConfirmedTrustOfEmailAddress;
-(void)coreRecentsConfirmedTrust;
-(void)contactsConfirmedTrustOfPhoneNumber;
-(void)contactsCouldNotConfirmTrustOfPhoneNumber;
-(void)beginQueryForHandle:(id)arg1 ;
-(void)coreRecentsCouldNotConfirmTrust;
-(void)couldNotQueryContactsForPhoneNumberWithError:(id)arg1 ;
-(void)contactsCouldNotConfirmTrustOfEmailAddress;
-(void)queryForHandle:(id)arg1 didFailWithError:(id)arg2 ;
@end
