/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageCGImageContent.h>

@class _UICGImageDecompressor;

@interface _UIImageAsyncCGImageContent : _UIImageCGImageContent {

	long long _orientation;
	BOOL _finishedDecompressing;
	_UICGImageDecompressor* _decompressor;

}

@property (assign) BOOL finishedDecompressing;              //@synthesize finishedDecompressing=_finishedDecompressing - In the implementation block
@property (readonly) long long orientation; 
-(CGImageRef)CGImage;
-(BOOL)finishedDecompressing;
-(BOOL)isDecompressing;
-(void)setFinishedDecompressing:(BOOL)arg1 ;
-(unsigned long long)hash;
-(long long)orientation;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithData:(id)arg1 immediateLoadWithMaxSize:(CGSize)arg2 scale:(double)arg3 renderingIntent:(unsigned long long)arg4 cache:(BOOL)arg5 ;
@end
