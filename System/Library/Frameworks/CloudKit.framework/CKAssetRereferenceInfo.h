/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKRecordZoneID, NSURL, NSString, NSData, NSError;

@interface CKAssetRereferenceInfo : NSObject {

	CKRecordZoneID* _sourceZoneID;
	NSURL* _contentBaseURL;
	NSString* _owner;
	NSString* _requestor;
	NSData* _assetKey;
	NSData* _referenceSignature;
	NSString* _downloadToken;
	unsigned long long _downloadTokenExpiration;
	NSError* _error;
	NSString* _destinationFieldName;

}

@property (nonatomic,retain) CKRecordZoneID * sourceZoneID;                           //@synthesize sourceZoneID=_sourceZoneID - In the implementation block
@property (nonatomic,retain) NSURL * contentBaseURL;                                  //@synthesize contentBaseURL=_contentBaseURL - In the implementation block
@property (nonatomic,retain) NSString * owner;                                        //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSString * requestor;                                    //@synthesize requestor=_requestor - In the implementation block
@property (nonatomic,retain) NSData * assetKey;                                       //@synthesize assetKey=_assetKey - In the implementation block
@property (nonatomic,retain) NSData * referenceSignature;                             //@synthesize referenceSignature=_referenceSignature - In the implementation block
@property (nonatomic,retain) NSString * downloadToken;                                //@synthesize downloadToken=_downloadToken - In the implementation block
@property (assign,nonatomic) unsigned long long downloadTokenExpiration;              //@synthesize downloadTokenExpiration=_downloadTokenExpiration - In the implementation block
@property (nonatomic,retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * destinationFieldName;                         //@synthesize destinationFieldName=_destinationFieldName - In the implementation block
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)initWithSourceZoneID:(id)arg1 ;
-(void)setSourceZoneID:(CKRecordZoneID *)arg1 ;
-(void)setContentBaseURL:(NSURL *)arg1 ;
-(void)setDownloadToken:(NSString *)arg1 ;
-(void)setDownloadTokenExpiration:(unsigned long long)arg1 ;
-(NSString *)destinationFieldName;
-(void)setDestinationFieldName:(NSString *)arg1 ;
-(NSError *)error;
-(NSString *)downloadToken;
-(void)setOwner:(NSString *)arg1 ;
-(NSData *)assetKey;
-(id)description;
-(void)setRequestor:(NSString *)arg1 ;
-(NSString *)owner;
-(void)setError:(NSError *)arg1 ;
-(NSString *)requestor;
-(NSData *)referenceSignature;
-(void)setReferenceSignature:(NSData *)arg1 ;
-(void)setAssetKey:(NSData *)arg1 ;
-(NSURL *)contentBaseURL;
-(unsigned long long)downloadTokenExpiration;
-(CKRecordZoneID *)sourceZoneID;
@end
