/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICApp, NSLock, NSDictionary, NSMutableDictionary, NSArray;

@interface ICAppRegistry : NSObject {

	BOOL _isFilled;
	int _urlTypesToken;
	ICApp* _currentApp;
	NSLock* _registryLock;
	NSDictionary* _appsDictionary;
	NSDictionary* _actions;
	NSLock* _observersLock;
	NSMutableDictionary* _observersByIdentifier;

}

@property (nonatomic,retain) NSLock * registryLock;                                    //@synthesize registryLock=_registryLock - In the implementation block
@property (nonatomic,retain) NSDictionary * appsDictionary;                            //@synthesize appsDictionary=_appsDictionary - In the implementation block
@property (nonatomic,retain) NSDictionary * actions;                                   //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) NSLock * observersLock;                                   //@synthesize observersLock=_observersLock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * observersByIdentifier;              //@synthesize observersByIdentifier=_observersByIdentifier - In the implementation block
@property (assign,nonatomic) int urlTypesToken;                                        //@synthesize urlTypesToken=_urlTypesToken - In the implementation block
@property (nonatomic,readonly) NSArray * apps; 
@property (nonatomic,readonly) ICApp * currentApp;                                     //@synthesize currentApp=_currentApp - In the implementation block
@property (nonatomic,readonly) NSArray * allActions; 
@property (nonatomic,readonly) BOOL isFilled;                                          //@synthesize isFilled=_isFilled - In the implementation block
+(id)sharedRegistry;
+(id)legacyAppIdentifierForBundleIdentifier:(id)arg1 ;
+(id)bundleIdentifierForLegacyAppIdentifier:(id)arg1 ;
-(NSArray *)apps;
-(id)cacheURL;
-(id)init;
-(id)currentVersion;
-(NSArray *)allActions;
-(void)dealloc;
-(NSDictionary *)actions;
-(BOOL)isFilled;
-(void)setObserversLock:(NSLock *)arg1 ;
-(id)appWithIdentifier:(id)arg1 ;
-(id)description;
-(void)setActions:(NSDictionary *)arg1 ;
-(NSLock *)observersLock;
-(id)cacheDirectoryURL;
-(void)updateCache:(/*^block*/id)arg1 ;
-(NSLock *)registryLock;
-(id)appWithBundleIdentifier:(id)arg1 ;
-(ICApp *)currentApp;
-(void)deleteCache;
-(id)bundledURL;
-(NSDictionary *)appsDictionary;
-(id)_appsWithIdentifiers:(id)arg1 ;
-(id)appsWithIdentifiers:(id)arg1 ;
-(id)appWithURLScheme:(id)arg1 ;
-(id)actionsWithIdentifiers:(id)arg1 ;
-(void)updateRegistry;
-(void)fillRegistry;
-(void)addInstallStatusObserver:(id)arg1 forAppIdentifiers:(id)arg2 ;
-(void)removeInstallStatusObserver:(id)arg1 forAppIdentifiers:(id)arg2 ;
-(void)refreshInstalledApps;
-(void)setRegistryLock:(NSLock *)arg1 ;
-(void)setAppsDictionary:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)observersByIdentifier;
-(void)setObserversByIdentifier:(NSMutableDictionary *)arg1 ;
-(int)urlTypesToken;
-(void)setUrlTypesToken:(int)arg1 ;
@end
