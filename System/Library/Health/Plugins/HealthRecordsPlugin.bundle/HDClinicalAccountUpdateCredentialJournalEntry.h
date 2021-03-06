/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HDClinicalAccountEntityUpdateJournalEntry.h>

@class HDFHIRAuthResponse, NSString;

@interface HDClinicalAccountUpdateCredentialJournalEntry : HDClinicalAccountEntityUpdateJournalEntry {

	HDFHIRAuthResponse* _authResponse;
	NSString* _requestedScope;

}

@property (nonatomic,copy,readonly) HDFHIRAuthResponse * authResponse;              //@synthesize authResponse=_authResponse - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestedScope;                      //@synthesize requestedScope=_requestedScope - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(NSString *)requestedScope;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAuthResponse:(id)arg1 accountIdentifier:(id)arg2 requestedScope:(id)arg3 ;
-(HDFHIRAuthResponse *)authResponse;
@end

