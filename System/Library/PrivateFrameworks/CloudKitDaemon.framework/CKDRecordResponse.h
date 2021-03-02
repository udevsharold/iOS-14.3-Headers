/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKRecordID, NSString, CKRecord;

@interface CKDRecordResponse : NSObject {

	CKRecordID* _recordID;
	NSString* _etag;
	CKRecord* _record;

}

@property (nonatomic,retain) CKRecordID * recordID;              //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * etag;                    //@synthesize etag=_etag - In the implementation block
@property (nonatomic,retain) CKRecord * record;                  //@synthesize record=_record - In the implementation block
-(void)setEtag:(NSString *)arg1 ;
-(CKRecordID *)recordID;
-(CKRecord *)record;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(id)CKPropertiesDescription;
-(NSString *)etag;
-(id)description;
-(void)setRecord:(CKRecord *)arg1 ;
@end
