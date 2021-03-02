/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierInt : TSDGLShaderQualifier {

	int _GLintValue;
	int _proposedGLintValue;

}

@property (getter=LintValue,nonatomic,readonly) int GLintValue;              //@synthesize GLintValue=_GLintValue - In the implementation block
@property (assign,nonatomic) int proposedGLintValue;                         //@synthesize proposedGLintValue=_proposedGLintValue - In the implementation block
-(id)description;
-(void)setGLUniformWithShader:(id)arg1 ;
-(int)GLintValue;
-(void)setProposedGLintValue:(int)arg1 ;
-(int)proposedGLintValue;
@end
