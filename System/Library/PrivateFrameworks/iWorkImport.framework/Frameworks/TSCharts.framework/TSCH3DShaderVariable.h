/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface TSCH3DShaderVariable : NSObject <NSCopying> {

	NSString* mName;
	NSString* mType;
	NSString* mPrecision;
	unsigned long long mArraySize;
	TSCH3DShaderType mShaderType;
	BOOL mIsSpecial;
	TSCH3DShaderVariable* mGenericName;
	NSArray* mElements;
	unsigned long long mComponentCount;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * commonShaderType; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSString * precision; 
@property (nonatomic,readonly) TSCH3DShaderType shaderType; 
@property (nonatomic,readonly) TSCH3DShaderType initialLinkType; 
@property (nonatomic,readonly) TSCH3DShaderVariable * genericName; 
@property (nonatomic,readonly) BOOL isSpecial; 
@property (nonatomic,readonly) BOOL isTexture; 
@property (nonatomic,readonly) unsigned long long componentCount; 
@property (nonatomic,readonly) unsigned long long arraySize; 
+(id)variableWithName:(id)arg1 type:(id)arg2 precision:(id)arg3 arraySize:(unsigned long long)arg4 shaderType:(TSCH3DShaderType)arg5 isSpecial:(BOOL)arg6 generic:(id)arg7 ;
-(NSString *)precision;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)hash;
-(id)description;
-(NSString *)type;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(TSCH3DShaderType)initialLinkType;
-(TSCH3DShaderVariable *)genericName;
-(TSCH3DShaderType)shaderType;
-(unsigned long long)arraySize;
-(unsigned long long)componentCount;
-(id)initWithName:(id)arg1 type:(id)arg2 precision:(id)arg3 arraySize:(unsigned long long)arg4 shaderType:(TSCH3DShaderType)arg5 isSpecial:(BOOL)arg6 generic:(id)arg7 ;
-(id)variableAtIndex:(unsigned long long)arg1 ;
-(BOOL)isSpecial;
-(BOOL)isTexture;
-(NSString *)commonShaderType;
@end
