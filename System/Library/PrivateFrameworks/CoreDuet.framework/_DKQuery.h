/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _DKQuery : NSObject <NSSecureCoding> {

	BOOL _executeConcurrently;

}

@property (assign,nonatomic) BOOL executeConcurrently;              //@synthesize executeConcurrently=_executeConcurrently - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateForEventsWithStringValue:(id)arg1 ;
+(id)predicateForEventsWithStreamNames:(id)arg1 ;
+(id)predicateForEventsWithStreamName:(id)arg1 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg1 andStringValue:(id)arg2 ;
+(id)predicateForEventsWithStringValueInValues:(id)arg1 ;
+(id)startDateSortDescriptorAscending:(BOOL)arg1 ;
+(id)predicateForEventsWithStartInDateRangeFromAfter:(id)arg1 to:(id)arg2 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg1 andIntegerValue:(long long)arg2 ;
+(id)predicateForEventsWithSourceDeviceIDs:(id)arg1 ;
+(id)predicateForEventsWithNullSourceDeviceID;
+(id)predicateForEventsWithCategoryValue:(id)arg1 ;
+(id)predicateForEventsIntersectingDateRangeFrom:(id)arg1 to:(id)arg2 ;
+(id)predicateForEventsWithCreationInDateRangeFromAfter:(id)arg1 to:(id)arg2 ;
+(id)endDateSortDescriptorAscending:(BOOL)arg1 ;
+(id)predicateForEventsWithEndInDateRangeFrom:(id)arg1 to:(id)arg2 ;
+(id)predicateForEventsWithBundleID:(id)arg1 ;
+(id)predicateForEventsWithIntegerValue:(long long)arg1 ;
+(id)predicateForEventsWithDoubleValue:(double)arg1 ;
+(id)predicateForEventsWithStartInDateRangeFrom:(id)arg1 to:(id)arg2 ;
+(id)predicateForEventsWithMinimumDuration:(double)arg1 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg1 ;
+(id)predicateForEventsWithSourceID:(id)arg1 ;
+(id)predicateForEventsWithSourceID:(id)arg1 bundleID:(id)arg2 ;
+(id)predicateForEventsWithSourceGroupIDs:(id)arg1 ;
+(id)predicateForObjectWithUUID:(id)arg1 ;
+(id)predicateForObjectsWithUUIDs:(id)arg1 ;
+(id)predicateForEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)predicateForEventsWithStartDateAfter:(id)arg1 ;
+(id)predicateForEventsWithStartOrEndInDateRangeWithFrom:(id)arg1 to:(id)arg2 ;
+(id)predicateForEventsWithStartAndEndInDateRangeFrom:(id)arg1 to:(id)arg2 ;
+(id)predicateForEventsWithDayOfWeek:(unsigned long long)arg1 ;
+(id)predicateForEventsWithStartDateOrCreationDateBefore:(id)arg1 ;
+(id)predicateForEventsWithNoSource;
+(id)predicateForEventsContainingDateRangeFrom:(id)arg1 to:(id)arg2 ;
+(id)predicateForEventsWithMinumumDuration:(double)arg1 ;
+(id)predicateForEventsBetweenStartSecondOfDay:(unsigned long long)arg1 endSecondOfDay:(unsigned long long)arg2 ;
+(id)predicateForEventsWithLocalCreationInDateRangeFrom:(id)arg1 toBefore:(id)arg2 ;
+(id)executableQueryForQuery:(id)arg1 ;
+(id)predicateForEventsWithLocalCreationInDateRangeFromAfter:(id)arg1 to:(id)arg2 ;
+(id)queryNotExecutableError;
+(id)localCreationDateSortDescriptorAscending:(BOOL)arg1 ;
+(id)predicateForEventsWithIdentifierValue:(id)arg1 ;
+(id)predicateForEventsWithCreationInDateRangeFrom:(id)arg1 toBefore:(id)arg2 ;
+(id)predicateForEventsWithQuantityValue:(id)arg1 ;
+(id)predicateForEventsExcludingIntegerValue:(long long)arg1 ;
+(id)predicateForEventsWithDoubleValueBetween:(double)arg1 and:(double)arg2 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg1 andValue:(id)arg2 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg1 inValues:(id)arg2 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg1 likeStringValue:(id)arg2 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg1 andDoubleValue:(double)arg2 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg1 andDoubleValueBetween:(double)arg2 andValue:(double)arg3 ;
+(id)predicateForEventsWithSourceID:(id)arg1 bundleID:(id)arg2 groupIDs:(id)arg3 ;
+(id)predicateForEventsWithSourceID:(id)arg1 bundleID:(id)arg2 itemIDs:(id)arg3 ;
-(BOOL)executeConcurrently;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setExecuteConcurrently:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
