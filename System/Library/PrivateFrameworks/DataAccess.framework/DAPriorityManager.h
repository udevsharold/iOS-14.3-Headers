/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, BKSApplicationStateMonitor, NSMutableDictionary;

@interface DAPriorityManager : NSObject {

	int _currentPriority;
	NSMapTable* _clientsToPriorityRequests;
	BKSApplicationStateMonitor* _appStateMonitor;
	NSMutableDictionary* _cachedAppState;
	long long _foregroundDataclasses;

}

@property (nonatomic,retain) NSMapTable * clientsToPriorityRequests;                    //@synthesize clientsToPriorityRequests=_clientsToPriorityRequests - In the implementation block
@property (nonatomic,retain) BKSApplicationStateMonitor * appStateMonitor;              //@synthesize appStateMonitor=_appStateMonitor - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedAppState;                      //@synthesize cachedAppState=_cachedAppState - In the implementation block
@property (assign,nonatomic) long long foregroundDataclasses;                           //@synthesize foregroundDataclasses=_foregroundDataclasses - In the implementation block
@property (nonatomic,readonly) int currentPriority;                                     //@synthesize currentPriority=_currentPriority - In the implementation block
+(id)sharedManager;
+(void)vendPriorityManagers;
-(id)appIDsToDataclasses;
-(void)setClientsToPriorityRequests:(NSMapTable *)arg1 ;
-(NSMapTable *)clientsToPriorityRequests;
-(int)currentPriority;
-(id)init;
-(long long)foregroundDataclasses;
-(void)dealloc;
-(id)stateString;
-(void)requestPriority:(int)arg1 forClient:(id)arg2 dataclasses:(long long)arg3 ;
-(int)_recalculatePriority;
-(void)_updateForegroundDataclasses;
-(void)_setForegroundDataclasses:(long long)arg1 ;
-(void)_setNewPriority;
-(void)setAppStateMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(BKSApplicationStateMonitor *)appStateMonitor;
-(void)setForegroundDataclasses:(long long)arg1 ;
-(void)bumpDataclassesToUIPriority:(long long)arg1 ;
-(void)_applicationStateChanged:(id)arg1 ;
-(NSMutableDictionary *)cachedAppState;
-(void)setCachedAppState:(NSMutableDictionary *)arg1 ;
@end

