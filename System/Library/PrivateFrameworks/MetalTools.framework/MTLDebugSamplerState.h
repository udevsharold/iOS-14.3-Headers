/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsSamplerState.h>

@class MTLSamplerDescriptor;

@interface MTLDebugSamplerState : MTLToolsSamplerState {

	MTLSamplerDescriptor* _descriptor;

}

@property (nonatomic,copy,readonly) MTLSamplerDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
+(id)newSamplerStateWithBaseObject:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(MTLSamplerDescriptor *)descriptor;
-(id)_initWithBaseSamplerState:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
@end
