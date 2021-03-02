/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierMat3 : TSDGLShaderQualifier {

	CGAffineTransform _affineTransform;
	CGAffineTransform _proposedAffineTransform;

}

@property (nonatomic,readonly) CGAffineTransform affineTransform;                    //@synthesize affineTransform=_affineTransform - In the implementation block
@property (assign,nonatomic) CGAffineTransform proposedAffineTransform;              //@synthesize proposedAffineTransform=_proposedAffineTransform - In the implementation block
-(CGAffineTransform)affineTransform;
-(id)description;
-(void)setGLUniformWithShader:(id)arg1 ;
-(void)setProposedAffineTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)proposedAffineTransform;
@end
