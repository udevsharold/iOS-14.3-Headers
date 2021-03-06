/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class HDCodableObjectCollection, HDDataOriginProvenance;

@interface _HDDataBatchInsertionJournalEntry : HDJournalEntry {

	HDCodableObjectCollection* _collection;
	HDDataOriginProvenance* _provenance;

}

@property (nonatomic,readonly) HDCodableObjectCollection * collection;              //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) HDDataOriginProvenance * provenance;                 //@synthesize provenance=_provenance - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(HDCodableObjectCollection *)collection;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(HDDataOriginProvenance *)provenance;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCodableObjectCollection:(id)arg1 provenance:(id)arg2 ;
@end

