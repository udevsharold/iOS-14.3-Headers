/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TRIDownloadNotificationProtocol.h>

@class NSError, NSString;

@interface TRIDownloadNotification : NSObject <TRIDownloadNotificationProtocol> {

	unsigned long long _type;
	unsigned long long _progress;
	NSError* _error;

}

@property (nonatomic,readonly) unsigned long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long progress;                      //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) unsigned long long progressMaxValue; 
@property (nonatomic,readonly) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_dispatchQueue;
+(id)notificationNameForKey:(id)arg1 ;
+(id)_notificationWithState:(unsigned long long)arg1 ;
+(BOOL)_notifyDownloadUpdateForKey:(id)arg1 withState:(unsigned long long)arg2 ;
+(id)registerDownloadNotificationForKey:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
+(void)deregisterNotificationWithToken:(id)arg1 ;
+(BOOL)notifyDownloadProgressForKey:(id)arg1 withProgress:(unsigned long long)arg2 ;
+(BOOL)notifyDownloadCompletedForKey:(id)arg1 ;
+(BOOL)notifyDownloadFailedForKey:(id)arg1 withError:(unsigned long long)arg2 ;
+(id)_descriptionForErrorCode:(unsigned long long)arg1 ;
-(NSError *)error;
-(id)initWithType:(unsigned long long)arg1 progress:(unsigned long long)arg2 error:(id)arg3 ;
-(unsigned long long)progressMaxValue;
-(unsigned long long)type;
-(unsigned long long)progress;
@end
