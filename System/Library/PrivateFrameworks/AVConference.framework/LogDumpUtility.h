/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface LogDumpUtility : NSObject
+(id)getCachesDirectoryPath;
+(id)filesSortedByTimestamp:(id)arg1 ;
+(void)removeOldFilesInDefaultLogDumpPath;
+(id)getDefaultLogDumpPath;
+(void)removeFilesInDirectory:(id)arg1 olderThan:(id)arg2 ;
+(BOOL)createDirectory:(id)arg1 ;
+(id)logFilename:(int)arg1 dumpID:(id)arg2 logNameType:(int)arg3 prefix:(id)arg4 suffix:(id)arg5 ;
@end

