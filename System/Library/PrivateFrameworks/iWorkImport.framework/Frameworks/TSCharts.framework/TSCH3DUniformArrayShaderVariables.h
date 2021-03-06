/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface TSCH3DUniformArrayShaderVariables : NSObject {

	NSString* mPrefix;
	NSMutableDictionary* mVariables;
	unsigned long long mArraySize;

}

@property (nonatomic,readonly) unsigned long long arraySize; 
+(id)variablesWithPrefix:(id)arg1 arraySize:(unsigned long long)arg2 ;
-(void)dealloc;
-(unsigned long long)arraySize;
-(id)variableAtIndex:(unsigned long long)arg1 name:(id)arg2 ;
-(id)initWithPrefix:(id)arg1 arraySize:(unsigned long long)arg2 ;
-(id)p_formatVariableName:(id)arg1 ;
-(void)setVariable:(id)arg1 forName:(id)arg2 ;
-(id)variableForName:(id)arg1 ;
-(void)addArrayName:(id)arg1 type:(id)arg2 ;
-(void)addUniformsToShaderProgram:(id)arg1 size:(unsigned long long)arg2 ;
@end

