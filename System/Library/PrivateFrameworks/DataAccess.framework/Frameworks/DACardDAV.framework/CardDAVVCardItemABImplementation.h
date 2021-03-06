/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DACardDAV/CardDAVVCardItem.h>

@protocol DACardDAVRecord;
@class NSData, NSString, NSMutableDictionary, NSURL, NSNumber;

@interface CardDAVVCardItemABImplementation : CardDAVVCardItem {

	unsigned _abRecordType;
	NSData* _dataPayload;
	id<DACardDAVRecord> _cardDAVRecordItem;
	NSString* _syncKey;
	NSMutableDictionary* _UUIDToPersonCache;
	void* _abRecord;
	NSURL* _serverID;
	NSNumber* _clientID;

}

@property (assign,nonatomic) void* abRecord;                     //@synthesize abRecord=_abRecord - In the implementation block
@property (assign,nonatomic) unsigned abRecordType;              //@synthesize abRecordType=_abRecordType - In the implementation block
-(id)clientID;
-(void)dealloc;
-(void)setClientID:(id)arg1 ;
-(id)syncKey;
-(void)setLocalItem:(void*)arg1 ;
-(void)setServerID:(id)arg1 ;
-(void)setSyncKey:(id)arg1 ;
-(void)setDataPayload:(id)arg1 ;
-(BOOL)deleteFromContainer:(void*)arg1 ;
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5 ;
-(BOOL)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(BOOL)saveServerIDToExistingItem;
-(id)dataPayload;
-(id)serverID;
-(id)convertToDAContactSearchResultElement;
-(BOOL)loadLocalItemWithAccount:(id)arg1 ;
-(void*)abRecord;
-(void)setCardDAVRecordItem:(id)arg1 ;
-(id)cardDAVRecordItem;
-(id)createOrphanedABRecordFromParsedVCardOutRecordType:(unsigned*)arg1 ;
-(void)loadClientIDs;
-(unsigned long long)saveWithLocalObject:(id)arg1 toContainer:(id)arg2 containerURL:(id)arg3 shouldMergeProperties:(BOOL)arg4 outMergeDidChooseLocalProperties:(BOOL*)arg5 account:(id)arg6 shouldSaveGroups:(BOOL)arg7 ;
-(BOOL)saveIfGroupWithLocalObject:(id)arg1 toContainer:(id)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(BOOL)deleteFromContainer:(void*)arg1 account:(id)arg2 ;
-(id)UUIDToPersonCache;
-(void)setUUIDToPersonCache:(id)arg1 ;
-(void)setAbRecordType:(unsigned)arg1 ;
-(unsigned)abRecordType;
-(id)initWithABRecord:(void*)arg1 addressBook:(void*)arg2 outNeedsDBSave:(BOOL*)arg3 maxImageSize:(long long)arg4 maxResourceSize:(long long)arg5 inContainerWithURL:(id)arg6 ;
-(void)setAbRecord:(void*)arg1 ;
@end

