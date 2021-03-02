/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ENLoggingPrefs : NSObject {

	BOOL _sensitiveLoggingEnabled;
	BOOL _rpiLoggingEnabled;

}
+(id)sharedENLoggingPrefs;
-(id)init;
-(void)loadLoggingPrefs;
-(void)setLoggingEntitledApp:(BOOL)arg1 ;
-(BOOL)isSensitiveLoggingAllowed;
-(BOOL)isRPILoggingAllowed;
@end
