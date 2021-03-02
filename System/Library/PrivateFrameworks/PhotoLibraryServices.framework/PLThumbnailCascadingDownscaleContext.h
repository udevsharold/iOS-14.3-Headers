/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSLock, PLThumbnailContextCleanupTimer;

@interface PLThumbnailCascadingDownscaleContext : NSObject {

	NSLock* _lock;
	FigCascadeContextRef _portraitContext;
	FigCascadeContextRef _landscapeContext;
	PLThumbnailContextCleanupTimer* _idleCleanupTimer;

}
-(id)init;
-(void)dealloc;
-(void)discardContexts;
-(void)_cleanupTimerFired;
-(BOOL)downscaleImageSurface:(IOSurfaceRef)arg1 destinationCount:(int)arg2 sizes:(SCD_Struct_PL29*)arg3 cropModes:(int*)arg4 pixelFormat:(unsigned)arg5 bytesPerRowAlignment:(int)arg6 destinationData:(id)arg7 ;
@end
