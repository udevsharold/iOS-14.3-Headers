/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSArray, NSMutableArray, SSMetricsEventController, NSString;

@interface SSMetricsEventReportingSession : NSObject {

	long long _insertTimestamp;
	NSURL* _reportingURL;
	NSArray* _unreportedEvents;
	NSMutableArray* _unreportedEventPIDs;
	SSMetricsEventController* _eventController;
	NSString* _sessionCanaryIdentifier;
	BOOL _suppressUserInfo;

}
-(id)initWithReportingURL:(id)arg1 insertTimestamp:(long long)arg2 eventController:(id)arg3 ;
-(id)initWithReportingURL:(id)arg1 insertTimestamp:(long long)arg2 suppressUserInfo:(BOOL)arg3 eventController:(id)arg4 ;
-(id)_unreportedEvents;
-(id)writeEventsToStream:(id)arg1 uncompressedMaxSize:(long long)arg2 ;
-(id)sessionCanaryIdentifier;
-(long long)_estimateSizeOfJsonObject:(id)arg1 ;
-(id)initWithReportingURL:(id)arg1 insertTimestamp:(long long)arg2 suppressDSID:(BOOL)arg3 eventController:(id)arg4 ;
-(BOOL)anyUnreportedEvents;
-(BOOL)markEventsAsReported;
-(id)writeEventsToStream:(id)arg1 ;
-(void)_writeString:(id)arg1 toData:(id)arg2 ;
@end

