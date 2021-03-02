/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATXCloudStorageSettingsDelegate;
@interface ATXCloudStorageSettingsListener : NSObject {

	id<ATXCloudStorageSettingsDelegate> _delegate;

}

@property (nonatomic,retain) id<ATXCloudStorageSettingsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isBackupEnabled;
+(id)sharedInstance;
-(void)registerForCloudStorageSettingsNotifications;
-(id)init;
-(void)registerForCloudStorageDeletedByUserNotification;
-(void)handleDeleteDataRequest;
-(void)registerForCloudSyncPreferenceDidChangeNotification;
-(void)handleBackupPreferencesDidChange;
-(void)setDelegate:(id<ATXCloudStorageSettingsDelegate>)arg1 ;
-(id<ATXCloudStorageSettingsDelegate>)delegate;
@end
