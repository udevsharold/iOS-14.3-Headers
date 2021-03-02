/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, DNDSSyncSettingsProviderDelegate;
@class NSObject, NPSDomainAccessor, DNDSSyncSettings;

@interface DNDSSyncSettingsProvider : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NPSDomainAccessor* _accessor;
	DNDSSyncSettings* _syncSettings;
	id<DNDSSyncSettingsProviderDelegate> _delegate;

}

@property (copy) DNDSSyncSettings * syncSettings;                                               //@synthesize syncSettings=_syncSettings - In the implementation block
@property (assign,nonatomic,__weak) id<DNDSSyncSettingsProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(void)dealloc;
-(void)setSyncSettings:(DNDSSyncSettings *)arg1 ;
-(void)setDelegate:(id<DNDSSyncSettingsProviderDelegate>)arg1 ;
-(id<DNDSSyncSettingsProviderDelegate>)delegate;
-(DNDSSyncSettings *)syncSettings;
-(void)_endMonitoringForChanges;
-(void)_beginMonitoringForChanges;
-(void)_updateSyncPreferences;
-(void)_queue_updateSyncPreferences;
@end
