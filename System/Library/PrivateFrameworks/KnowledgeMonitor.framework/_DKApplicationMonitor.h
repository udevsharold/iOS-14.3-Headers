/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>

@class FBSDisplayLayoutMonitor, NSMutableArray, BKSApplicationStateMonitor, NSMutableDictionary, NSSet, BMAppLaunchStream, NSString;

@interface _DKApplicationMonitor : _DKMonitor <FBSDisplayLayoutObserver> {

	FBSDisplayLayoutMonitor* _monitor;
	NSMutableArray* _previouslyForegroundServices;
	BKSApplicationStateMonitor* _bksMonitor;
	NSMutableDictionary* _activeExtensions;
	NSSet* _servicesOfInterestForWatchCommunication;
	BMAppLaunchStream* _appLaunchStream;
	NSString* _lastIdentifierSet;

}

@property (nonatomic,retain) FBSDisplayLayoutMonitor * monitor;                            //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,retain) NSMutableArray * previouslyForegroundServices;                //@synthesize previouslyForegroundServices=_previouslyForegroundServices - In the implementation block
@property (nonatomic,retain) BKSApplicationStateMonitor * bksMonitor;                      //@synthesize bksMonitor=_bksMonitor - In the implementation block
@property (retain) NSMutableDictionary * activeExtensions;                                 //@synthesize activeExtensions=_activeExtensions - In the implementation block
@property (nonatomic,retain) NSSet * servicesOfInterestForWatchCommunication;              //@synthesize servicesOfInterestForWatchCommunication=_servicesOfInterestForWatchCommunication - In the implementation block
@property (nonatomic,retain) BMAppLaunchStream * appLaunchStream;                          //@synthesize appLaunchStream=_appLaunchStream - In the implementation block
@property (nonatomic,retain) NSString * lastIdentifierSet;                                 //@synthesize lastIdentifierSet=_lastIdentifierSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)eventStream;
+(void)setFocalApplication:(id)arg1 launchReason:(id)arg2 ;
+(id)entitlements;
+(id)_eventWithBundleIdentifier:(id)arg1 launchReason:(id)arg2 ;
+(id)_defaultEvent;
+(/*^block*/id)_eventFilterBlock;
+(void)addServicesForeground:(id)arg1 andRemoveServices:(id)arg2 ;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(FBSDisplayLayoutMonitor *)monitor;
-(void)setLastIdentifierSet:(NSString *)arg1 ;
-(void)platformSpecificStart;
-(void)setCurrentActiveComplications;
-(id)init;
-(void)setAppLaunchStream:(BMAppLaunchStream *)arg1 ;
-(void)dealloc;
-(void)platformSpecificStop;
-(void)registerForActiveComplicationChangeNotifications;
-(void)obtainCurrentValue;
-(void)setServicesOfInterestForWatchCommunication:(NSSet *)arg1 ;
-(void)deactivate;
-(void)synchronouslyReflectCurrentValue;
-(void)setBksMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(NSSet *)servicesOfInterestForWatchCommunication;
-(void)setActiveExtensions:(NSMutableDictionary *)arg1 ;
-(BOOL)ignoreAppExtension:(id)arg1 ;
-(NSMutableDictionary *)activeExtensions;
-(void)start;
-(id)currentActiveComplications;
-(void)setPreviouslyForegroundServices:(NSMutableArray *)arg1 ;
-(NSString *)lastIdentifierSet;
-(NSMutableArray *)previouslyForegroundServices;
-(void)setMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
-(BKSApplicationStateMonitor *)bksMonitor;
-(void)stop;
-(BMAppLaunchStream *)appLaunchStream;
@end
