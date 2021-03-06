/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPlatform <NSObject>
@optional
-(id)pushToken;
-(id)pushTokenForPersonID:(id)arg1;
-(BOOL)isPerformanceLoggingEnabled;
-(id)contentURLForPersonID:(id)arg1;
-(Class)deletePluginClass;
-(void)didDetectUnrecoverableCondition;
-(BOOL)shouldEnableNewFeatures;
-(BOOL)policyMaySendDelete;

@required
-(BOOL)shouldLogAtLevel:(int)arg1;
-(Class)publisherPluginClass;
-(BOOL)policyMayDownload;
-(id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2;
-(Class)subscriberPluginClass;
-(id)socketOptions;
-(id)UDID;
-(void)logFile:(const char*)arg1 func:(const char*)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(char*)arg7;
-(id)baseURLForPersonID:(id)arg1;
-(id)authTokenForPersonID:(id)arg1;
-(id)appBundleInfoString;
-(void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(char*)arg4;
-(id)pathMediaStreamDir;
-(id)hardwareString;
-(id)theDaemon;
-(BOOL)policyMayUpload;
-(id)OSString;

@end

