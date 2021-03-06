/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLArgumentInternal.h>

@interface MTLIndirectConstantArgument : MTLArgumentInternal {

	unsigned short _dataType;
	unsigned short _alignment;
	unsigned short _dataSize;
	unsigned long long _pixelFormat;
	unsigned long long _aluType;

}
-(unsigned long long)bufferPixelFormat;
-(unsigned long long)indirectConstantDataType;
-(unsigned long long)indirectConstantDataSize;
-(unsigned long long)indirectConstantAlignment;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(BOOL)arg4 locationIndex:(unsigned long long)arg5 dataType:(unsigned long long)arg6 pixelFormat:(unsigned long long)arg7 aluType:(unsigned long long)arg8 dataSize:(unsigned long long)arg9 alignment:(unsigned long long)arg10 ;
-(unsigned long long)bufferALUType;
@end

