/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSDate;

@interface NNMKMailbox : NSObject <NSSecureCoding, NSCopying> {

	BOOL _syncEnabled;
	BOOL _syncRequested;
	BOOL _syncActive;
	BOOL _hasSelection;
	BOOL _isPushEnabled;
	BOOL _databaseContentVerified;
	unsigned long long _type;
	unsigned long long _filterType;
	NSString* _mailboxId;
	NSString* _accountId;
	NSString* _accountLocalId;
	NSURL* _url;
	NSString* _customName;
	NSDate* _lastUpdate;
	NSString* _displayName;

}

@property (assign,nonatomic) BOOL databaseContentVerified;                 //@synthesize databaseContentVerified=_databaseContentVerified - In the implementation block
@property (assign,nonatomic) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long filterType;                //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,retain) NSString * mailboxId;                         //@synthesize mailboxId=_mailboxId - In the implementation block
@property (nonatomic,retain) NSString * accountId;                         //@synthesize accountId=_accountId - In the implementation block
@property (nonatomic,retain) NSString * accountLocalId;                    //@synthesize accountLocalId=_accountLocalId - In the implementation block
@property (nonatomic,retain) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * customName;                        //@synthesize customName=_customName - In the implementation block
@property (assign,nonatomic) BOOL syncEnabled;                             //@synthesize syncEnabled=_syncEnabled - In the implementation block
@property (assign,nonatomic) BOOL syncRequested;                           //@synthesize syncRequested=_syncRequested - In the implementation block
@property (assign,nonatomic) BOOL syncActive;                              //@synthesize syncActive=_syncActive - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdate;                          //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL hasSelection;                            //@synthesize hasSelection=_hasSelection - In the implementation block
@property (assign,nonatomic) BOOL isPushEnabled;                           //@synthesize isPushEnabled=_isPushEnabled - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                     //@synthesize displayName=_displayName - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)syncedTypeFromFilterType:(unsigned long long)arg1 ;
+(id)idsFromMailboxes:(id)arg1 ;
+(unsigned long long)messageStateForMailboxFilterType:(unsigned long long)arg1 ;
+(id)generateMailboxIdWithAccountId:(id)arg1 mailboxName:(id)arg2 ;
+(unsigned long long)syncedTypeFromMailbox:(id)arg1 ;
+(unsigned long long)defaultFilterTypes;
-(BOOL)shouldFilter;
-(id)init;
-(BOOL)isSelected;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)filterType;
-(void)setType:(unsigned long long)arg1 ;
-(void)setSyncEnabled:(BOOL)arg1 ;
-(void)setFilterType:(unsigned long long)arg1 ;
-(BOOL)hasSelection;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setLastUpdate:(NSDate *)arg1 ;
-(NSString *)customName;
-(id)description;
-(unsigned long long)type;
-(void)setCustomName:(NSString *)arg1 ;
-(BOOL)syncEnabled;
-(NSString *)accountId;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasSelection:(BOOL)arg1 ;
-(void)setAccountId:(NSString *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(NSDate *)lastUpdate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(NSString *)mailboxId;
-(void)setMailboxId:(NSString *)arg1 ;
-(BOOL)syncActive;
-(void)setSyncRequested:(BOOL)arg1 ;
-(BOOL)syncRequested;
-(void)setSyncActive:(BOOL)arg1 ;
-(NSString *)accountLocalId;
-(void)setAccountLocalId:(NSString *)arg1 ;
-(BOOL)hasFilterType:(unsigned long long)arg1 ;
-(void)resetURL;
-(BOOL)hasCompoundFilters;
-(id)initWithFilterType:(unsigned long long)arg1 ;
-(BOOL)databaseContentVerified;
-(void)setDatabaseContentVerified:(BOOL)arg1 ;
-(BOOL)isPushEnabled;
-(BOOL)isSelectedForFilterType:(unsigned long long)arg1 ;
-(BOOL)hasAnyFilter;
-(void)addFilterType:(unsigned long long)arg1 ;
-(void)removeFilterType:(unsigned long long)arg1 ;
-(void)setIsPushEnabled:(BOOL)arg1 ;
@end
