/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSUUID;

@interface HDClinicalAccountManagerAccountJournalEntry : HDJournalEntry {

	NSUUID* _accountIdentifier;

}

@property (nonatomic,copy,readonly) NSUUID * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)accountIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

