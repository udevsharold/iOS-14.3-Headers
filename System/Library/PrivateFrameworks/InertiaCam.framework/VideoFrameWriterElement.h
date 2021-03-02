/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <InertiaCam/InertiaCam-Structs.h>
@interface VideoFrameWriterElement : NSObject {

	CVBufferRef _pixelBuffer;
	SCD_Struct_Vi2 _frameTime;
	long long _frameNumber;

}

@property (assign,nonatomic) CVBufferRef pixelBuffer;               //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (assign,nonatomic) SCD_Struct_Vi2 frameTime;              //@synthesize frameTime=_frameTime - In the implementation block
@property (assign,nonatomic) long long frameNumber;                 //@synthesize frameNumber=_frameNumber - In the implementation block
-(void)dealloc;
-(SCD_Struct_Vi2)frameTime;
-(long long)frameNumber;
-(void)setFrameTime:(SCD_Struct_Vi2)arg1 ;
-(CVBufferRef)pixelBuffer;
-(void)setFrameNumber:(long long)arg1 ;
-(void)setPixelBuffer:(CVBufferRef)arg1 ;
-(void)DeallocPixBuffer;
@end
