/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriCore/SiriCore-Structs.h>
#import <SiriCore/SiriCoreDataDecompressor.h>

@interface SiriCoreZlibDataDecompressor : SiriCoreDataDecompressor {

	z_stream_s* _inflateStream;
	unsigned char _inflateBuffer[8192];

}
-(id)init;
-(void)dealloc;
-(id)decompressedDataForData:(id)arg1 error:(id*)arg2 ;
@end

