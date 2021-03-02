/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBLeafIconObserver.h>
#import <libobjc.A.dylib/SBApplicationPlaceholderLifecycleObserver.h>
#import <libobjc.A.dylib/SBApplicationPlaceholderDelegate.h>

@class SBApplicationController, SBApplicationLibraryObserver, NSMutableDictionary, NSMutableSet, NSCountedSet, NSString;

@interface SBApplicationPlaceholderController : NSObject <SBLeafIconObserver, SBApplicationPlaceholderLifecycleObserver, SBApplicationPlaceholderDelegate> {

	SBApplicationController* _appController;
	SBApplicationLibraryObserver* _lsWorkspaceObserver;
	NSMutableDictionary* _placeholdersByBundleID;
	NSMutableSet* _pendingAdded;
	NSMutableSet* _pendingInstalled;
	NSMutableSet* _pendingCancelled;
	NSCountedSet* _removingPlaceholderProxies;
	BOOL _hasDownloadedFromStore;
	BOOL _usingNetwork;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)isUsingNetwork;
-(void)_postPlaceholdersDidChangeForAdded:(id)arg1 modified:(id)arg2 removed:(id)arg3 ;
-(id)init;
-(void)iconAccessoriesDidUpdate:(id)arg1 ;
-(void)dealloc;
-(void)applicationPlaceholdersInstalled:(id)arg1 ;
-(void)_finishPlaceholder:(id)arg1 ;
-(void)_processPendingProxies;
-(void)applicationPlaceholdersCancelled:(id)arg1 ;
-(void)_addPlaceholders:(id)arg1 ;
-(void)_removePlaceholders:(id)arg1 forInstall:(BOOL)arg2 ;
-(void)applicationPlaceholdersNetworkUsageChanged:(BOOL)arg1 ;
-(void)applicationPlaceholdersAdded:(id)arg1 ;
-(BOOL)hasDownloadedStoreApplication;
-(void)placeholderWantsUninstall:(id)arg1 ;
-(BOOL)placeholderShouldAllowPausing:(id)arg1 ;
-(id)placeholdersByDisplayID;
-(id)placeholderForDisplayID:(id)arg1 ;
@end
