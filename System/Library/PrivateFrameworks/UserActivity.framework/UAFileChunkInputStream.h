/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSInputStream.h>

@class NSFileHandle, NSNumber;

@interface UAFileChunkInputStream : NSInputStream {

	NSFileHandle* _file;
	NSNumber* _chunkOffset;
	long long _chunkSize;
	NSNumber* _currentOffset;
	long long _readSize;
	unsigned long long _status;

}

@property (retain) NSFileHandle * file;                    //@synthesize file=_file - In the implementation block
@property (retain) NSNumber * chunkOffset;                 //@synthesize chunkOffset=_chunkOffset - In the implementation block
@property (assign) long long chunkSize;                    //@synthesize chunkSize=_chunkSize - In the implementation block
@property (retain) NSNumber * currentOffset;               //@synthesize currentOffset=_currentOffset - In the implementation block
@property (assign) long long readSize;                     //@synthesize readSize=_readSize - In the implementation block
@property (assign) unsigned long long status;              //@synthesize status=_status - In the implementation block
-(void)setFile:(NSFileHandle *)arg1 ;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(NSNumber *)currentOffset;
-(id)streamError;
-(NSFileHandle *)file;
-(unsigned long long)status;
-(long long)readSize;
-(unsigned long long)streamStatus;
-(long long)chunkSize;
-(void)close;
-(void)setChunkSize:(long long)arg1 ;
-(id)initWithFileHandle:(id)arg1 offsetInFile:(id)arg2 size:(long long)arg3 ;
-(void)open;
-(void)setChunkOffset:(NSNumber *)arg1 ;
-(void)setCurrentOffset:(NSNumber *)arg1 ;
-(void)setReadSize:(long long)arg1 ;
-(NSNumber *)chunkOffset;
-(void)setStatus:(unsigned long long)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)hasBytesAvailable;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
@end
