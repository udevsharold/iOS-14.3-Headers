/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/_DKObject.h>
#import <libobjc.A.dylib/_DKProtobufConverting.h>
#import <libobjc.A.dylib/_DKHasComparableValue.h>
#import <libobjc.A.dylib/_DKHasPrimaryValue.h>

@class NSDate, _DKEventStream, _DKObject, NSTimeZone, NSDictionary, NSString;

@interface _DKEvent : _DKObject <_DKProtobufConverting, _DKHasComparableValue, _DKHasPrimaryValue> {

	BOOL _shouldSync;
	NSDate* _startDate;
	NSDate* _endDate;
	_DKEventStream* _stream;
	_DKObject* _value;
	NSTimeZone* _timeZone;
	NSDictionary* _metadata;
	double _confidence;
	long long _compatibilityVersion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) _DKEventStream * stream;                         //@synthesize stream=_stream - In the implementation block
@property (retain) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                                //@synthesize endDate=_endDate - In the implementation block
@property (retain) NSTimeZone * timeZone;                           //@synthesize timeZone=_timeZone - In the implementation block
@property (retain) _DKObject * value;                               //@synthesize value=_value - In the implementation block
@property (copy) NSDictionary * metadata;                           //@synthesize metadata=_metadata - In the implementation block
@property (assign) double confidence;                               //@synthesize confidence=_confidence - In the implementation block
@property (assign) BOOL shouldSync;                                 //@synthesize shouldSync=_shouldSync - In the implementation block
@property (assign) long long compatibilityVersion;                  //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
+(id)entityName;
+(BOOL)supportsSecureCoding;
+(id)eventValueFromManagedObject:(id)arg1 streamName:(id)arg2 readMetadata:(BOOL)arg3 excludedMetadataKeys:(id)arg4 cache:(id)arg5 ;
+(id)eventStreamFromManagedObject:(id)arg1 forValue:(id)arg2 cache:(id)arg3 ;
+(id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 ;
+(id)uncachedEventValueFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4 ;
+(BOOL)copyMetadata:(id)arg1 toManagedObject:(id)arg2 ;
+(id)fetchCustomMetadataWithName:(id)arg1 valueHash:(id)arg2 context:(id)arg3 ;
+(id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 categoryIntegerValue:(long long)arg5 confidence:(double)arg6 metadata:(id)arg7 ;
+(id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 quantityDoubleValue:(double)arg5 confidence:(double)arg6 metadata:(id)arg7 ;
+(id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 identifierStringValue:(id)arg5 confidence:(double)arg6 metadata:(id)arg7 ;
+(id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 confidence:(double)arg5 metadata:(id)arg6 ;
+(id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 categoryIntegerValue:(long long)arg5 metadata:(id)arg6 ;
+(id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 quantityDoubleValue:(double)arg5 metadata:(id)arg6 ;
+(id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 categoryIntegerValue:(long long)arg4 metadata:(id)arg5 ;
+(id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 quantityDoubleValue:(double)arg4 metadata:(id)arg5 ;
+(id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 metadata:(id)arg5 ;
+(BOOL)isValidURL:(id)arg1 ;
+(id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 value:(id)arg5 confidence:(double)arg6 metadata:(id)arg7 ;
+(id)eventWithSearchableItem:(id)arg1 bundleIdentifier:(id)arg2 ;
+(id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 identifierStringValue:(id)arg5 metadata:(id)arg6 ;
+(id)eventRepresentingUserActivityWithSearchableItem:(id)arg1 bundleIdentifier:(id)arg2 ;
+(id)eventWithRelevantShortcut:(id)arg1 bundleID:(id)arg2 ;
+(id)fromPBCodable:(id)arg1 ;
+(id)allowedWebpageURLSchemes;
+(id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4 ;
+(id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 identifierStringValue:(id)arg4 metadata:(id)arg5 ;
+(id)metadataForInteraction:(id)arg1 storeKeyImage:(BOOL)arg2 ;
+(id)eventWithInteraction:(id)arg1 bundleIdentifier:(id)arg2 storeKeyImage:(BOOL)arg3 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(double)confidence;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)endDate;
-(long long)integerValue;
-(_DKObject *)value;
-(id)interaction;
-(NSDictionary *)metadata;
-(double)doubleValue;
-(BOOL)boolValue;
-(id)stringValue;
-(id)metadataFromStructuredMetadata:(id)arg1 excludedMetadataKeys:(id)arg2 ;
-(id)metadataFromCustomMetadata:(id)arg1 ;
-(id)metadataFromCustomMetadata:(id)arg1 cache:(id)arg2 ;
-(id)metadataFromStructuredMetadata:(id)arg1 excludedMetadataKeys:(id)arg2 cache:(id)arg3 ;
-(unsigned long long)eventValueClassOf:(id)arg1 ;
-(void)setValue:(_DKObject *)arg1 ;
-(id)initWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 value:(id)arg5 confidence:(double)arg6 metadata:(id)arg7 ;
-(_DKEventStream *)stream;
-(id)primaryValue;
-(id)initWithCoder:(id)arg1 ;
-(long long)compareValue:(id)arg1 ;
-(NSString *)description;
-(NSDate *)startDate;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStream:(_DKEventStream *)arg1 ;
-(BOOL)shouldSync;
-(void)setShouldSync:(BOOL)arg1 ;
-(void)setCompatibilityVersion:(long long)arg1 ;
-(id)relevantShortcut;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)toPBCodable;
-(long long)compatibilityVersion;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setConfidence:(double)arg1 ;
-(void)fetchInteractionWithPopulatedKeyImage:(/*^block*/id)arg1 ;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

