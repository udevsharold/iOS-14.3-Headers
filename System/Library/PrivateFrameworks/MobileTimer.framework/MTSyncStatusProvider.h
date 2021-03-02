/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTSyncStatusProvider <NSObject>
@property (assign,nonatomic,__weak) id<MTSyncStatusProviderDelegate> syncStatusProviderDelegate; 
@required
+(BOOL)deviceSupportsSyncing;
-(void)setSyncStatusProviderDelegate:(id)arg1;
-(id<MTSyncStatusProviderDelegate>)syncStatusProviderDelegate;
-(unsigned long long)syncStatus;

@end
