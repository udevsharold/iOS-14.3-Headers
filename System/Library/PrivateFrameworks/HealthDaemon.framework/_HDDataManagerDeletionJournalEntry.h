/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@protocol HKUUIDCollection;
@class HDDataDeletionConfiguration;

@interface _HDDataManagerDeletionJournalEntry : HDJournalEntry {

	id<HKUUIDCollection> _UUIDCollection;
	HDDataDeletionConfiguration* _configuration;

}

@property (nonatomic,readonly) id<HKUUIDCollection> UUIDCollection;                           //@synthesize UUIDCollection=_UUIDCollection - In the implementation block
@property (nonatomic,copy,readonly) HDDataDeletionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(HDDataDeletionConfiguration *)configuration;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 objectUUIDs:(id)arg2 ;
-(id<HKUUIDCollection>)UUIDCollection;
@end
