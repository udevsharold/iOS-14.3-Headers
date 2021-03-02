/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID, NSString;


@protocol SignpostSupportLoggingSupportArchiveEvent <NSObject>
@property (assign,nonatomic) unsigned long long _machContinuousTimestamp; 
@property (assign,nonatomic) int processID; 
@property (assign,nonatomic) unsigned long long processUniqueID; 
@property (assign,nonatomic) unsigned long long threadID; 
@property (nonatomic,retain) NSUUID * processImageUUID; 
@property (nonatomic,retain) NSString * processImagePath; 
@property (nonatomic,retain) NSString * processName; 
@property (assign,nonatomic) long long tv_sec; 
@property (assign,nonatomic) int tv_usec; 
@property (assign,nonatomic) int tz_minuteswest; 
@property (assign,nonatomic) int tz_dsttime; 
@required
-(NSUUID *)processImageUUID;
-(void)setProcessName:(id)arg1;
-(NSString *)processName;
-(unsigned long long)processUniqueID;
-(NSString *)processImagePath;
-(void)setThreadID:(unsigned long long)arg1;
-(long long)tv_sec;
-(unsigned long long)threadID;
-(int)processID;
-(void)setProcessID:(int)arg1;
-(int)tv_usec;
-(void)set_machContinuousTimestamp:(unsigned long long)arg1;
-(void)setProcessUniqueID:(unsigned long long)arg1;
-(void)setProcessImageUUID:(id)arg1;
-(void)setProcessImagePath:(id)arg1;
-(id)beginWallTimeStringWithTimeZoneName:(id)arg1;
-(id)endWallTimeStringWithTimeZoneName:(id)arg1;
-(unsigned long long)_machContinuousTimestamp;
-(int)tz_minuteswest;
-(int)tz_dsttime;
-(void)setTv_sec:(long long)arg1;
-(void)setTv_usec:(int)arg1;
-(void)setTz_minuteswest:(int)arg1;
-(void)setTz_dsttime:(int)arg1;

@end
