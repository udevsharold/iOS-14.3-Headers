/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, RERelevanceEngineConfiguration, REFeatureSet, NSArray, RELiveElementCoordinator, REDataSourceManager, REMLModelManager;


@protocol RERelevanceEngineProperties <REExportedInterface>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) RERelevanceEngineConfiguration * configuration; 
@property (nonatomic,readonly) REFeatureSet * rootFeatures; 
@property (nonatomic,readonly) REFeatureSet * mlFeatures; 
@property (nonatomic,readonly) NSArray * subsystems; 
@property (nonatomic,readonly) RELiveElementCoordinator * coordinator; 
@property (nonatomic,readonly) REDataSourceManager * dataSourceManager; 
@property (nonatomic,readonly) REMLModelManager * modelManager; 
@required
-(REDataSourceManager *)dataSourceManager;
-(NSArray *)subsystems;
-(RERelevanceEngineConfiguration *)configuration;
-(NSString *)name;
-(RELiveElementCoordinator *)coordinator;
-(REMLModelManager *)modelManager;
-(REFeatureSet *)mlFeatures;
-(REFeatureSet *)rootFeatures;

@end
