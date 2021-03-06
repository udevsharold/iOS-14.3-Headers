/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSDate, NSDictionary;

@interface WBSPasswordBreachResultRecord : NSObject {

	NSData* _persistentIdentifier;
	unsigned long long _result;
	NSDate* _dateLastModified;

}

@property (nonatomic,readonly) NSData * persistentIdentifier;                        //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long result;                            //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) NSDate * dateLastModified;                            //@synthesize dateLastModified=_dateLastModified - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)dictionaryRepresentationsForResultRecords:(id)arg1 ;
+(id)resultRecordsFromDictionaryRepresentations:(id)arg1 ;
-(unsigned long long)result;
-(id)initWithPersistentIdentifier:(id)arg1 result:(unsigned long long)arg2 dateLastModified:(id)arg3 ;
-(NSData *)persistentIdentifier;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)description;
-(NSDictionary *)dictionaryRepresentation;
-(NSDate *)dateLastModified;
@end

