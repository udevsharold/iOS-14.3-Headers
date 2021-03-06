/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TRIPaths;
@class NSString;

@interface TRITreatmentInfo : NSObject {

	id<TRIPaths> _paths;
	int _deploymentId;
	NSString* _namespaceName;
	NSString* _treatmentId;
	NSString* _experimentId;

}

@property (nonatomic,retain) NSString * namespaceName;              //@synthesize namespaceName=_namespaceName - In the implementation block
@property (nonatomic,retain) NSString * treatmentId;                //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,retain) NSString * experimentId;               //@synthesize experimentId=_experimentId - In the implementation block
@property (assign,nonatomic) int deploymentId;                      //@synthesize deploymentId=_deploymentId - In the implementation block
+(id)loadInfoForTreatment:(id)arg1 namespaceName:(id)arg2 paths:(id)arg3 ;
-(id)infoDictionary;
-(BOOL)load;
-(void)setTreatmentId:(NSString *)arg1 ;
-(int)deploymentId;
-(NSString *)experimentId;
-(void)setDeploymentId:(int)arg1 ;
-(id)urlWithDir:(id)arg1 ;
-(id)_treatmentBasePath;
-(id)baseUrlForTreatment:(id)arg1 namespaceName:(id)arg2 ;
-(id)treatmentDirectory;
-(BOOL)loadFromUrl:(id)arg1 ;
-(BOOL)saveToUrl:(id)arg1 ;
-(BOOL)save;
-(BOOL)saveToDir:(id)arg1 ;
-(NSString *)namespaceName;
-(id)initWithPaths:(id)arg1 ;
-(void)setExperimentId:(NSString *)arg1 ;
-(NSString *)treatmentId;
-(void)setNamespaceName:(NSString *)arg1 ;
-(id)baseUrlForTreatmentsWithNamespaceName:(id)arg1 ;
-(id)url;
@end

