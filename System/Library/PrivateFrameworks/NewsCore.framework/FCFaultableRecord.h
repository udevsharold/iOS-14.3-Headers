/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCKeyValueStoreCoding.h>

@class PBCodable, NSData, NTPBRecordBase, NSString;

@interface FCFaultableRecord : NSObject <FCKeyValueStoreCoding> {

	os_unfair_lock_s _recordLock;
	PBCodable* _record;
	NSData* _recordData;
	NTPBRecordBase* _recordBase;

}

@property (nonatomic,retain) NSData * recordData;                      //@synthesize recordData=_recordData - In the implementation block
@property (nonatomic,retain) NTPBRecordBase * recordBase;              //@synthesize recordBase=_recordBase - In the implementation block
@property (nonatomic,retain) PBCodable * record;                       //@synthesize record=_record - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s recordLock;              //@synthesize recordLock=_recordLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)faultableRecordWithRecordData:(id)arg1 ;
+(id)faultableRecordWithRecord:(id)arg1 ;
+(id)readValueFromKeyValuePair:(id)arg1 ;
+(int)keyValuePairType;
-(void)setRecordBase:(NTPBRecordBase *)arg1 ;
-(PBCodable *)record;
-(os_unfair_lock_s)recordLock;
-(id)init;
-(void)writeToKeyValuePair:(id)arg1 ;
-(void)setRecordData:(NSData *)arg1 ;
-(NTPBRecordBase *)recordBase;
-(void)setRecord:(PBCodable *)arg1 ;
-(void)setRecordLock:(os_unfair_lock_s)arg1 ;
-(NSData *)recordData;
@end
