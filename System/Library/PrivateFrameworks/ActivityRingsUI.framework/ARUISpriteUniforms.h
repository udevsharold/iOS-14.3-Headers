/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
@interface ARUISpriteUniforms : NSObject {

	SCD_Struct_AR1 _uniforms;
	SCD_Struct_AR3 _vertexAttributes;

}

@property (nonatomic,readonly) SCD_Struct_AR3 vertexAttributes;              //@synthesize vertexAttributes=_vertexAttributes - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR1 uniforms;                      //@synthesize uniforms=_uniforms - In the implementation block
-(SCD_Struct_AR3)vertexAttributes;
-(SCD_Struct_AR1)uniforms;
-(void)_updateVertexAttributesWithSprite:(id)arg1 inContet:(id)arg2 ;
-(void)_updateUniformsWithSprite:(id)arg1 ;
-(id)initWithSprite:(id)arg1 inContext:(id)arg2 ;
-(void*)vertexAttributesBytes;
-(void*)uniformsBytes;
@end

