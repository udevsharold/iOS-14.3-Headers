/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, MTLType, NSArray;


@protocol MTLFunctionSPI <MTLFunction>
@property (copy,readonly) NSString * filePath; 
@property (readonly) long long lineNumber; 
@property (copy,readonly) NSString * unpackedFilePath; 
@property (readonly) unsigned long long renderTargetArrayIndexType; 
@property (readonly) MTLType * returnType; 
@property (readonly) NSArray * arguments; 
@required
-(NSString *)unpackedFilePath;
-(const SCD_Struct_MT19*)bitCodeHash;
-(id)reflectionWithOptions:(unsigned long long)arg1 binaryArchives:(id)arg2;
-(id)bitcodeData;
-(id)reflectionWithOptions:(unsigned long long)arg1;
-(NSString *)filePath;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 pipelineLibrary:(id)arg3;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 binaryArchives:(id)arg3;
-(id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 pipelineLibrary:(id)arg2;
-(id)reflectionWithOptions:(unsigned long long)arg1 pipelineLibrary:(id)arg2;
-(NSArray *)arguments;
-(void)reflectionWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(long long)lineNumber;
-(unsigned long long)renderTargetArrayIndexType;
-(MTLType *)returnType;

@end

