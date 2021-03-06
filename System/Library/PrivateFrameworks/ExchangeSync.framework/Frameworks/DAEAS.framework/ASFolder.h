/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ASFolder : ASItem <NSSecureCoding> {

	BOOL _renameOnCollision;
	int _folderType;
	int _localID;
	NSString* _serverID;
	NSString* _parentID;
	NSString* _displayName;
	NSString* _localUUID;
	unsigned long long _changeType;
	long long _dataclass;

}

@property (nonatomic,copy) NSString * parentID;                          //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,copy) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) int folderType;                             //@synthesize folderType=_folderType - In the implementation block
@property (assign,nonatomic) long long dataclass;                        //@synthesize dataclass=_dataclass - In the implementation block
@property (assign,nonatomic) int localID;                                //@synthesize localID=_localID - In the implementation block
@property (nonatomic,copy) NSString * serverID;                          //@synthesize serverID=_serverID - In the implementation block
@property (nonatomic,copy) NSString * localUUID;                         //@synthesize localUUID=_localUUID - In the implementation block
@property (assign,nonatomic) unsigned long long changeType;              //@synthesize changeType=_changeType - In the implementation block
@property (assign,nonatomic) BOOL renameOnCollision;                     //@synthesize renameOnCollision=_renameOnCollision - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSString *)parentID;
-(void)setChangeType:(unsigned long long)arg1 ;
-(long long)dataclass;
-(void)setDisplayName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)changeType;
-(void)setFolderType:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setServerID:(NSString *)arg1 ;
-(void)setDataclass:(long long)arg1 ;
-(id)description;
-(void)setParentID:(NSString *)arg1 ;
-(void)setRenameOnCollision:(BOOL)arg1 ;
-(BOOL)renameOnCollision;
-(BOOL)isEqual:(id)arg1 ;
-(int)folderType;
-(NSString *)serverID;
-(int)localID;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)setLocalID:(int)arg1 ;
-(id)_folderTypeString;
-(void)setFolderTypeNumber:(id)arg1 ;
-(BOOL)mayContainDataclasses:(long long)arg1 ;
-(id)initWithFolderType:(int)arg1 serverID:(id)arg2 parentID:(id)arg3 displayName:(id)arg4 localID:(int)arg5 ;
-(NSString *)localUUID;
-(void)setLocalUUID:(NSString *)arg1 ;
@end

