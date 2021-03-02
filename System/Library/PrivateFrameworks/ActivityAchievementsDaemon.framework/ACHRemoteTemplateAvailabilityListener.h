/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>

@protocol ACHRemoteTemplateAvailabilityListenerDelegate;
@class NSObject, HDProfile, ACHTemplateStore, NSString;

@interface ACHRemoteTemplateAvailabilityListener : NSObject <HDHealthDaemonReadyObserver> {

	NSObject*<ACHRemoteTemplateAvailabilityListenerDelegate> _delegate;
	HDProfile* _profile;
	ACHTemplateStore* _templateStore;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                                            //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) ACHTemplateStore * templateStore;                                               //@synthesize templateStore=_templateStore - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<ACHRemoteTemplateAvailabilityListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(void)setProfile:(HDProfile *)arg1 ;
-(HDProfile *)profile;
-(void)setTemplateStore:(ACHTemplateStore *)arg1 ;
-(ACHTemplateStore *)templateStore;
-(void)setDelegate:(NSObject*<ACHRemoteTemplateAvailabilityListenerDelegate>)arg1 ;
-(NSObject*<ACHRemoteTemplateAvailabilityListenerDelegate>)delegate;
-(id)initWithProfile:(id)arg1 templateStore:(id)arg2 ;
-(void)_unprotectedNanoUserDefaultsDidSyncWithNotification:(id)arg1 ;
-(void)_updateRemoteTemplateAvailabilityOnPairedDevice;
-(BOOL)_isKeyACHAvailabilityStateKey:(id)arg1 ;
@end
