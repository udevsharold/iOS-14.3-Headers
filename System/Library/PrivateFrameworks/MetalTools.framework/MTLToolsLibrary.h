/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLLibrarySPI.h>

@class NSString, NSArray;

@interface MTLToolsLibrary : MTLToolsObject <MTLLibrarySPI>

@property (copy) NSString * overrideTriple; 
@property (readonly) NSArray * externFunctionNames; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) NSArray * functionNames; 
@property (readonly) long long type; 
@property (readonly) NSString * installName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)newIntersectionFunctionWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)externFunctionNames;
-(void)setOverrideTriple:(NSString *)arg1 ;
-(id<MTLDevice>)device;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3 ;
-(NSString *)installName;
-(id)newFunctionWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(long long)type;
-(id)newIntersectionFunctionWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id*)arg4 ;
-(void)newFunctionWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setLabel:(NSString *)arg1 ;
-(id)newFunctionWithName:(id)arg1 ;
-(id)newExternFunctionWithName:(id)arg1 ;
-(NSString *)overrideTriple;
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSArray *)functionNames;
-(NSString *)label;
@end
