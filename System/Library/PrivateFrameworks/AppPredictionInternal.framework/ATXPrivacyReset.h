/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXPrivacyReset : NSObject {

	id _resetPrivacyWarningsNotificationToken;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)_placeholderExists;
-(void)_removeAllAppActionData;
-(void)dealloc;
-(id)_placeholderPath;
-(void)_writeDeletionPlaceholder;
-(void)_registerForResetPrivacyWarningsNotification;
-(void)_removeAllBlendingUICaches;
-(void)_handlePrivacyResetNotification;
@end

