/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, SSXPCConnection, NSHashTable, SSDownloadManagerOptions, NSMutableSet;

@interface SSDownloadManager : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSArray* _activeDownloads;
	BOOL _activeDownloadsChanged;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	SSXPCConnection* _connection;
	NSArray* _downloads;
	BOOL _downloadsChanged;
	BOOL _isUsingNetwork;
	SSXPCConnection* _observerConnection;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSHashTable* _observers;
	SSDownloadManagerOptions* _options;
	NSMutableSet* _removedDownloads;
	int _launchNotificationToken;

}

@property (readonly) SSDownloadManagerOptions * managerOptions; 
@property (readonly) NSArray * activeDownloads; 
@property (readonly) NSArray * downloads; 
@property (getter=isUsingNetwork,readonly) BOOL usingNetwork; 
+(void)_sendGlobalHandler:(id)arg1 ;
+(id)EBookDownloadKinds;
+(id)softwareDownloadKinds;
+(void)retryAllRestoreDownloads;
+(void)reconnectToLSApplicationWorkspace;
+(void)removePersistenceIdentifier:(id)arg1 ;
+(void)setDownloadHandler:(id)arg1 ;
+(id)EBookDownloadManager;
+(id)IPodDownloadManager;
+(id)softwareDownloadManager;
+(id)allStoreDownloadKinds;
+(id)ITunesDownloadKinds;
+(void)reevaluateBackgroundDownloadsForBundleIdentifiers:(id)arg1 ;
+(void)_triggerDownloads;
+(id)IPodDownloadKinds;
-(id)_XPCConnection;
-(void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2 ;
-(void)cancelAllDownloadsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_resetAllDownloads;
-(BOOL)isUsingNetwork;
-(id)_copyDownloadsForMessage:(long long)arg1 downloadIDs:(id)arg2 ;
-(void)_sendDownloadsChanged:(id)arg1 ;
-(void)_connectAsObserver;
-(void)_pauseDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)canCancelDownload:(id)arg1 ;
-(void)finishDownloads:(id)arg1 ;
-(id)_copyDownloadKindsUsingNetwork;
-(void)_handleDownloadsChanged:(id)arg1 ;
-(void)_handleDownloadsRemoved:(id)arg1 ;
-(void)_insertDownloads:(id)arg1 before:(id)arg2 after:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)resumeDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_moveDownload:(id)arg1 before:(id)arg2 after:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)addDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(SSDownloadManagerOptions *)managerOptions;
-(id)initWithManagerOptions:(id)arg1 ;
-(void)restartDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_sendMessageToObservers:(SEL)arg1 ;
-(void)setDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_pauseDownloads:(id)arg1 forced:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getDownloadsUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)activeDownloads;
-(NSArray *)downloads;
-(void)pauseDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)_supportsSoftwareKind;
-(void)_sendMessage:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_loadDownloadKindsUsingNetwork;
-(void)_reloadIsUsingNetworkWithDownloadKinds:(id)arg1 ;
-(id)_newOptionsDictionary;
-(void)moveDownload:(id)arg1 afterDownload:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)insertDownloads:(id)arg1 afterDownload:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_willFinishDownloads:(id)arg1 ;
-(void)_sendObserverConnection;
-(void)insertDownloads:(id)arg1 beforeDownload:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_finishDownloads:(id)arg1 ;
-(id)initWithDownloadKinds:(id)arg1 ;
-(void)_connectAfterDaemonLaunch;
-(void)moveDownload:(id)arg1 beforeDownload:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)reloadFromServer;
-(void)_handleDownloadKindsUsingNetworkChanged:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(id)_copyDownloads;
-(void)addObserver:(id)arg1 ;
-(void)_handleReply:(id)arg1 forDownloads:(id)arg2 message:(id)arg3 isRetry:(BOOL)arg4 block:(/*^block*/id)arg5 ;
-(void)setDownloads:(id)arg1 forKinds:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_initSSDownloadManagerWithOptions:(id)arg1 ;
-(void)_handleDownloadStatesChanged:(id)arg1 ;
-(void)cancelDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end
