/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SignpostSupport/SignpostSupport-Structs.h>
#import <SignpostSupport/SignpostSupportObject.h>
#import <SignpostSupport/SignpostSupportLoggingSupportArchiveEvent.h>

@class NSUUID, NSString;

@interface SignpostSupportLogMessage : SignpostSupportObject <SignpostSupportLoggingSupportArchiveEvent> {

	unsigned char _messageType;
	BOOL _hasNonScalarDynamicData;
	int _tv_usec;
	int _tz_minuteswest;
	int _tz_dsttime;
	int _processID;
	long long _tv_sec;
	unsigned long long _processUniqueID;
	unsigned long long _threadID;
	NSUUID* _processImageUUID;
	NSString* _processImagePath;
	NSString* _processName;
	NSString* _message;
	unsigned long long __machContinuousTimestamp;

}

@property (assign,nonatomic) unsigned long long _machContinuousTimestamp;              //@synthesize _machContinuousTimestamp=__machContinuousTimestamp - In the implementation block
@property (assign,nonatomic) int processID;                                            //@synthesize processID=_processID - In the implementation block
@property (assign,nonatomic) unsigned long long processUniqueID;                       //@synthesize processUniqueID=_processUniqueID - In the implementation block
@property (assign,nonatomic) unsigned long long threadID;                              //@synthesize threadID=_threadID - In the implementation block
@property (assign,nonatomic) unsigned char messageType;                                //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) long long tv_sec;                                         //@synthesize tv_sec=_tv_sec - In the implementation block
@property (assign,nonatomic) int tv_usec;                                              //@synthesize tv_usec=_tv_usec - In the implementation block
@property (assign,nonatomic) int tz_minuteswest;                                       //@synthesize tz_minuteswest=_tz_minuteswest - In the implementation block
@property (assign,nonatomic) int tz_dsttime;                                           //@synthesize tz_dsttime=_tz_dsttime - In the implementation block
@property (nonatomic,retain) NSUUID * processImageUUID;                                //@synthesize processImageUUID=_processImageUUID - In the implementation block
@property (nonatomic,retain) NSString * processImagePath;                              //@synthesize processImagePath=_processImagePath - In the implementation block
@property (nonatomic,retain) NSString * processName;                                   //@synthesize processName=_processName - In the implementation block
@property (nonatomic,retain) NSString * message;                                       //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL hasNonScalarDynamicData;                             //@synthesize hasNonScalarDynamicData=_hasNonScalarDynamicData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serializationTypeNumber;
-(id)initWithOSLogEventProxy:(id)arg1 ;
-(NSUUID *)processImageUUID;
-(unsigned char)messageType;
-(void)setMessageType:(unsigned char)arg1 ;
-(void)setProcessName:(NSString *)arg1 ;
-(NSString *)message;
-(NSString *)processName;
-(unsigned long long)processUniqueID;
-(NSString *)processImagePath;
-(void)setMessage:(NSString *)arg1 ;
-(void)setThreadID:(unsigned long long)arg1 ;
-(long long)tv_sec;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)threadID;
-(NSString *)debugDescription;
-(int)processID;
-(void)setProcessID:(int)arg1 ;
-(int)tv_usec;
-(unsigned long long)durationMachContinuousTime;
-(unsigned long long)startMachContinuousTime;
-(unsigned long long)endMachContinuousTime;
-(id)initWithSubsystem:(id)arg1 category:(id)arg2 timebaseRatio:(double)arg3 unixDate:(timeval*)arg4 unixTimeZone:(timezone*)arg5 ;
-(void)setHasNonScalarDynamicData:(BOOL)arg1 ;
-(void)set_machContinuousTimestamp:(unsigned long long)arg1 ;
-(void)setProcessUniqueID:(unsigned long long)arg1 ;
-(void)setProcessImageUUID:(NSUUID *)arg1 ;
-(void)setProcessImagePath:(NSString *)arg1 ;
-(id)humanReadableType;
-(id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg1 shouldRedact:(BOOL)arg2 ;
-(BOOL)hasNonScalarDynamicData;
-(unsigned long long)_machContinuousTimestamp;
-(int)tz_minuteswest;
-(int)tz_dsttime;
-(void)setTv_sec:(long long)arg1 ;
-(void)setTv_usec:(int)arg1 ;
-(void)setTz_minuteswest:(int)arg1 ;
-(void)setTz_dsttime:(int)arg1 ;
-(id)_descriptionStringForColumn:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2 asBegin:(BOOL)arg3 ;
@end
