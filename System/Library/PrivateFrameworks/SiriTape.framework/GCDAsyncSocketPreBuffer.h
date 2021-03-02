/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GCDAsyncSocketPreBuffer : NSObject {

	char* preBuffer;
	unsigned long long preBufferSize;
	char* readPointer;
	char* writePointer;

}
-(unsigned long long)availableBytes;
-(char*)readBuffer;
-(void)reset;
-(void)dealloc;
-(unsigned long long)availableSpace;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)ensureCapacityForWrite:(unsigned long long)arg1 ;
-(void)getReadBuffer:(char**)arg1 availableBytes:(unsigned long long*)arg2 ;
-(void)didRead:(unsigned long long)arg1 ;
-(char*)writeBuffer;
-(void)getWriteBuffer:(char**)arg1 availableSpace:(unsigned long long*)arg2 ;
-(void)didWrite:(unsigned long long)arg1 ;
@end
