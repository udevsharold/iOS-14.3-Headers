/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLPipeline.h>
#import <libobjc.A.dylib/MLUpdatable.h>

@protocol OS_dispatch_queue;
@class MLUpdateProgressHandlers, NSObject, NSString;

@interface MLPipelineUpdateEngine : MLPipeline <MLUpdatable> {

	MLUpdateProgressHandlers* _progressHandlers;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	vector<unsigned long long, std::__1::allocator<unsigned long long> >* _updatableModelIndicies;

}

@property (readonly) vector<unsigned long long updatableModelIndicies;              //@synthesize updatableModelIndicies=_updatableModelIndicies - In the implementation block
@property (retain) MLUpdateProgressHandlers * progressHandlers;                     //@synthesize progressHandlers=_progressHandlers - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> dispatchQueue;                      //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromCompiledArchive:(MLModelInputArchiver*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
-(void)cancelUpdate;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(void)resumeUpdateWithParameters:(id)arg1 ;
-(void)setProgressHandlers:(MLUpdateProgressHandlers *)arg1 ;
-(void)resumeUpdate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setUpdateProgressHandlers:(id)arg1 dispatchQueue:(id)arg2 ;
-(void)updateModelWithData:(id)arg1 ;
-(MLUpdateProgressHandlers *)progressHandlers;
-(vector<unsigned long long)updatableModelIndicies;
-(id)parameterValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initFromCompiledArchive:(MLModelInputArchiver*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
@end

