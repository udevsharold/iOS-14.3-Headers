/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpenGLES/OpenGLES-Structs.h>
@class NSString, EAGLSharegroup;

@interface EAGLContext : NSObject {

	EAGLContextPrivate* _private;
	NSString* debugLabel;

}

@property (readonly) unsigned long long API; 
@property (readonly) EAGLSharegroup * sharegroup; 
@property (nonatomic,copy) NSString * debugLabel; 
@property (assign,getter=isMultiThreaded,nonatomic) BOOL multiThreaded; 
+(BOOL)setCurrentContext:(id)arg1 ;
+(id)currentContext;
-(id)init;
-(BOOL)setBlockFence:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(void)setMultiThreaded:(BOOL)arg1 ;
-(void)dealloc;
-(EAGLMacroContextRef)GetMacroContextPrivate;
-(unsigned long long)getParameter:(unsigned)arg1 to:(int*)arg2 ;
-(BOOL)attachImage:(unsigned long long)arg1 toCoreSurface:(IOSurfaceRef)arg2 invertedRender:(BOOL)arg3 ;
-(NSString *)debugLabel;
-(EAGLMacroContextRef)getMacroContextPrivate;
-(id)initWithAPI:(unsigned long long)arg1 sharegroup:(id)arg2 ;
-(id)initWithAPI:(unsigned long long)arg1 sharedWithCompute:(BOOL)arg2 ;
-(BOOL)renderbufferStorage:(unsigned long long)arg1 fromDrawable:(id)arg2 ;
-(EAGLSharegroup *)sharegroup;
-(BOOL)texImageIOSurface:(IOSurfaceRef)arg1 target:(unsigned long long)arg2 internalFormat:(unsigned long long)arg3 width:(unsigned)arg4 height:(unsigned)arg5 format:(unsigned long long)arg6 type:(unsigned long long)arg7 plane:(unsigned)arg8 invert:(BOOL)arg9 ;
-(id)commonInitWithAPI:(unsigned long long)arg1 properties:(id)arg2 ;
-(id)initWithAPI:(unsigned long long)arg1 properties:(id)arg2 ;
-(BOOL)isMultiThreaded;
-(void)setDebugLabel:(NSString *)arg1 ;
-(BOOL)presentRenderbuffer:(unsigned long long)arg1 atTime:(double)arg2 ;
-(unsigned long long)API;
-(unsigned long long)setParameter:(unsigned)arg1 to:(int*)arg2 ;
-(BOOL)texImageIOSurface:(IOSurfaceRef)arg1 target:(unsigned long long)arg2 internalFormat:(unsigned long long)arg3 width:(unsigned)arg4 height:(unsigned)arg5 format:(unsigned long long)arg6 type:(unsigned long long)arg7 plane:(unsigned)arg8 ;
-(id)initWithAPI:(unsigned long long)arg1 ;
-(BOOL)presentRenderbuffer:(unsigned long long)arg1 ;
-(BOOL)presentRenderbuffer:(unsigned long long)arg1 afterMinimumDuration:(double)arg2 ;
@end
