/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSYSyncCoordinatorDelegate.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue;
@class PSYSyncCoordinator, HDProfile, NSObject, NSHashTable, NSString;

@interface HDPairedSyncManager : NSObject <PSYSyncCoordinatorDelegate, HDDiagnosticObject> {

	PSYSyncCoordinator* _pairedSyncCoordinator;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _unfinishedSyncSessions;

}

@property (nonatomic,retain) PSYSyncCoordinator * pairedSyncCoordinator;              //@synthesize pairedSyncCoordinator=_pairedSyncCoordinator - In the implementation block
@property (assign,nonatomic,__weak) HDProfile * profile;                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSHashTable * unfinishedSyncSessions;                    //@synthesize unfinishedSyncSessions=_unfinishedSyncSessions - In the implementation block
@property (readonly) PSYSyncCoordinator * syncCoordinator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)syncCoordinatorWithServiceName:(id)arg1 ;
-(void)setProfile:(HDProfile *)arg1 ;
-(void)setPairedSyncCoordinator:(PSYSyncCoordinator *)arg1 ;
-(void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2 ;
-(void)_queue_didSendRestoreMessagesForSession:(id)arg1 error:(id)arg2 ;
-(HDProfile *)profile;
-(void)dealloc;
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg1 ;
-(id)_typeStringForSyncSession:(id)arg1 ;
-(NSHashTable *)unfinishedSyncSessions;
-(id)diagnosticDescription;
-(void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2 ;
-(void)setUnfinishedSyncSessions:(NSHashTable *)arg1 ;
-(void)_queue_didFinishRestoreForSession:(id)arg1 error:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(PSYSyncCoordinator *)syncCoordinator;
-(id)initWithProfile:(id)arg1 queue:(id)arg2 ;
-(void)_queue_pairedSyncDidStartWithSession:(id)arg1 ;
-(PSYSyncCoordinator *)pairedSyncCoordinator;
-(id)_syncRestrictionString;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)permitSynchronization;
@end

