/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, ENExposureDetectionHistorySession;

@interface ENExposureDetectionHistoryCheck : NSObject {

	NSArray* _files;
	ENExposureDetectionHistorySession* _session;

}

@property (nonatomic,copy) NSArray * files;                                            //@synthesize files=_files - In the implementation block
@property (nonatomic,retain) ENExposureDetectionHistorySession * session;              //@synthesize session=_session - In the implementation block
-(void)setSession:(ENExposureDetectionHistorySession *)arg1 ;
-(ENExposureDetectionHistorySession *)session;
-(id)init;
-(NSArray *)files;
-(void)setFiles:(NSArray *)arg1 ;
@end
