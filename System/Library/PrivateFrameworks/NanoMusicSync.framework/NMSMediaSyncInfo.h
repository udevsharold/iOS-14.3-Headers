/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface NMSMediaSyncInfo : NSObject {

	int _notifyToken;
	NSDictionary* _info;
	unsigned long long _target;

}

@property (nonatomic,retain) NSDictionary * info;                      //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) unsigned long long target;              //@synthesize target=_target - In the implementation block
+(id)_syncInfoDirectory;
-(id)initWithTarget:(unsigned long long)arg1 ;
-(id)containers;
-(void)setInfo:(NSDictionary *)arg1 ;
-(BOOL)_isValid;
-(NSDictionary *)info;
-(void)dealloc;
-(BOOL)hasItemsOverStorageLimit;
-(unsigned long long)target;
-(unsigned long long)playabilityForContainer:(id)arg1 ;
-(unsigned long long)status;
-(BOOL)hasItemsOverStorageLimitForContainer:(id)arg1 ;
-(id)_targetIdentifier;
-(id)_notificationName;
-(float)progress;
-(float)progressForContainer:(id)arg1 ;
-(unsigned long long)statusForContainer:(id)arg1 ;
-(id)_initWithTarget:(unsigned long long)arg1 readAndObserveChanges:(BOOL)arg2 ;
-(void)_registerForInfoChanged;
-(void)_readInfo;
-(id)_syncInfoFilePath;
-(id)itemsForContainer:(id)arg1 ;
-(unsigned long long)statusForItem:(id)arg1 ;
-(float)progressForItem:(id)arg1 ;
-(BOOL)isItemOverStorageLimit:(id)arg1 ;
-(BOOL)hasDownloadableItemsWithinStorageLimitForContainer:(id)arg1 ;
-(id)userInfoForContainer:(id)arg1 ;
-(id)userInfoForItem:(id)arg1 ;
-(BOOL)_hasItemsForContainer:(id)arg1 ;
-(id)_preferencesApplicationID;
-(id)_preferencesInfoKey;
-(unsigned long long)numberOfItemsOverStorageLimitForContainer:(id)arg1 ;
@end
