/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNPassContext : NSObject {

	SCD_Struct_SC40* _context;

}

@property (nonatomic,readonly) double time; 
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue; 
@property (nonatomic,readonly) id<MTLCommandBuffer> commandBuffer; 
@property (nonatomic,readonly) id<MTLDevice> device; 
-(id<MTLCommandQueue>)commandQueue;
-(double)time;
-(id<MTLDevice>)device;
-(id<MTLCommandBuffer>)commandBuffer;
-(id)inputTextureWithName:(id)arg1 ;
-(id)outputTextureWithName:(id)arg1 ;
@end

