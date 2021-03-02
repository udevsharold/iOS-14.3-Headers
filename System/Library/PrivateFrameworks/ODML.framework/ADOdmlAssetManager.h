/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ODML.framework/ODML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TRIClient, APOdmlFeatureStorage, NSObject, NSOperationQueue, NSString;

@interface ADOdmlAssetManager : NSObject {

	TRIClient* _trialClient;
	APOdmlFeatureStorage* _featureStorage;
	NSObject* _featureStorageNotificationObserver;
	NSOperationQueue* _featureStorageRefreshQueue;

}

@property (nonatomic,readonly) TRIClient * trialClient;                                  //@synthesize trialClient=_trialClient - In the implementation block
@property (nonatomic,retain) APOdmlFeatureStorage * featureStorage;                      //@synthesize featureStorage=_featureStorage - In the implementation block
@property (nonatomic,retain) NSObject * featureStorageNotificationObserver;              //@synthesize featureStorageNotificationObserver=_featureStorageNotificationObserver - In the implementation block
@property (nonatomic,retain) NSOperationQueue * featureStorageRefreshQueue;              //@synthesize featureStorageRefreshQueue=_featureStorageRefreshQueue - In the implementation block
@property (nonatomic,readonly) int deploymentID; 
@property (nonatomic,readonly) NSString * experimentID; 
@property (nonatomic,readonly) NSString * treatmentID; 
@property (nonatomic,readonly) NSString * odmlNamespace; 
@property (nonatomic,readonly) int odmlVersion; 
+(id)sharedAssetManager;
-(NSString *)experimentID;
-(id)init;
-(NSString *)treatmentID;
-(id)getDoubleValueForFactor:(id)arg1 ;
-(id)getStringValueForFactor:(id)arg1 ;
-(TRIClient *)trialClient;
-(id)getBooleanValueForFactor:(id)arg1 ;
-(id)getLongValueForFactor:(id)arg1 ;
-(int)deploymentID;
-(void)refreshTrialClient;
-(int)odmlVersion;
-(id)getPathForFactor:(id)arg1 isDirectory:(BOOL)arg2 ;
-(void)saveFeatureFromObject:(id)arg1 withName:(id)arg2 ;
-(id)getFeatureVectorForName:(id)arg1 ;
-(id)currentMLModel;
-(NSString *)odmlNamespace;
-(NSOperationQueue *)featureStorageRefreshQueue;
-(void)refreshFeatureStorage;
-(APOdmlFeatureStorage *)featureStorage;
-(void)setFeatureStorage:(APOdmlFeatureStorage *)arg1 ;
-(NSObject *)featureStorageNotificationObserver;
-(void)setFeatureStorageNotificationObserver:(NSObject *)arg1 ;
-(void)setFeatureStorageRefreshQueue:(NSOperationQueue *)arg1 ;
@end
