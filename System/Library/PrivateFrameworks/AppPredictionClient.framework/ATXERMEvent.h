/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BMStoreData.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>

@class NSDate, ATXEngagementRecordEntry, NSArray, NSString;

@interface ATXERMEvent : NSObject <BMStoreData, ATXProtoBufWrapper> {

	NSDate* _eventDate;
	unsigned long long _eventType;
	ATXEngagementRecordEntry* _entry;
	NSArray* _clientModelIds;

}

@property (nonatomic,readonly) NSDate * eventDate;                            //@synthesize eventDate=_eventDate - In the implementation block
@property (nonatomic,readonly) unsigned long long eventType;                  //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) ATXEngagementRecordEntry * entry;              //@synthesize entry=_entry - In the implementation block
@property (nonatomic,readonly) NSArray * clientModelIds;                      //@synthesize clientModelIds=_clientModelIds - In the implementation block
@property (nonatomic,readonly) unsigned dataVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)eventWithData:(id)arg1 dataVersion:(unsigned)arg2 ;
-(id)encodeAsProto;
-(unsigned)dataVersion;
-(id)serialize;
-(unsigned long long)eventType;
-(id)init;
-(NSDate *)eventDate;
-(id)json;
-(id)jsonDict;
-(id)initWithProtoData:(id)arg1 ;
-(ATXEngagementRecordEntry *)entry;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)clientModelIds;
-(id)initWithProto:(id)arg1 ;
-(id)proto;
-(id)initWithEventDate:(id)arg1 eventType:(unsigned long long)arg2 recordEntry:(id)arg3 clientModelIds:(id)arg4 ;
-(BOOL)isEqualToATXERMEvent:(id)arg1 ;
@end

