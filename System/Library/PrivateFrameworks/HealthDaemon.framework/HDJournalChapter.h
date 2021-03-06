/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol HDJournalChapter <NSObject>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * journalPath; 
@property (nonatomic,readonly) BOOL isOpen; 
@property (nonatomic,readonly) long long size; 
@property (nonatomic,readonly) double modificationTime; 
@required
-(BOOL)isOpen;
-(long long)size;
-(NSString *)name;
-(double)modificationTime;
-(void)close;
-(BOOL)openForReadingWithError:(id*)arg1;
-(NSString *)journalPath;
-(unsigned)readVersionWithError:(id*)arg1;
-(BOOL)removeWithError:(id*)arg1;
-(BOOL)createAndOpenForWritingWithError:(id*)arg1;
-(BOOL)canAppendData:(id)arg1;
-(BOOL)appendData:(id)arg1 entryClass:(Class)arg2 error:(id*)arg3;
-(BOOL)flushDataToDisk:(id*)arg1;
-(unsigned)enumerateEntriesWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4;

@end

