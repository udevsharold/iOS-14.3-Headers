/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPCloudRecord.h>

@class NSString, NSDate, CKRecord;

@interface MSPEncryptedCloudRecord : NSObject <MSPCloudRecord> {

	BOOL _compressNewData;
	CKRecord* _record;

}

@property (nonatomic,readonly) CKRecord * record;                                 //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) NSString * cloudRecordName; 
@property (nonatomic,readonly) NSDate * cloudRecordModificationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)arrayOfCKRecordsFromArray:(id)arg1 ;
+(id)arrayOfEncryptedRecordsFromArray:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(CKRecord *)record;
-(NSString *)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)initWithCKRecord:(id)arg1 isNewlyCreatedRecord:(BOOL)arg2 ;
-(NSString *)cloudRecordName;
-(NSDate *)cloudRecordModificationDate;
@end
