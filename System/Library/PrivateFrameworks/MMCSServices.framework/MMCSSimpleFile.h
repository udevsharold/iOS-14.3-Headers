/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSData, NSError;

@interface MMCSSimpleFile : NSObject {

	int _fd;
	double _progress;
	NSString* _authToken;
	long long _encryptionBehavior;
	NSString* _localPath;
	NSURL* _requestURL;
	NSString* _requestorID;
	NSString* _guid;
	unsigned long long _itemID;
	NSData* _signature;
	NSData* _fileHash;
	unsigned long long _protocolFileSize;
	NSError* _mmcsError;
	NSData* _authResponseData;

}

@property (retain) NSString * guid;                                       //@synthesize guid=_guid - In the implementation block
@property (assign) unsigned long long itemID;                             //@synthesize itemID=_itemID - In the implementation block
@property (retain) NSURL * requestURL;                                    //@synthesize requestURL=_requestURL - In the implementation block
@property (retain) NSString * requestorID;                                //@synthesize requestorID=_requestorID - In the implementation block
@property (retain) NSData * signature;                                    //@synthesize signature=_signature - In the implementation block
@property (retain) NSString * authToken;                                  //@synthesize authToken=_authToken - In the implementation block
@property (retain) NSString * localPath;                                  //@synthesize localPath=_localPath - In the implementation block
@property (assign) int fd;                                                //@synthesize fd=_fd - In the implementation block
@property (retain) NSData * fileHash;                                     //@synthesize fileHash=_fileHash - In the implementation block
@property (assign) unsigned long long protocolFileSize;                   //@synthesize protocolFileSize=_protocolFileSize - In the implementation block
@property (assign) double progress;                                       //@synthesize progress=_progress - In the implementation block
@property (setter=setMMCSError:,retain) NSError * mmcsError;              //@synthesize mmcsError=_mmcsError - In the implementation block
@property (assign) long long encryptionBehavior;                          //@synthesize encryptionBehavior=_encryptionBehavior - In the implementation block
@property (retain) NSData * authResponseData;                             //@synthesize authResponseData=_authResponseData - In the implementation block
-(void)setAuthToken:(NSString *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(unsigned long long)itemID;
-(NSData *)signature;
-(id)init;
-(NSString *)authToken;
-(void)dealloc;
-(void)setFd:(int)arg1 ;
-(NSData *)fileHash;
-(void)setFileHash:(NSData *)arg1 ;
-(void)setRequestURL:(NSURL *)arg1 ;
-(id)description;
-(NSString *)localPath;
-(void)setSignature:(NSData *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setItemID:(unsigned long long)arg1 ;
-(NSURL *)requestURL;
-(double)progress;
-(int)fd;
-(NSString *)guid;
-(void)setMMCSError:(id)arg1 ;
-(unsigned long long)protocolFileSize;
-(void)setProtocolFileSize:(unsigned long long)arg1 ;
-(void)setLocalPath:(NSString *)arg1 ;
-(void)setEncryptionBehavior:(long long)arg1 ;
-(NSError *)mmcsError;
-(NSString *)requestorID;
-(void)setAuthResponseData:(NSData *)arg1 ;
-(NSData *)authResponseData;
-(void)setRequestorID:(NSString *)arg1 ;
-(long long)encryptionBehavior;
@end
