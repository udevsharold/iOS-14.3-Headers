/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSArray;

@interface HDClinicalAccountInsertCodableJournalEntry : HDJournalEntry {

	NSArray* _codableAccounts;
	long long _syncProvenance;

}

@property (nonatomic,copy,readonly) NSArray * codableAccounts;              //@synthesize codableAccounts=_codableAccounts - In the implementation block
@property (nonatomic,readonly) long long syncProvenance;                    //@synthesize syncProvenance=_syncProvenance - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)syncProvenance;
-(id)initWithCodableAccounts:(id)arg1 syncProvenance:(long long)arg2 ;
-(NSArray *)codableAccounts;
@end

