/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DShaderEffect.h>

@class TSCH3DShaderVariable;

@interface TSCH3DGaussianBlurShaderEffect : TSCH3DShaderEffect {

	TSCH3DShaderVariable* mSamplingTexcoords;

}
+(id)variableTexture;
+(id)variableAccum;
+(id)variableTapUnit;
+(void)setTapUnit:(tvec2<float>)arg1 effectsStates:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)addVariables:(id)arg1 ;
-(id)variableTexture;
-(void)injectCommonShaderInto:(id)arg1 context:(id)arg2 ;
-(void)uploadData:(id)arg1 effectsStates:(id)arg2 ;
-(id)variableAccum;
-(id)variableTapUnit;
@end

