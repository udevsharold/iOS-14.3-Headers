/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreNFC/NFCReaderSession.h>

@interface NFCISO15693ReaderSession : NFCReaderSession
+(BOOL)readingAvailable;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)didDetectTags:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sessionDelegateType:(long long)arg2 queue:(id)arg3 pollMethod:(unsigned long long)arg4 sessionConfig:(unsigned long long)arg5 ;
-(void)restartPolling;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 pollMethod:(unsigned long long)arg3 ;
@end
