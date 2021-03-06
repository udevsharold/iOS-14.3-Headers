/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <CoreFoundation/NSOutputStream.h>

@class NSOutputStream, NSError;

@interface SSGzipOutputStream : NSOutputStream {

	NSOutputStream* _backingStream;
	z_stream_s* _stream;
	unsigned long long _streamContentLength;
	NSError* _streamError;
	char* _streamOutBuffer;
	unsigned long long _streamOutBufferSize;

}
-(id)initToFileAtPath:(id)arg1 append:(BOOL)arg2 ;
-(BOOL)hasSpaceAvailable;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(BOOL)_initializeOutputStream;
-(void)_setStreamError:(int)arg1 context:(id)arg2 ;
-(long long)_consumeStreamOutput:(BOOL)arg1 ;
-(unsigned long long)streamContentLength;
-(id)streamError;
-(id)initToMemory;
-(unsigned long long)streamStatus;
-(void)close;
-(void)open;
-(id)propertyForKey:(id)arg1 ;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
@end

