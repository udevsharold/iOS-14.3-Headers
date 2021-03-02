/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUStreamReadChannel.h>

@protocol TSUStreamReadChannel;
@class NSString;

@interface TSUZipInflateReadChannel : NSObject <TSUStreamReadChannel> {

	id<TSUStreamReadChannel> _readChannel;
	unsigned long long _remainingUncompressedSize;
	unsigned _CRC;
	BOOL _validateCRC;
	z_stream_s* _stream;
	unsigned long long _outBufferSize;
	char* _outBuffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)close;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(id)initWithReadChannel:(id)arg1 uncompressedSize:(unsigned long long)arg2 CRC:(unsigned)arg3 validateCRC:(BOOL)arg4 ;
-(void)handleFailureWithHandler:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)prepareBuffer;
-(BOOL)processData:(id)arg1 inflateResult:(int*)arg2 CRC:(unsigned*)arg3 isDone:(BOOL)arg4 handler:(/*^block*/id)arg5 ;
-(void)readWithHandlerAndWait:(/*^block*/id)arg1 ;
@end
