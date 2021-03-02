/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileHandle.h>

@interface NSNullFileHandle : NSFileHandle
-(/*^block*/id)writeabilityHandler;
-(BOOL)seekToEndReturningOffset:(out unsigned long long*)arg1 error:(out id*)arg2 ;
-(void)writeData:(id)arg1 ;
-(id)availableData;
-(BOOL)writeData:(id)arg1 error:(out id*)arg2 ;
-(void)synchronizeFile;
-(unsigned long long)offsetInFile;
-(void)closeFile;
-(BOOL)getOffset:(out unsigned long long*)arg1 error:(out id*)arg2 ;
-(void)setReadabilityHandler:(/*^block*/id)arg1 ;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(id)readDataUpToLength:(unsigned long long)arg1 error:(out id*)arg2 ;
-(int)fileDescriptor;
-(void)seekToFileOffset:(unsigned long long)arg1 ;
-(void)setWriteabilityHandler:(/*^block*/id)arg1 ;
-(unsigned long long)seekToEndOfFile;
-(void)truncateFileAtOffset:(unsigned long long)arg1 ;
-(id)readDataToEndOfFile;
-(id)readDataToEndOfFileAndReturnError:(out id*)arg1 ;
-(BOOL)synchronizeAndReturnError:(out id*)arg1 ;
-(BOOL)seekToOffset:(unsigned long long)arg1 error:(out id*)arg2 ;
-(BOOL)closeAndReturnError:(out id*)arg1 ;
-(/*^block*/id)readabilityHandler;
-(BOOL)truncateAtOffset:(unsigned long long)arg1 error:(out id*)arg2 ;
@end
