/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HKHealthStore;


@protocol HKDataMetadataViewControllerDelegate <NSObject>
@property (nonatomic,readonly) HKHealthStore * healthStore; 
@optional
-(id)displayTypeController;
-(id)unitController;
-(id)accessViewControllerForSample:(id)arg1 healthStore:(id)arg2;
-(id)viewControllerForSampleType:(id)arg1 subSamplePredicate:(id)arg2 title:(id)arg3;
-(id)defaultPredicateForSampleType:(id)arg1;
-(BOOL)shareDocumentUsingSample:(id)arg1;

@required
-(HKHealthStore *)healthStore;

@end

