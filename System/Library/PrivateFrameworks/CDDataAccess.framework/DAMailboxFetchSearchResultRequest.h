/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DAMailboxFetchSearchResultRequest : NSObject {

	int _bodyFormat;
	int _maxSize;
	NSString* _longID;
	NSString* _folderID;
	NSString* _serverID;

}

@property (nonatomic,copy) NSString * longID;                //@synthesize longID=_longID - In the implementation block
@property (nonatomic,copy) NSString * folderID;              //@synthesize folderID=_folderID - In the implementation block
@property (nonatomic,copy) NSString * serverID;              //@synthesize serverID=_serverID - In the implementation block
@property (assign,nonatomic) int bodyFormat;                 //@synthesize bodyFormat=_bodyFormat - In the implementation block
@property (assign,nonatomic) int maxSize;                    //@synthesize maxSize=_maxSize - In the implementation block
-(int)maxSize;
-(NSString *)longID;
-(NSString *)folderID;
-(unsigned long long)hash;
-(void)setServerID:(NSString *)arg1 ;
-(id)description;
-(void)setLongID:(NSString *)arg1 ;
-(id)initRequestForBodyFormat:(int)arg1 withFolderID:(id)arg2 withServerID:(id)arg3 withLongID:(id)arg4 withBodySizeLimit:(int)arg5 ;
-(void)setMaxSize:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)bodyFormat;
-(NSString *)serverID;
-(void)setBodyFormat:(int)arg1 ;
-(id)initRequestForBodyFormat:(int)arg1 withLongID:(id)arg2 withBodySizeLimit:(int)arg3 ;
-(void)setFolderID:(NSString *)arg1 ;
@end

