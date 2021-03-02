/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@interface AXMPixelBufferWrapper : NSObject {

	CVBufferRef _pixelBuffer;
	unsigned _orientation;

}

@property (nonatomic,readonly) CVBufferRef pixelBuffer; 
@property (nonatomic,readonly) unsigned orientation; 
@property (nonatomic,readonly) CGSize unorientedSize; 
@property (nonatomic,readonly) CGSize orientedSize; 
+(id)new;
+(id)wrapperWithPixelBuffer:(CVBufferRef)arg1 orientation:(unsigned)arg2 ;
-(id)init;
-(void)dealloc;
-(CGSize)orientedSize;
-(unsigned)orientation;
-(id)_initWithPixelBuffer:(CVBufferRef)arg1 orientation:(unsigned)arg2 ;
-(CGSize)unorientedSize;
-(CVBufferRef)pixelBuffer;
@end
