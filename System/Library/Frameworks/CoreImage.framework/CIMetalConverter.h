/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLFunction;
#import <CoreImage/CoreImage-Structs.h>
@interface CIMetalConverter : NSObject {

	id<MTLDevice> _device;
	id<MTLFunction> _convertToTexture;
	id<MTLFunction> _convertToBuffer;

}
-(id)initWithDevice:(id)arg1 kernelName:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceBuffer:(id)arg2 sourceRowBytes:(unsigned long long)arg3 destinationTexture:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceBuffer:(id)arg2 sourceRowBytes:(unsigned long long)arg3 destinationBuffer:(id)arg4 destinationRowBytes:(unsigned long long)arg5 destinationSize:(SCD_Struct_CI5)arg6 ;
-(void)dealloc;
@end

