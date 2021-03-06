/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSMutableDictionary, NSArray;

@interface OSAReport : NSObject {

	NSString* _incidentID;
	NSString* _logType;
	double _capture_time;
	NSMutableArray* _notes;
	NSMutableDictionary* _logWritingOptions;
	NSString* _logfile;

}

@property (nonatomic,readonly) double capture_time;              //@synthesize capture_time=_capture_time - In the implementation block
@property (nonatomic,readonly) NSArray * notes;                  //@synthesize notes=_notes - In the implementation block
@property (nonatomic,readonly) NSString * logfile;               //@synthesize logfile=_logfile - In the implementation block
+(id)systemIDWithDescription:(BOOL)arg1 ;
+(unsigned char)executeWithTimeout:(unsigned)arg1 Code:(/*^block*/id)arg2 ;
+(id)kernelVersionDescription;
+(id)bootArgs;
-(id)init;
-(BOOL)secondChanceToSylog;
-(NSString *)logfile;
-(id)problemType;
-(int)streamContentAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)incidentID;
-(id)getSyslogForPid:(int)arg1 andOptionalSenders:(id)arg2 ;
-(BOOL)saveWithOptions:(id)arg1 ;
-(id)additionalIPSMetadata;
-(void)alignIncident:(id)arg1 at:(double)arg2 ;
-(double)captureTime;
-(double)capture_time;
-(BOOL)isAppleTV;
-(id)appleCareDetails;
-(id)reportNamePrefix;
-(void)symlink:(id)arg1 ;
-(NSArray *)notes;
-(void)generateLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)isActionable;
@end

