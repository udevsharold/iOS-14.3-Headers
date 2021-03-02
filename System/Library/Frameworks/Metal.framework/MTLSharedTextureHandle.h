/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MTLSharedTextureHandle : NSObject <NSSecureCoding> {

	MTLSharedTextureHandlePrivate* _priv;

}

@property (readonly) id<MTLDevice> device; 
@property (readonly) NSString * label; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id<MTLDevice>)device;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 label:(id)arg2 ;
-(unsigned)createMachPort;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMachPort:(unsigned)arg1 ;
-(IOSurfaceRef)ioSurface;
-(NSString *)label;
-(void)encodeWithCoder:(id)arg1 ;
@end
