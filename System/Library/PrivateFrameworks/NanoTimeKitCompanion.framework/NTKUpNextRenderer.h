/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:30:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLTexture;
#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class CARenderer;

@interface NTKUpNextRenderer : NSObject {

	CARenderer* _renderer;
	IOSurfaceRef _ioSurface;
	id<MTLTexture> _texture;

}
-(void)dealloc;
-(IOSurfaceRef)newSurfaceWithWidth:(double)arg1 height:(double)arg2 ;
-(id)renderView:(id)arg1 ;
@end
