/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSString, NSNumber, NSArray, ASFolderItemsSyncResponse;

@interface ASCollection : ASItem {

	long long _dataclass;
	NSString* _syncKey;
	NSString* _collectionId;
	NSNumber* _status;
	NSNumber* _moreAvailable;
	NSArray* _changedItems;
	NSArray* _responseItems;
	ASFolderItemsSyncResponse* _parentResponse;
	int _sniffableType;
	BOOL _checkedShouldSniffInvites;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)init;
-(id)changedItems;
-(id)syncKey;
-(id)status;
-(long long)dataclass;
-(id)collectionId;
-(void)setCollectionId:(id)arg1 ;
-(void)setSyncKey:(id)arg1 ;
-(id)description;
-(id)moreAvailable;
-(void)setStatus:(id)arg1 ;
-(id)responseItems;
-(void)setMoreAvailable:(id)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)setResponseItems:(id)arg1 ;
-(void)setDataclassString:(id)arg1 ;
-(void)setChangedItems:(id)arg1 ;
-(void)setParentResponse:(id)arg1 ;
-(int)sniffableTypeForAccount:(id)arg1 ;
@end

