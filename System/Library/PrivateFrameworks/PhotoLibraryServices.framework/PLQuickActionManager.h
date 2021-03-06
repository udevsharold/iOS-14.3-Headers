/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, PLDatabaseContext, NSData, SBSApplicationShortcutService;

@interface PLQuickActionManager : NSObject {

	id _cameraWellObserver;
	NSOperationQueue* _operationQueue;
	PLDatabaseContext* _databaseContext;
	BOOL __mostRecentPhotoIsInvalid;
	NSData* __cachedMostRecentPhotoData;
	SBSApplicationShortcutService* __appShortcutService;
	Class __SBSApplicationShortcutServiceClass;
	Class __SBSApplicationShortcutItemClass;
	Class __SBSApplicationShortcutCustomImageIconClass;

}

@property (setter=_setCachedMostRecentPhotoData:,nonatomic,retain) NSData * _cachedMostRecentPhotoData;                                             //@synthesize _cachedMostRecentPhotoData=__cachedMostRecentPhotoData - In the implementation block
@property (assign,setter=_setMostRecentPhotoIsInvalid:,nonatomic) BOOL _mostRecentPhotoIsInvalid;                                                   //@synthesize _mostRecentPhotoIsInvalid=__mostRecentPhotoIsInvalid - In the implementation block
@property (setter=_setAppShortcutService:,nonatomic,retain) SBSApplicationShortcutService * _appShortcutService;                                    //@synthesize _appShortcutService=__appShortcutService - In the implementation block
@property (setter=_setSBSApplicationShortcutServiceClass:,nonatomic,retain) Class _SBSApplicationShortcutServiceClass;                              //@synthesize _SBSApplicationShortcutServiceClass=__SBSApplicationShortcutServiceClass - In the implementation block
@property (setter=_setSBSApplicationShortcutItemClass:,nonatomic,retain) Class _SBSApplicationShortcutItemClass;                                    //@synthesize _SBSApplicationShortcutItemClass=__SBSApplicationShortcutItemClass - In the implementation block
@property (setter=_setSBSApplicationShortcutCustomImageIconClass:,nonatomic,retain) Class _SBSApplicationShortcutCustomImageIconClass;              //@synthesize _SBSApplicationShortcutCustomImageIconClass=__SBSApplicationShortcutCustomImageIconClass - In the implementation block
-(NSData *)_cachedMostRecentPhotoData;
-(void)_setSBSApplicationShortcutItemClass:(Class)arg1 ;
-(void)dealloc;
-(BOOL)_userHasPhotosFromLastYear;
-(void)_setSBSApplicationShortcutServiceClass:(Class)arg1 ;
-(void)_setMostRecentPhotoIsInvalid:(BOOL)arg1 ;
-(Class)_SBSApplicationShortcutServiceClass;
-(SBSApplicationShortcutService *)_appShortcutService;
-(id)_buildMostRecentPhotoQuickAction;
-(void)cameraPreviewWellImageDidChange;
-(id)_buildFavoritesQuickAction;
-(id)_shortcutSystemImageNamed:(id)arg1 ;
-(void)buildQuickActionItems;
-(Class)_SBSApplicationShortcutItemClass;
-(BOOL)_mostRecentPhotoIsInvalid;
-(Class)_SBSApplicationShortcutCustomImageIconClass;
-(void)_setAppShortcutService:(id)arg1 ;
-(void)_setCachedMostRecentPhotoData:(id)arg1 ;
-(void)_setSBSApplicationShortcutCustomImageIconClass:(Class)arg1 ;
-(BOOL)_userHasPhotos;
-(id)_buildOneYearAgoQuickAction;
-(id)_buildSearchQuickAction;
-(id)initWithDatabaseContext:(id)arg1 ;
@end

