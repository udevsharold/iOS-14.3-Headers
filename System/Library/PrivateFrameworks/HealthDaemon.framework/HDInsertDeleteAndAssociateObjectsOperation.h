/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalableOperation.h>

@class NSDictionary, NSArray;

@interface HDInsertDeleteAndAssociateObjectsOperation : HDJournalableOperation {

	NSDictionary* _objectsToInsertByDataProvenance;
	NSArray* _objectsToDelete;
	NSDictionary* _associations;

}

@property (nonatomic,copy,readonly) NSDictionary * objectsToInsertByDataProvenance;              //@synthesize objectsToInsertByDataProvenance=_objectsToInsertByDataProvenance - In the implementation block
@property (nonatomic,copy,readonly) NSArray * objectsToDelete;                                   //@synthesize objectsToDelete=_objectsToDelete - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * associations;                                 //@synthesize associations=_associations - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)associations;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)initWithObjectsToInsertByDataProvenance:(id)arg1 objectsToDelete:(id)arg2 associations:(id)arg3 ;
-(NSDictionary *)objectsToInsertByDataProvenance;
-(NSArray *)objectsToDelete;
@end

