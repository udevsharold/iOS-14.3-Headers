/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MLModeling;
#import <CoreML/CoreML-Structs.h>
@class NSURL, NSObject, MLModelConfiguration;

@interface MLModelAsset : NSObject {

	BOOL _ranLoad;
	NSURL* _compiledURL;
	NSObject*<MLModeling> _asset;
	MLModelConfiguration* _loadConfiguration;

}

@property (assign) BOOL ranLoad;                                                      //@synthesize ranLoad=_ranLoad - In the implementation block
@property (retain) NSObject*<MLModeling> asset;                                       //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) MLModelConfiguration * loadConfiguration;              //@synthesize loadConfiguration=_loadConfiguration - In the implementation block
@property (readonly) NSURL * compiledURL;                                             //@synthesize compiledURL=_compiledURL - In the implementation block
@property (nonatomic,readonly) id<MLModeling> model; 
@property (nonatomic,readonly) id<MLRegressor> regressor; 
@property (nonatomic,readonly) id<MLClassifier> classifier; 
+(id)modelAssetWithURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)modelAssetWithURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)purgeANEIRForModelAtURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)purgeANEBinaryForModelAtURL:(id)arg1 error:(id*)arg2 ;
+(id)modelAssetWithSpecification:(MLModelSpecification*)arg1 error:(id*)arg2 ;
+(id)fetchNetworkURLFromCompiledModelAtURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)isANESupported;
+(id)modelAssetWithSpecificationURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)needsANECompilationForModelAtURL:(id)arg1 result:(BOOL*)arg2 error:(id*)arg3 ;
-(BOOL)load:(id*)arg1 ;
-(NSObject*<MLModeling>)asset;
-(void)setAsset:(NSObject*<MLModeling>)arg1 ;
-(BOOL)ranLoad;
-(id<MLClassifier>)classifier;
-(id<MLModeling>)model;
-(id)modelWithError:(id*)arg1 ;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(id)classifierWithError:(id*)arg1 ;
-(id)description;
-(MLModelConfiguration *)loadConfiguration;
-(id)initWithURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(NSURL *)compiledURL;
-(id)regressorWithError:(id*)arg1 ;
-(void)setRanLoad:(BOOL)arg1 ;
-(id<MLRegressor>)regressor;
@end
